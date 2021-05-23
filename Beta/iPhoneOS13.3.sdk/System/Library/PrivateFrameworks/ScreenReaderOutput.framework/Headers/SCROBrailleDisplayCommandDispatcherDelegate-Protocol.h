/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <ScreenReaderOutput/Swift-Protocol.h>

@protocol SCROBrailleDisplayCommandDispatcherDelegate <Swift>

- (unsigned short)handleCommandPanLeftForDispatcher: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCommandPanRightForDispatcher: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCommandMoveLeftForDispatcher: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCommandMoveRightForDispatcher: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCommandRouterKeyEvent:forDispatcher: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCommandDeleteKeyEvent:forDispatcher: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCommandForwardDeleteKeyEvent:forDispatcher: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCommandEscapeKeyEvent:forDispatcher: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCommandReturnBrailleEvent:forDispatcher: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCommandTranslateForDispatcher: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCommandToggleContractedBrailleEvent:forDispatcher: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCommandToggleEightDotBrailleEvent:forDispatcher: /* Error: Ran out of types for this method. */;
- (unsigned short)handleUnsupportedKeyEvent:forDispatcher: /* Error: Ran out of types for this method. */;
- (unsigned short)brailleInputManager;

@end
