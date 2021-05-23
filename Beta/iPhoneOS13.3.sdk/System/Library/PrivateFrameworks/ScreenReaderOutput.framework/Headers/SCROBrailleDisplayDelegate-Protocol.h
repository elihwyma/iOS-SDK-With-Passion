/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <ScreenReaderOutput/Swift-Protocol.h>

@protocol SCROBrailleDisplayDelegate <Swift>

- (unsigned short)brailleInputManager;
- (unsigned short)newBrailleDisplayCommandDispatcher;
- (unsigned short)brailleDisplay:driverDidLoad: /* Error: Ran out of types for this method. */;
- (unsigned short)brailleDisplay:isSleeping: /* Error: Ran out of types for this method. */;
- (unsigned short)brailleDriverDisconnected: /* Error: Ran out of types for this method. */;
- (unsigned short)brailleDisplay:didDisplay: /* Error: Ran out of types for this method. */;
- (unsigned short)configurationChangedForBrailleDisplay: /* Error: Ran out of types for this method. */;
- (unsigned short)brailleDisplay:copyStringToClipboard: /* Error: Ran out of types for this method. */;
- (unsigned short)brailleDidStartEditingWithDisplay: /* Error: Ran out of types for this method. */;
- (unsigned short)brailleDisplay:didReplaceRange:withString:cursor: /* Error: Ran out of types for this method. */;
- (unsigned short)brailleDisplay:pressedKeys: /* Error: Ran out of types for this method. */;
- (unsigned short)brailleDisplay:didPanLeft:elementToken:appToken: /* Error: Ran out of types for this method. */;
- (unsigned short)brailleDisplay:didPanRight:elementToken:appToken: /* Error: Ran out of types for this method. */;
- (unsigned short)playBorderHitSoundForBrailleDisplay: /* Error: Ran out of types for this method. */;
- (unsigned short)playCommandNotSupportedSoundForBrailleDisplay: /* Error: Ran out of types for this method. */;
- (unsigned short)brailleDisplay:memorizedKey: /* Error: Ran out of types for this method. */;
- (unsigned short)brailleDisplay:willMemorizeKey: /* Error: Ran out of types for this method. */;
- (unsigned short)brailleDisplay:didMoveSelection: /* Error: Ran out of types for this method. */;
- (unsigned short)brailleDisplay:insertedUntranslatedText:speakLiterally: /* Error: Ran out of types for this method. */;
- (unsigned short)brailleDisplay:deletedUntranslatedText:speakLiterally: /* Error: Ran out of types for this method. */;

@end
