/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, SBHomeGrabberView, SBWallpaperEffectView, UIViewFloatAnimatableProperty;

@interface SBReachabilityBackgroundView : UIView

{
    UIView *_wallpaperContainerView;
    SBWallpaperEffectView *_topWallpaperEffectView;
    SBWallpaperEffectView *_bottomWallpaperEffectView;
    UIView *_hitTestBlockerView;
    long long _wallpaperVariant;
    SBHomeGrabberView *_homeGrabberView;
    CAShapeLayer *_chevronLayer;
    UIViewFloatAnimatableProperty *_chevronShapeAnimatableProperty;
    double _containerViewYOffset;
    double _homeGrabberAdditionalOffset;
}

@property (nonatomic) long long wallpaperVariant;
@property (nonatomic) double containerViewYOffset;
@property (nonatomic) double homeGrabberAdditionalOffset;
@property (nonatomic) double homeGrabberAlpha;
@property (nonatomic) double chevronAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (double)_displayCornerRadius;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperVariant:(long long)arg2;
- (void)_setupHomeGrabberView;
- (void)_updateWallpaperEffectViewAnimated:(_Bool)arg1;
- (void)_setupChevron;
- (void)_setupHitTestBlockerView;
- (id)_newWallpaperEffectViewForVariant:(long long)arg1;
- (void)_setupCornerContentsImageForWallpaperEffectView:(id)arg1;
- (void)_updateChevronPathForUpFraction:(double)arg1;

@end
