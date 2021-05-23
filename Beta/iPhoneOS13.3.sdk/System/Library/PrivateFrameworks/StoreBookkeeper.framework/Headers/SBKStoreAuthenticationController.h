/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class SSAccount;

@interface SBKStoreAuthenticationController : NSObject

{
    _Bool _shouldAuthenticate;
    SSAccount *_storeAccount;
}

@property (readonly) SSAccount *storeAccount;
@property _Bool shouldAuthenticate;

+ (id)lastSyncedAccountIdentifier;
+ (id)lastSyncedAccountName;
+ (void)clearLastSyncnedAccount;
+ (id)lastFailedSyncAccountIdentifier;
+ (id)lastFailedSyncAccountName;

- (id)initWithStoreAccount:(id)arg1;
- (_Bool)isAuthenticationValidForTransaction:(id)arg1 error:(id *)arg2;
- (void)saveAccountToLastSyncedDefaults;
- (void)saveAccountToLastFailedSyncDefaults;
- (_Bool)shouldForceAuthenticationForTransaction:(id)arg1;
- (id)authenticationErrorsForTransaction:(id)arg1;

@end
