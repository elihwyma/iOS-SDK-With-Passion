/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, CKAccountOverrideInfo, CKDBackingAccount, NSPersonNameComponents, NSString, NSURL;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDAccount : NSObject

{
    _Bool _isUnitTestingAccount;
    _Bool _accountWantsPushRegistration;
    _Bool _accountWantsFlowControl;
    _Bool _isAnonymousAccount;
    _Bool _haveWarnedAboutServerPreferredPushEnvironment;
    CKAccountOverrideInfo *_fakeAccountInfo;
    ACAccountStore *_accountStore;
    CKDBackingAccount *_backingAccount;
    NSObject<OS_dispatch_queue> *_authTokenCallbackQueue;
    NSString *_lastFailedCloudKitAuthToken;
    NSString *_lastFailediCloudAuthToken;
}

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) CKDBackingAccount *backingAccount;
@property (nonatomic) _Bool isAnonymousAccount;
@property (nonatomic) _Bool haveWarnedAboutServerPreferredPushEnvironment;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *authTokenQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *authTokenCallbackQueue;
@property (copy, nonatomic) NSString *lastFailedCloudKitAuthToken;
@property (copy, nonatomic) NSString *lastFailediCloudAuthToken;
@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSPersonNameComponents *fullName;
@property (nonatomic, readonly) NSString *primaryEmail;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSString *formattedUsername;
@property (nonatomic, readonly) NSString *personaIdentifier;
@property (nonatomic, readonly) CKAccountOverrideInfo *fakeAccountInfo;
@property (nonatomic, readonly) _Bool isFakeAccount;
@property (nonatomic) _Bool isUnitTestingAccount;
@property (nonatomic) _Bool accountWantsPushRegistration;
@property (nonatomic) _Bool accountWantsFlowControl;
@property (nonatomic, readonly) _Bool iCloudDriveAllowsCellularAccess;
@property (nonatomic, readonly) _Bool isPrimaryEmailVerified;
@property (nonatomic, readonly) NSURL *privateCloudDBURL;
@property (nonatomic, readonly) NSURL *privateShareServiceURL;
@property (nonatomic, readonly) NSURL *privateDeviceServiceURL;
@property (nonatomic, readonly) NSURL *privateCodeServiceURL;
@property (nonatomic, readonly) NSURL *privateMetricsServiceURL;
@property (nonatomic, readonly) NSURL *privateDatabaseRPCServiceURL;
@property (nonatomic, readonly) NSString *serverPreferredPushEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCarryAccount;
@property (nonatomic, readonly) _Bool isiCloudDevEnvironmentAccount;
@property (nonatomic, readonly) NSString *displayedHostname;

+ (id)globalAuthTokenQueue;

- (id)_init;
- (id)dsid;
- (id)initWithAccountID:(id)arg1;
- (void)deviceCountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initAnonymousAccount;
- (id)iCloudAuthTokenWithAccessProvider:(id)arg1 error:(id *)arg2;
- (id)cloudKitAuthTokenWithAccessProvider:(id)arg1 error:(id *)arg2;
- (_Bool)isDataclassEnabled:(id)arg1;
- (id)initFakeAccountWithAccountOverrideInfo:(id)arg1;
- (id)initPrimaryAccount;
- (void)updateAccountPropertiesAndSaveAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cloudKitAuthTokenWithAccessProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)iCloudAuthTokenWithAccessProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)renewCloudKitAuthTokenWithReason:(id)arg1 shouldForce:(_Bool)arg2 accessProvider:(id)arg3 failedToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)renewiCloudAuthTokenWithReason:(id)arg1 shouldForce:(_Bool)arg2 accessProvider:(id)arg3 failedToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 accountAccessProvider:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)_userCloudDBURLisInCarryPartition;
- (id)_lockedCloudKitAuthTokenWithAccessProvider:(id)arg1 error:(id *)arg2;
- (void)_lockedRenewTokenWithReason:(id)arg1 shouldForce:(_Bool)arg2 accountAccessProvider:(id)arg3 tokenFetchBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_lockediCloudAuthTokenWithAccessProvider:(id)arg1 error:(id *)arg2;
- (id)sharingURLHostname;

@end
