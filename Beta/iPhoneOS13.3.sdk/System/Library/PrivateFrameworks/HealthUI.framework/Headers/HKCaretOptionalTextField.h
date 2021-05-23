/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITextField.h>

@interface HKCaretOptionalTextField : UITextField

{
    _Bool _allowsSelection;
    _Bool _disableActions;
}

@property (nonatomic) _Bool allowsSelection;
@property (nonatomic) _Bool disableActions;

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (double)actualMinimumFontSize;

@end
