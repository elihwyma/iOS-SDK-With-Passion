/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <ScreenReaderOutput/Swift-Protocol.h>

@protocol SCROBrailleDriverProtocol <Swift>

- (unsigned short)modelIdentifier;
- (unsigned short)isInputEnabled;
- (unsigned short)interfaceVersion;
- (unsigned short)loadDriverWithIOElement: /* Error: Ran out of types for this method. */;
- (unsigned short)unloadDriver;
- (unsigned short)isDriverLoaded;
- (unsigned short)isSleeping;
- (unsigned short)supportsBlinkingCursor;
- (unsigned short)postsKeyboardEvents;
- (unsigned short)brailleInputMode;
- (unsigned short)getInputEvents;
- (unsigned short)mainSize;
- (unsigned short)statusSize;
- (unsigned short)setMainCells:length: /* Error: Ran out of types for this method. */;
- (unsigned short)setStatusCells:length: /* Error: Ran out of types for this method. */;

@end
