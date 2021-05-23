/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/Swift-Protocol.h>

@protocol TIKeyboardInteractionProtocol <Swift>

- (unsigned short)addKeyInput:keyboardState: /* Error: Ran out of types for this method. */;
- (unsigned short)addDrawInputWithSyllableCount:keyboardState: /* Error: Ran out of types for this method. */;
- (unsigned short)addTouchEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)layoutDidChange:keyboardState: /* Error: Ran out of types for this method. */;
- (unsigned short)candidatesOffered:keyboardState: /* Error: Ran out of types for this method. */;
- (unsigned short)candidateAccepted:withInput:documentState:inputContext:inputStem:predictionBarHit:useCandidateSelection:candidateIndex:keyboardState: /* Error: Ran out of types for this method. */;
- (unsigned short)contextDidChange:wordDelete:cursorMoved:extendsPriorWord:inWord:range:selectionLocation:keyboardState: /* Error: Ran out of types for this method. */;
- (unsigned short)setClientID:keyboardState: /* Error: Ran out of types for this method. */;

@end
