/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/_TVStackTemplateController.h>

@class CAGradientLayer, NSArray, UIView, UIViewController;

@protocol VUIProductUberBackgroundInterface;

__attribute__((visibility("hidden")))
@interface VUIProductShowcaseViewController : _TVStackTemplateController

{
    _Bool _lightStatusBar;
    UIViewController<VUIProductUberBackgroundInterface> *_productBanner;
    UIView *_navBarGradientView;
    CAGradientLayer *_gradientLayer;
    NSArray *_navBarButtons;
    UIView *_transitionBackgroundView;
}

@property (nonatomic) _Bool lightStatusBar;
@property (retain, nonatomic) UIViewController<VUIProductUberBackgroundInterface> *productBanner;
@property (retain, nonatomic) UIView *navBarGradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSArray *navBarButtons;
@property (retain, nonatomic) UIView *transitionBackgroundView;

- (void)traitCollectionDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (id)_gradientLayer;
- (void)updateWithViewElement:(id)arg1;
- (void)configureAppearanceTransition;
- (long long)_overrideLargeTitleDisplayMode;
- (void)_configureBannerView:(id)arg1;
- (void)_setupProductBanner;
- (void)_configureTransitionBackgroundView;
- (void)_configureNavigationBarGradient;

@end
