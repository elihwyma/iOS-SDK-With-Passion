/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/Swift-Protocol.h>

@protocol TIKeyboardInputManagerLogging <Swift>

- (unsigned short)setConfig: /* Error: Ran out of types for this method. */;
- (unsigned short)logToHumanReadableTrace: /* Error: Ran out of types for this method. */;
- (unsigned short)writeToFile;
- (unsigned short)logKeyboardConfig:forSyncToKeyboardState: /* Error: Ran out of types for this method. */;
- (unsigned short)logKeyboardOutput:keyboardConfiguration:forKeyboardInput:keyboardState: /* Error: Ran out of types for this method. */;
- (unsigned short)logAutocorrections:forKeyboardState:requestToken: /* Error: Ran out of types for this method. */;
- (unsigned short)logCandidateResultSet:forKeyboardState: /* Error: Ran out of types for this method. */;
- (unsigned short)logKeyboardConfig:textToCommit:forAcceptedCandidate:keyboardState: /* Error: Ran out of types for this method. */;
- (unsigned short)logReplacements:forString:keyLayout: /* Error: Ran out of types for this method. */;
- (unsigned short)logRefinements:forCandidate:keyboardState: /* Error: Ran out of types for this method. */;
- (unsigned short)logHitKeyCode:forTouchEvent:keyboardState: /* Error: Ran out of types for this method. */;
- (unsigned short)logReceivedSkipHitTestForTouchEvent:forKeyboardState: /* Error: Ran out of types for this method. */;
- (unsigned short)logKeyboardConfig:forAdjustedPhraseBoundaryInForwardDirection:granularity:keyboardState: /* Error: Ran out of types for this method. */;
- (unsigned short)logReceivedSetOriginalInput: /* Error: Ran out of types for this method. */;
- (unsigned short)logReceivedTextAccepted: /* Error: Ran out of types for this method. */;
- (unsigned short)logReceivedCandidateRejected: /* Error: Ran out of types for this method. */;
- (unsigned short)logReceivedLastAcceptedCandidateCorrected;

@end
