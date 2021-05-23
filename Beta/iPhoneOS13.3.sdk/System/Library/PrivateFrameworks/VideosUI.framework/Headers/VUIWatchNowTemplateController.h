/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/_TVStackTemplateController.h>

@class UIImageView, VUIWatchNowTemplateBackgroundLayer;

__attribute__((visibility("hidden")))
@interface VUIWatchNowTemplateController : _TVStackTemplateController

{
    _Bool _shouldFocusUpNext;
    _Bool _upNextFocused;
    UIImageView *_backgroundImageView;
    VUIWatchNowTemplateBackgroundLayer *_backgroundImageGradientLayer;
    UIImageView *_gradientImageView;
}

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) VUIWatchNowTemplateBackgroundLayer *backgroundImageGradientLayer;
@property (retain, nonatomic) UIImageView *gradientImageView;
@property (nonatomic) _Bool shouldFocusUpNext;
@property (nonatomic, getter=isUpNextFocused) _Bool upNextFocused;

- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)_updateBackgroundImage;
- (_Bool)shouldAdjustForTabBarSafeAreaInsets;
- (void)showcaseFactorDidChange;
- (id)scrollStopForShowcaseTransition;
- (id)scrollStopForEnteringSectionAtIndex:(long long)arg1 fromEdge:(long long)arg2;
- (_Bool)_doesCollectionViewHasItems;
- (id)_watchNowBannerScrollStop;
- (void)focusUpNextAnimated:(_Bool)arg1;

@end
