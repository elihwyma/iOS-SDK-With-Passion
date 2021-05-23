/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBIconZoomAnimator.h>

@class NSMutableArray, SBHScaleZoomSettings, SBIcon, SBIconView, SBReversibleLayerPropertyAnimator, UIView;

@protocol SBScaleIconZoomAnimationContaining;

@interface SBScaleIconZoomAnimator : SBIconZoomAnimator

{
    struct UIEdgeInsets _iconScootch;
    double _naturalVisualAltitude;
    UIView *_scalingView;
    SBIconView *_targetIconView;
    SBReversibleLayerPropertyAnimator *_homeScreenScaleAnimator;
    SBReversibleLayerPropertyAnimator *_targetIconScaleXAnimator;
    SBReversibleLayerPropertyAnimator *_targetIconScaleYAnimator;
    NSMutableArray *_animationCompletions;
    SBIcon *_targetIcon;
    UIView *_targetIconPositioningView;
    struct CGPoint _zoomScaleDimension;
    struct CGPoint _zoomedTargetIconCenter;
    struct CGPoint _targetIconCenter;
}

@property (retain, nonatomic) SBReversibleLayerPropertyAnimator *homeScreenScaleAnimator;
@property (retain, nonatomic) SBReversibleLayerPropertyAnimator *targetIconScaleXAnimator;
@property (retain, nonatomic) SBReversibleLayerPropertyAnimator *targetIconScaleYAnimator;
@property (retain, nonatomic) NSMutableArray *animationCompletions;
@property (nonatomic, readonly) id <SBScaleIconZoomAnimationContaining> animationContainer;
@property (nonatomic, readonly) SBIcon *targetIcon;
@property (nonatomic, readonly) SBIconView *referenceIconView;
@property (nonatomic, readonly) SBIconView *targetIconView;
@property (nonatomic, readonly) UIView *targetIconContainerView;
@property (nonatomic, readonly) UIView *defaultTargetIconContainerView;
@property (nonatomic, readonly) UIView *targetIconPositioningView;
@property (nonatomic, readonly) double zoomScale;
@property (nonatomic, readonly) double maxHomeScreenZoomScale;
@property (nonatomic, readonly) _Bool fadesHomeScreen;
@property (nonatomic, readonly) struct CGPoint zoomScaleDimension;
@property (nonatomic, readonly) struct CGPoint zoomedTargetIconCenter;
@property (nonatomic, readonly) struct CGPoint targetIconCenter;
@property (retain, nonatomic) SBHScaleZoomSettings *settings;

+ (_Bool)validateAnimationContainer:(id)arg1 targetIcon:(id)arg2;

- (id)initWithAnimationContainer:(id)arg1 targetIcon:(id)arg2;
- (void)_prepareAnimation;
- (struct CGPoint)_zoomedIconCenter;
- (struct CGRect)_zoomedFrame;
- (void)_setAnimationFraction:(double)arg1;
- (void)_cleanupAnimation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (struct CGPoint)_referenceIconImageCenter;
- (_Bool)shouldMatchMoveWithDock;
- (_Bool)_forceSquareZoomDimension;
- (void)_setZoomScale:(struct CGPoint)arg1;
- (void)_configureTargetIconPositioningView:(id)arg1;
- (void)_applyZoomFraction:(double)arg1;
- (void)_applyVisualAltitudeFraction:(double)arg1;
- (void)_applyIconGridFadeFraction:(double)arg1;
- (void)_setIconAlpha:(double)arg1;
- (void)hintToFraction:(double)arg1;
- (double)_homeScreenScaleForZoomFraction:(double)arg1;
- (struct CGPoint)_targetIconScaleForZoomFraction:(double)arg1;
- (double)_zoomedVisualAltitude;

@end
