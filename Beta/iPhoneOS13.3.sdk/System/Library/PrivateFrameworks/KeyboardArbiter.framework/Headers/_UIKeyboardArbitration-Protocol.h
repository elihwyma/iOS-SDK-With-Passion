/*
 Image: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
 */

@protocol _UIKeyboardArbitration

- (unsigned short)startArbitrationWithExpectedState:hostingPIDs:usingFence:withSuppression:onConnected: /* Error: Ran out of types for this method. */;
- (unsigned short)setWantsFencing: /* Error: Ran out of types for this method. */;
- (unsigned short)setWindowContextID:sceneIdentifier:windowState:withLevel: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyIAVHeight: /* Error: Ran out of types for this method. */;
- (unsigned short)signalKeyboardChanged:onCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)signalKeyboardChangeComplete;
- (unsigned short)setWindowHostingPID:active: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyHostedPIDsOfSuppression: /* Error: Ran out of types for this method. */;
- (unsigned short)applicationShouldFocusWithBundle:onCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)focusApplicationWithProcessIdentifier:sceneDeferringToken:onCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)signalEventSourceChanged:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)transition:eventStage:withInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)retrieveDebugInformation: /* Error: Ran out of types for this method. */;
- (unsigned short)retrieveMoreDebugInformationWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)setKeyboardTotalDisable:withFence:completionHandler: /* Error: Ran out of types for this method. */;

@end
