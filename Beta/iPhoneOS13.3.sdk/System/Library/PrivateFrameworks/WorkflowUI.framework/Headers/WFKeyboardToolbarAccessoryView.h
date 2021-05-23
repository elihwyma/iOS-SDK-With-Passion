/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIInputView.h>

@class NSArray, UIToolbar;

@interface WFKeyboardToolbarAccessoryView : UIInputView

{
    UIToolbar *_toolbar;
}

@property (nonatomic, readonly) UIToolbar *toolbar;
@property (copy, nonatomic) NSArray *barItems;

- (id)init;
- (id)flexibleSpaceItem;
- (_Bool)isPhoneUI;
- (void)appendBarItem:(id)arg1;
- (void)prependBarItem:(id)arg1;
- (void)removeAllBarItems;
- (double)borderedButtonWidthForButtonTitle:(id)arg1 font:(id)arg2;
- (double)keyboardButtonHeight;
- (double)inverseToolbarPadding;
- (id)plainButtonItemWithTitle:(id)arg1 bolded:(_Bool)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)borderedButtonItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)fixedSpaceItemOfWidth:(double)arg1;
- (id)buttonImageWithSize:(struct CGSize)arg1;
- (void)drawRoundedRectangleInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 color:(id)arg3 radius:(double)arg4;

@end
