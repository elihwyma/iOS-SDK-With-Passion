/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UIView.h>

@class UIButton;

@protocol AAUIArrowControlsViewDelegate;

@interface AAUIArrowControlsView : UIView

{
    UIButton *_upButton;
    UIButton *_downButton;
    id <AAUIArrowControlsViewDelegate> _delegate;
    long long _interfaceOrientation;
}

@property (nonatomic) id <AAUIArrowControlsViewDelegate> delegate;
@property (nonatomic, readonly) UIButton *downButton;
@property (nonatomic, readonly) UIButton *upButton;
@property (nonatomic) long long interfaceOrientation;

+ (double)defaultHeightForOrientation:(long long)arg1;
+ (double)defaultWidthForOrientation:(long long)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_arrowButtonWasTapped:(id)arg1;

@end
