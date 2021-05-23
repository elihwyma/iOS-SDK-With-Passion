/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDBackingAccount.h>

@class ACAccount, ACAccountStore;

__attribute__((visibility("hidden")))
@interface CKDBackingiOSAccount : CKDBackingAccount

{
    ACAccountStore *_accountStore;
    ACAccount *_parentAppleAccount;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) ACAccount *ckAccount;
@property (retain, nonatomic) ACAccount *parentAppleAccount;

+ (id)primaryAccountInStore:(id)arg1;
+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (void)determineCloudKitInfoFromEmail:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (id)identifier;
- (id)dsid;
- (id)fullName;
- (id)username;
- (id)displayedHostname;
- (id)primaryEmail;
- (_Bool)isDataclassEnabled:(id)arg1;
- (_Bool)isPrimaryEmailVerified;
- (_Bool)iCloudDriveAllowsCellularAccess;
- (id)accountPropertiesForDataclass:(id)arg1;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canRenew;
- (id)cloudKitAuthTokenWithError:(id *)arg1;
- (id)iCloudAuthTokenWithError:(id *)arg1;
- (id)_initWithParentAccount:(id)arg1 inStore:(id)arg2;
- (id)_accountCredentialForAccount:(id)arg1 withError:(id *)arg2;

@end
