/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <ScreenReaderOutput/Swift-Protocol.h>

@protocol SCROSBrailleDisplayManagerDelegate <Swift>

- (unsigned short)handleBrailleKeypress: /* Error: Ran out of types for this method. */;
- (unsigned short)handleBrailleReplaceTextRange:withString:cursor: /* Error: Ran out of types for this method. */;
- (unsigned short)handleBrailleInsertedUntranslatedText:speakLiterally: /* Error: Ran out of types for this method. */;
- (unsigned short)handleBrailleDeletedUntranslatedText:speakLiterally: /* Error: Ran out of types for this method. */;
- (unsigned short)handleBrailleKeyWillMemorize: /* Error: Ran out of types for this method. */;
- (unsigned short)handleBrailleKeyMemorize: /* Error: Ran out of types for this method. */;
- (unsigned short)handleBrailleDidDisplay: /* Error: Ran out of types for this method. */;
- (unsigned short)handleBrailleDidPanLeft:elementToken:appToken: /* Error: Ran out of types for this method. */;
- (unsigned short)handleBrailleDidPanRight:elementToken:appToken: /* Error: Ran out of types for this method. */;
- (unsigned short)handleBrailleDidShowPreviousAnnouncement: /* Error: Ran out of types for this method. */;
- (unsigned short)handleBrailleDidShowNextAnnouncement: /* Error: Ran out of types for this method. */;
- (unsigned short)handleFailedToLoadBluetoothDevice: /* Error: Ran out of types for this method. */;
- (unsigned short)handleBrailleTableFailedToLoad: /* Error: Ran out of types for this method. */;
- (unsigned short)handleDisplayModeChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)handleBrailleDriverDidLoad;
- (unsigned short)configurationDidChange;
- (unsigned short)handleBrailleDriverDisconnected;
- (unsigned short)handleStartEditing;
- (unsigned short)handleCopyStringToClipboard: /* Error: Ran out of types for this method. */;
- (unsigned short)handlePlayBorderHitSound;
- (unsigned short)handlePlayCommandNotSupportedSound;

@end
