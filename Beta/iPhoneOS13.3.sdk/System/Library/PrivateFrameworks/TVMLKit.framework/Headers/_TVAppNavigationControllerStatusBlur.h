/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class UIColor, UIVisualEffect, UIVisualEffectView;

@interface _TVAppNavigationControllerStatusBlur : UIView

{
    UIVisualEffectView *_visualEffectView;
    UIView *_dimmingView;
}

@property (retain, nonatomic) UIColor *backgroundTintColor;
@property (retain, nonatomic) UIVisualEffect *visualEffect;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
