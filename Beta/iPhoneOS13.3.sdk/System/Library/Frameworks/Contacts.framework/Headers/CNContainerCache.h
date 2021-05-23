/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, CNCache, CNContactStore, CNContainer;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CNContainerCache : NSObject

{
    CNContainer *_primaryiCloudContainer;
    CNContactStore *_contactStore;
    ACAccountStore *_accountStore;
    CNCache *_cachedAccounts;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain, nonatomic) CNContainer *primaryiCloudContainer;
@property (weak, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) CNCache *cachedAccounts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)os_log;

- (void)dealloc;
- (id)initWithContactStore:(id)arg1;
- (void)accountStoreDidChange;
- (void)contactStoreDidChange;
- (void)resetAccountCache;
- (void)resetPrimaryiCloudContainer;
- (id)onWorkQueue_findPrimaryiCloudContainer;
- (id)accountForContainer:(id)arg1;
- (id)cnAccountForContainer:(id)arg1;

@end
