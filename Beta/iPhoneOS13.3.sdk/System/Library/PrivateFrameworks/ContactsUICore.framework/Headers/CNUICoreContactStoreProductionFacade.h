/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNContactStore, NSString;

@interface CNUICoreContactStoreProductionFacade : NSObject

{
    CNContactStore *_contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithContactStore:(id)arg1;
- (_Bool)enumerateContactsWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;

@end
