/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class UIButton, UILabel, UITableView, UIVisualEffectView;

@interface HKSplashScreenView : UIView

{
    UILabel *_titleLabel;
    UITableView *_featureTableView;
    UIButton *_continueButton;
    UIVisualEffectView *_topBlurView;
    UIVisualEffectView *_bottomBlurView;
}

@property (retain, nonatomic) UIVisualEffectView *topBlurView;
@property (retain, nonatomic) UIVisualEffectView *bottomBlurView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITableView *featureTableView;
@property (retain, nonatomic) UIButton *continueButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateForFontOrTextChange;
- (void)updateTableViewInsetsForHeaderAndFooterBlurView;

@end
