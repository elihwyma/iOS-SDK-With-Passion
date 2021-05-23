/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBOrientationTransformWrapperView.h>

@class CAMediaTimingFunction, SBIconView, UIView, UIViewFloatAnimatableProperty;

@interface SBFluidSwitcherIconOverlayView : SBOrientationTransformWrapperView

{
    SBIconView *_iconOverlayView;
    UIView *_iconCrossfadeView;
    UIView *_iconOverlayContainerView;
    UIView *_crossfadeView;
    struct CGRect _crossfadeViewFrame;
    UIViewFloatAnimatableProperty *_iconCrossfadeAnimatableProperty;
    CAMediaTimingFunction *_iconCrossfadeTimingFunction;
    double _cornerRadius;
}

@property (nonatomic, readonly) struct CGRect crossfadeViewFrame;
@property (nonatomic, readonly) SBIconView *iconView;
@property (nonatomic) double cornerRadius;

- (void)dealloc;
- (void)invalidate;
- (void)layoutSubviews;
- (id)initWithIconView:(id)arg1 crossfadeView:(id)arg2 crossfadeViewFrame:(struct CGRect)arg3 contentOrientation:(long long)arg4 containerOrientation:(long long)arg5;
- (void)_setUpIconCrossfadeView;
- (void)_setUpIconCrossfadeAnimatableProperty;
- (void)_applyIconOverlayViewOverlayScaleProperties;
- (double)_iconOverlayScale;

@end
