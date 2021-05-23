/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
 */

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UILayoutGuide, WLWelcomeViewControllerMetrics;

@interface WLWelcomeGroupViewController : UIViewController

{
    NSLayoutConstraint *_hInsetLeftConstraint;
    NSLayoutConstraint *_hInsetRightConstraint;
    NSLayoutConstraint *_hInsetProgressBarLeftConstraint;
    NSLayoutConstraint *_hInsetProgressBarRightConstraint;
    WLWelcomeViewControllerMetrics *_metrics;
    UILayoutGuide *_hInsetLayoutGuide;
    UILayoutGuide *_hInsetProgressBarLayoutGuide;
}

@property (nonatomic, readonly) WLWelcomeViewControllerMetrics *metrics;
@property (nonatomic, readonly) UILayoutGuide *hInsetLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *hInsetProgressBarLayoutGuide;

- (id)initWithMetrics:(id)arg1;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateViewConstraints;
- (void)_updateLayoutGuideConstraints;
- (id)loadTitleViewWithTitle:(id)arg1;

@end
