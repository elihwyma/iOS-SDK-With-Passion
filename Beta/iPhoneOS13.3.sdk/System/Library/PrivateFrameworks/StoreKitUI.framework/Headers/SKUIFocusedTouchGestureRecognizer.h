/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet, UIView;

@interface SKUIFocusedTouchGestureRecognizer : UIGestureRecognizer

{
    NSMutableSet *_activeTouches;
    _Bool _didTouchOutside;
    UIView *_focusedView;
    struct UIEdgeInsets _touchAllowance;
}

@property (nonatomic, readonly) UIView *focusedView;
@property (nonatomic) struct UIEdgeInsets touchAllowance;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithFocusedView:(id)arg1 touchAllowance:(struct UIEdgeInsets)arg2;

@end
