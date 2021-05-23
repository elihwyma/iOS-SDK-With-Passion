/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@protocol CDPRemoteDeviceSecretValidatorProtocol

@property (nonatomic) unsigned long long supportedEscapeOfferMask;

- (unsigned short)cancelValidationWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)validateSecret:devices:type:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)validateRecoveryKey:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)approveFromAnotherDeviceWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelApproveFromAnotherDevice;
- (unsigned short)resetAccountCDPState;
- (unsigned short)supportedEscapeOfferMaskCompletion: /* Error: Ran out of types for this method. */;

@end
