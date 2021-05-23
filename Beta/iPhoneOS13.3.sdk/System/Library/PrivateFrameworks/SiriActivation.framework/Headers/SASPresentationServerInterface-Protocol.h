/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

@protocol SASPresentationServerInterface

- (unsigned short)preheat;
- (unsigned short)presentationDismissalRequestedWithOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelTTS;
- (unsigned short)presentationRequestedWithPresentationOptions:requestOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)presentationisIdleAndQuiet;
- (unsigned short)turnOnScreenAfterPocketStateFetch;
- (unsigned short)handleRequestWithOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelPreheat;
- (unsigned short)handleButtonDownFromButtonIdentifier:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)handleButtonUpFromButtonIdentifier:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)handleButtonTapFromButtonIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)handleButtonLongPressFromButtonIdentifier:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)updateActiveInterfaceOrientation:willAnimationWithDuration: /* Error: Ran out of types for this method. */;
- (unsigned short)updateCurrentLockState: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelPendingActivationEventWithReason: /* Error: Ran out of types for this method. */;
- (unsigned short)bulletinManagerDidChangeBulletins;
- (unsigned short)handleTestingActivation: /* Error: Ran out of types for this method. */;

@end
