/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class AKAppleIDAuthenticationContextManager, NSLock, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@protocol AKAppleIDAuthenticationDelegate;

@interface AKAppleIDAuthenticationController : NSObject

{
    NSString *_serviceID;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
    NSXPCConnection *_authenticationServiceConnection;
    AKAppleIDAuthenticationContextManager *_contextManager;
    NSLock *_connectionLock;
    CDUnknownBlockType _deallocHandler;
}

@property (copy, nonatomic) CDUnknownBlockType deallocHandler;
@property (weak, nonatomic) id <AKAppleIDAuthenticationDelegate> delegate;

+ (id)sensitiveAuthenticationKeys;

- (id)init;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1 daemonXPCEndpoint:(id)arg2;
- (id)_authenticationServiceConnection;
- (void)getUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAuthModeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDeviceMapWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)warmUpVerificationSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkSecurityUpgradeEligibilityForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateLoginCodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)performCircleRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportSignOutForAllAppleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isDevicePasscodeProtected:(id *)arg1;
- (id)activeLoginCode:(id *)arg1;
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)teardownFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchURLBagWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3;
- (void)setAppleIDWithDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3;
- (void)fetchDeviceListWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchDeviceListWithContext:(id)arg1 error:(id *)arg2;
- (id)fetchPrimaryBundleIDForWebServiceWithInfo:(id)arg1 error:(id *)arg2;
- (id)fetchAuthorizedAppListWithContext:(id)arg1 error:(id *)arg2;
- (_Bool)deleteAuthorizationDatabase:(id *)arg1;
- (_Bool)revokeAuthorizationForApplicationWithClientID:(id)arg1 error:(id *)arg2;
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)synchronizeFollowUpItemsForContext:(id)arg1 error:(id *)arg2;
- (void)verifyMasterKey:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)persistMasterKeyVerifier:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)accountNamesForAltDSID:(id)arg1;
- (id)_urlBagFromCache:(_Bool)arg1 withError:(id *)arg2;

@end
