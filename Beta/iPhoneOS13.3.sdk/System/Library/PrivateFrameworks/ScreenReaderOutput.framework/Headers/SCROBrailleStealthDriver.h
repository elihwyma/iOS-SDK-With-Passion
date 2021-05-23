/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SCROBrailleStealthDriver : NSObject

{
    _Bool _isDriverLoaded;
    NSString *_modelIdentifier;
    long long _mainSize;
    long long _statusSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)modelIdentifier;
- (_Bool)isInputEnabled;
- (unsigned long long)interfaceVersion;
- (int)loadDriverWithIOElement:(id)arg1;
- (_Bool)unloadDriver;
- (_Bool)isDriverLoaded;
- (_Bool)isSleeping;
- (_Bool)supportsBlinkingCursor;
- (_Bool)postsKeyboardEvents;
- (int)brailleInputMode;
- (id)getInputEvents;
- (long long)mainSize;
- (long long)statusSize;
- (_Bool)setMainCells:(const char *)arg1 length:(long long)arg2;
- (_Bool)setStatusCells:(const char *)arg1 length:(long long)arg2;

@end
