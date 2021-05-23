/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/Swift-Protocol.h>

@protocol NFSecureElementManagerSessionInterface <Swift>

- (unsigned short)validateSEPairings: /* Error: Ran out of types for this method. */;
- (unsigned short)getApplets: /* Error: Ran out of types for this method. */;
- (unsigned short)stateInformation: /* Error: Ran out of types for this method. */;
- (unsigned short)signChallenge:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)signChallenge:useOSVersion:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)signChallenge:forAID:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)getSignedPlatformDataForSeid:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteApplets:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllApplets: /* Error: Ran out of types for this method. */;
- (unsigned short)getCryptogram: /* Error: Ran out of types for this method. */;
- (unsigned short)addExpressApplet:type:authorization:expressInfo:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)addExpressKeyID:forApplet:type:authorization:expressInfo:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)removeExpressApplet:type:restoreAuthorization:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)removeExpressKeyID:forApplet:restoreAuthorization:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)setExpressModesEnabled:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)checkSEExpressAppletCompatibility:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)setExpressConfig:restoreAuthorization:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)getExpressConfig: /* Error: Ran out of types for this method. */;
- (unsigned short)restoreAuthorizationForAllAppletsExcept:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)disableAuthorizationForApplet:andKeys:authorization:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)getFelicaAppletState:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)getTransitAppletState:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)expressModesInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)performPeerPaymentEnrollment:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)didExitRestrictedMode:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)transceive:forSEID:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)transceiveMultiple:forSEID:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)execRemoteAdminScript:params:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshSecureElement:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)getAttackCounterLogForSEID:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)dumpDomain:forSEID:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)powerCycleSEID:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)getOSUpdateLog: /* Error: Ran out of types for this method. */;

@end
