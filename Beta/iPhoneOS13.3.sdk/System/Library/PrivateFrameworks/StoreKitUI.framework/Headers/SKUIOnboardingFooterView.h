/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class SKUIOnboardingProgressView, UIButton;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingFooterView : UIView

{
    UIButton *_leftButton;
    SKUIOnboardingProgressView *_progressView;
    UIButton *_rightButton;
}

@property (nonatomic, readonly) UIButton *leftButton;
@property (nonatomic, readonly) UIButton *rightButton;
@property (retain, nonatomic) SKUIOnboardingProgressView *progressView;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_newButton;
- (void)hideLeftButtonWithAnimation:(long long)arg1;
- (void)showLeftButtonWithTitle:(id)arg1 animation:(long long)arg2;
- (void)hideRightButtonWithAnimation:(long long)arg1;
- (void)showRightButtonWithTitle:(id)arg1 animation:(long long)arg2;
- (void)_hideButton:(id)arg1 withAnimation:(long long)arg2;
- (void)_showButton:(id)arg1 withTitle:(id)arg2 animation:(long long)arg3;

@end
