/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UITextView.h>

@interface JTTextEffectEditorTextView : UITextView

{
    _Bool _prefersMovingBeforeScalingWhenAvoidingKeyboardUI;
}

@property (nonatomic) _Bool prefersMovingBeforeScalingWhenAvoidingKeyboardUI;

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)unmarkText;
- (struct CGRect)textEditingFrame;

@end
