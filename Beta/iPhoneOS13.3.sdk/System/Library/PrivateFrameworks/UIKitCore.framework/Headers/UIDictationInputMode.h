/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UISpecializedInputMode.h>

@class UIKeyboardInputMode, UITouch;

@interface UIDictationInputMode : UISpecializedInputMode

{
    UITouch *_triggeringTouch;
    UIKeyboardInputMode *_currentInputModeForDictation;
}

@property (retain, nonatomic) UITouch *triggeringTouch;
@property (retain, nonatomic) UIKeyboardInputMode *currentInputModeForDictation;

+ (_Bool)currentInputModeSupportsDictation;

- (void)dealloc;
- (_Bool)includeBarHeight;
- (Class)viewControllerClass;

@end
