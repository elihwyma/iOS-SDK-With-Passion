/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

@protocol SASSignalClientInterface

- (unsigned short)buttonLongPressFromButtonIdentifier:context: /* Error: Ran out of types for this method. */;
- (unsigned short)activationRequestFromButtonIdentifier:context: /* Error: Ran out of types for this method. */;
- (unsigned short)buttonTapFromButtonIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)deactivationRequestFromButtonIdentifier:context:options: /* Error: Ran out of types for this method. */;
- (unsigned short)prewarmFromButtonIdentifier:longPressInterval: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelPrewarmFromButtonIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)buttonDownFromButtonIdentifier:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)buttonUpFromButtonIdentifier:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)activationRequestFromDirectActionEvent:context:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)activationRequestFromContinuityWithContext: /* Error: Ran out of types for this method. */;
- (unsigned short)activationRequestFromBreadcrumb;
- (unsigned short)activationRequestFromSimpleActivation: /* Error: Ran out of types for this method. */;
- (unsigned short)activationRequestFromSpotlightWithContext: /* Error: Ran out of types for this method. */;
- (unsigned short)activationRequestFromTestingWithContext: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterNonButtonSourceWithType:withUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)registerNonButtonSourceWithType:withUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterButtonIdentifier:withUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)registerButtonIdentifier:withUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)activationRequestFromDirectActionEvent:context: /* Error: Ran out of types for this method. */;
- (unsigned short)prewarmFromButtonIdentifier: /* Error: Ran out of types for this method. */;

@end
