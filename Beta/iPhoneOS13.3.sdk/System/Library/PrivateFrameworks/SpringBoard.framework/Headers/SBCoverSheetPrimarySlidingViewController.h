/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBCoverSheetSlidingViewController.h>

@class NSString, SBCoverSheetBlurView, SBCoverSheetPanelBackgroundContainerView, SBCoverSheetParallaxContainerView, SBFTouchPassThroughView, SBGrabberTongue, SBWallpaperEffectView, UIGestureRecognizer;

@protocol SBCoverSheetGrabberDelegate;

@interface SBCoverSheetPrimarySlidingViewController : SBCoverSheetSlidingViewController

{
    id <SBCoverSheetGrabberDelegate> _grabberDelegate;
    SBFTouchPassThroughView *_unlockedContentOverlayView;
    SBCoverSheetPanelBackgroundContainerView *_panelBackgroundContainerView;
    SBFTouchPassThroughView *_parallaxClippingView;
    SBCoverSheetParallaxContainerView *_parallaxContainerView;
    SBGrabberTongue *_grabberTongue;
    SBCoverSheetBlurView *_panelCoverSheetBlurView;
    SBWallpaperEffectView *_panelWallpaperEffectView;
    SBWallpaperEffectView *_panelFadeOutWallpaperEffectView;
    double _defaultPresentGestureEdgeRegionSize;
}

@property (retain, nonatomic) SBFTouchPassThroughView *unlockedContentOverlayView;
@property (retain, nonatomic) SBCoverSheetPanelBackgroundContainerView *panelBackgroundContainerView;
@property (retain, nonatomic) SBFTouchPassThroughView *parallaxClippingView;
@property (retain, nonatomic) SBCoverSheetParallaxContainerView *parallaxContainerView;
@property (retain, nonatomic) SBGrabberTongue *grabberTongue;
@property (retain, nonatomic) SBCoverSheetBlurView *panelCoverSheetBlurView;
@property (retain, nonatomic) SBWallpaperEffectView *panelWallpaperEffectView;
@property (retain, nonatomic) SBWallpaperEffectView *panelFadeOutWallpaperEffectView;
@property (nonatomic) double defaultPresentGestureEdgeRegionSize;
@property (weak, nonatomic) id <SBCoverSheetGrabberDelegate> grabberDelegate;
@property (nonatomic, readonly) UIGestureRecognizer *edgePullGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldAutorotate;
- (void)handleReachabilityModeActivated;
- (void)handleReachabilityModeDeactivated;
- (void)_positionSubviewsForContentFrame:(struct CGRect)arg1 forPresentationValue:(_Bool)arg2;
- (struct CGRect)_animationTickedWithProgress:(double)arg1 forPresentationValue:(_Bool)arg2;
- (void)_endTransitionToAppeared:(_Bool)arg1;
- (void)_beginTransitionFromAppeared:(_Bool)arg1;
- (void)setTransitionSettings:(id)arg1;
- (_Bool)_shouldShowGrabberOnFirstSwipe;
- (void)_updateWindowVisibility;
- (_Bool)grabberTongueOrPullEnabled:(id)arg1;
- (_Bool)grabberTongue:(id)arg1 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)arg2;
- (void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueWillPresent:(id)arg1;
- (void)grabberTongueDidDismiss:(id)arg1;
- (id)customGestureRecognizerForGrabberTongue:(id)arg1;
- (void)_updatePanelWallpaperEffectView;
- (void)_createFadeOutWallpaperEffectView;
- (void)_setupPanelPartsIfNecessary;
- (void)_createPanelWallpaperEffectViewIfNeeded;

@end
