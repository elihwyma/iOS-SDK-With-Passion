/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSCache;

@protocol OS_dispatch_queue;

@interface SearchUIContactStore : NSObject

{
    CNContactStore *_contactStore;
    NSCache *_contactCache;
    NSObject<OS_dispatch_queue> *_contactFetchingQueue;
}

@property (retain, nonatomic) NSCache *contactCache;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contactFetchingQueue;

+ (id)sharedStore;
+ (id)placeholderContact;
+ (id)contactForPhoneNumber:(id)arg1 email:(id)arg2;
+ (id)resultTableContactDescriptorKeys;
+ (id)viewControllerDescriptorKeys;

- (id)init;
- (id)contactForIdentifier:(id)arg1;
- (id)cachedContactForIdentifier:(id)arg1;
- (id)cachedContactsForIdentifiers:(id)arg1;
- (void)fetchContactsForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)contactsForIdentifiers:(id)arg1 withKeys:(id)arg2;
- (void)fetchContactForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
