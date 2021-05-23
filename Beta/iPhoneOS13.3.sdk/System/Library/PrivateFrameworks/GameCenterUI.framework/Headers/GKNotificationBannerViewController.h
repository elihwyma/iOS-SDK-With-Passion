/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIViewController.h>

@class GKNotificationBannerView, NSLayoutConstraint;

@interface GKNotificationBannerViewController : UIViewController

{
    _Bool _bannerVisible;
    _Bool _bannerAnimating;
    GKNotificationBannerView *_bannerView;
    NSLayoutConstraint *_bannerYPositionConstraint;
    NSLayoutConstraint *_bannerWidthConstraint;
}

@property (retain, nonatomic) GKNotificationBannerView *bannerView;
@property (nonatomic) _Bool bannerVisible;
@property (nonatomic) _Bool bannerAnimating;
@property (retain, nonatomic) NSLayoutConstraint *bannerYPositionConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bannerWidthConstraint;

- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)windowPointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)windowTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)handleWindowSingleTap:(id)arg1;
- (void)handleWindowPan:(id)arg1;
- (void)addBannerView:(id)arg1;
- (void)showCurrentBanner;
- (void)hideBannerQuickly:(_Bool)arg1;
- (void)addConstraintsForBannerView;
- (void)addConstraintsForTVOSBannerView;
- (struct CGPoint)_visibleBannerCenterPosition:(struct CGSize)arg1;
- (struct CGPoint)_hiddenBannerPosition:(struct CGSize)arg1;
- (double)bannerWidthForViewSize:(struct CGSize)arg1;

@end
