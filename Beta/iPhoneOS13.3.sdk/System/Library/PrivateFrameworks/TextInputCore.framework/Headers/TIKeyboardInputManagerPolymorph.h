/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIKeyboardInputManagerWrapper.h>

@interface TIKeyboardInputManagerPolymorph : TIKeyboardInputManagerWrapper

- (void)dealloc;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)handleKeyboardState:(id)arg1;
- (void)setInputManagerForKeyboardState:(id)arg1;
- (void)setInputManagerForInputMode:(id)arg1 withKeyboardState:(id)arg2 class:(Class)arg3;

@end
