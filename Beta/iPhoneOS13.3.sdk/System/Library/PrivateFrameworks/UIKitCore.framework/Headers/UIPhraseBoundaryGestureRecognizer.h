/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILongPressGestureRecognizer.h>

@class UIDelayedAction, UIResponder;

@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer

{
    UIDelayedAction *_secondDelayTimer;
    _Bool _secondDelayElapsed;
    UIResponder<UITextInput> *_textInput;
    double _secondDelay;
    id _userData;
}

@property (weak, nonatomic) UIResponder<UITextInput> *textInput;
@property (nonatomic) double secondDelay;
@property (nonatomic, readonly) _Bool secondDelayElapsed;
@property (weak, nonatomic) id userData;

- (void)setState:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)_resetGestureRecognizer;
- (void)clearTimer;
- (void)startTimer;
- (void)secondDelayElapsed:(id)arg1;

@end
