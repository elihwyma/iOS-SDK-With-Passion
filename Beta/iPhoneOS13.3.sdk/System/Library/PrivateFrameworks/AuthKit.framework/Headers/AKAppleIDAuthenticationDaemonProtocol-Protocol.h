/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <AuthKit/Swift-Protocol.h>

@protocol AKAppleIDAuthenticationDaemonProtocol <Swift>

- (unsigned short)getServerUILoadDelegateWithContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)authenticateWithContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setConfigurationInfo:forIdentifier:forAltDSID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)configurationInfoWithIdentifiers:forAltDSID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchUserInformationForAltDSID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setAppleIDWithAltDSID:inUse:forService:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setAppleIDWithDSID:inUse:forService:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getUserInformationForAltDSID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateUserInformationForAltDSID:userInformation:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAuthModeWithContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchDeviceMapWithContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchPrimaryBundleIDForServiceWithInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAppListWithAltDSID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAuthorizationDatabaseWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)revokeAuthorizationForApplicationWithClientID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)warmUpVerificationSessionWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)checkSecurityUpgradeEligibilityForContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)generateLoginCodeWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)validateLoginCode:forAppleID:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)performCircleRequestWithContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)checkInWithAuthenticationServerForAppleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)reportSignOutForAppleID:service:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)reportSignOutForAllAppleIDsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateStateWithExternalAuthenticationResponse:forContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateStateWithExternalAuthenticationResponse:forAppleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isDevicePasscodeProtected: /* Error: Ran out of types for this method. */;
- (unsigned short)activeLoginCode: /* Error: Ran out of types for this method. */;
- (unsigned short)getServerUILoadDelegateForAltDSID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)synchronizeFollowUpItemsForContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)teardownFollowUpWithContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)renewRecoveryTokenWithContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)verifyMasterKey:withContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)persistMasterKeyVerifier:withContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)validateVettingToken:forAltDSID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)accountNamesForAltDSID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchURLBagWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchURLBagFromCache:withCompletion: /* Error: Ran out of types for this method. */;

@end
