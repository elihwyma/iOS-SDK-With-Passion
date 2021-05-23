/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <AuthKit/Swift-Protocol.h>

@protocol AKAppleIDAuthenticationClientProtocol <Swift>

- (unsigned short)presentKeepUsingUIForContext:appleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissKeepUsingUIForContext:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)presentBasicLoginUIForContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissBasicLoginUIForContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)presentLoginAlertForContext:withError:title:message:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)presentSecondFactorUIForContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissSecondFactorUIForContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)presentSecondFactorAlertForContext:withError:title:message:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)presentServerProvidedUIForContext:withConfiguration:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissServerProvidedUIForContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)presentNativeRecoveryUIForContext:recoveryContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissNativeRecoveryUIForContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)presentBiometricOrPasscodeValidationForContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldContinueWithAuthenticationResults:error:forContextID:completion: /* Error: Ran out of types for this method. */;

@end
