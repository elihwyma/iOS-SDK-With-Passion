/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSPersonNameComponents, NSString, NSURL;

@interface CKDBackingAccount : NSObject

{
    _Bool _isPrimaryEmailVerified;
}

@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *primaryEmail;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSString *serverPreferredPushEnvironment;
@property (nonatomic, readonly) NSPersonNameComponents *fullName;
@property (nonatomic, readonly) NSString *displayedHostname;
@property (nonatomic, readonly) NSString *sharingURLHostname;
@property (nonatomic, readonly) NSString *personaIdentifier;
@property (nonatomic, readonly) _Bool isFakeAccount;
@property (nonatomic, readonly) _Bool iCloudDriveAllowsCellularAccess;
@property (nonatomic, readonly) _Bool isPrimaryEmailVerified;
@property (nonatomic, readonly) NSURL *privateCloudDBURL;
@property (nonatomic, readonly) NSURL *privateShareServiceURL;
@property (nonatomic, readonly) NSURL *privateDeviceServiceURL;
@property (nonatomic, readonly) NSURL *privateCodeServiceURL;
@property (nonatomic, readonly) NSURL *privateMetricsServiceURL;
@property (nonatomic, readonly) NSURL *privateDatabaseRPCServiceURL;

+ (id)primaryAccountInStore:(id)arg1;
+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 propertyOverrides:(id)arg3 overridesByDataclass:(id)arg4;
+ (Class)_platformBackingAccountClass;
+ (void)deviceCountForAccount:(id)arg1 ignoreCache:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)accountQueue;
+ (_Bool)_lockedEnsureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (void)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;

- (id)init;
- (id)_init;
- (void)deviceCountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isDataclassEnabled:(id)arg1;
- (id)accountPropertiesForDataclass:(id)arg1;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canRenew;
- (void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)cloudKitAuthTokenWithError:(id *)arg1;
- (id)iCloudAuthTokenWithError:(id *)arg1;
- (id)privateCodeServiceURLPreferringGateway:(_Bool)arg1;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)ckAccount;
- (id)parentAppleAccount;
- (id)urlForDataclass:(id)arg1 preferringGateway:(_Bool)arg2;
- (id)urlForDataclass:(id)arg1;

@end
