/*
 Image: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
 */

#import <MobileActivation/Swift-Protocol.h>

@protocol MobileActivationProtocol <Swift>

- (unsigned short)getActivationStateWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)createTunnel1ActivationInfo:options:withCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)createTunnel1SessionInfoWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)createActivationInfoWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)handleActivationInfo:withCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)copyUCRTWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)copyPCRTTokenWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)isDeviceBrickedWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)deactivateDeviceWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)requestDeviceReactivationWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getActivationBuildWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)copyActivationRecordWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)unbrickDeviceWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)recertifyDeviceWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)handleActivationInfoWithSession:activationSignature:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)issueClientCertificateLegacy:WithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)issueClientCertificateWithReferenceKey:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isInFieldCollectedWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)updateBasebandTicket:baaCertData:options:withCompletionBlock: /* Error: Ran out of types for this method. */;

@end
