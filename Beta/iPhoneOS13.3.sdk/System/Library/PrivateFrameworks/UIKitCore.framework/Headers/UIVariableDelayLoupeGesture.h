/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILongPressGestureRecognizer.h>

@class UIResponder;

@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer

{
    UIResponder<UITextInput> *_textView;
}

@property UIResponder<UITextInput> *textView;

- (void)invalidate;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)startTimer;
- (_Bool)isCloseToCaret;
- (_Bool)isWithinRecentTap;
- (_Bool)shouldUseLegacyBehavior;

@end
