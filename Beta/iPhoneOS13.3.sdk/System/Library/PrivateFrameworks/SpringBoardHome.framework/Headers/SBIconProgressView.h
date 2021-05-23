/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIView.h>

@class CADisplayLink, UIImage, _SBIconProgressFractionTransition, _SBIconProgressPausedTransition, _SBIconProgressStateTransition;

@protocol SBIconProgressViewDelegate;

@interface SBIconProgressView : UIView

{
    _SBIconProgressStateTransition *_activeStateTransition;
    _SBIconProgressPausedTransition *_activePausedTransition;
    _SBIconProgressFractionTransition *_activeFractionTransition;
    long long _modelState;
    _Bool _modelPaused;
    double _modelFraction;
    CADisplayLink *_displayLink;
    double _lastUpdate;
    UIImage *_maskImage;
    _Bool _canAnimate;
    _Bool _displayingPaused;
    id <SBIconProgressViewDelegate> _delegate;
    UIImage *_overlayImage;
    double _backgroundAlpha;
    double _foregroundAlpha;
    double _circleRadiusFraction;
    double _pauseRadiusFraction;
    long long _displayedState;
    double _displayedFraction;
    struct SBIconImageInfo _iconImageInfo;
}

@property (nonatomic) double backgroundAlpha;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic) double circleRadiusFraction;
@property (nonatomic) double pauseRadiusFraction;
@property (nonatomic, readonly) struct CGRect circleBoundingRect;
@property (nonatomic) long long displayedState;
@property (nonatomic) _Bool displayingPaused;
@property (nonatomic) double displayedFraction;
@property (retain, nonatomic) _SBIconProgressStateTransition *activeStateTransition;
@property (retain, nonatomic) _SBIconProgressPausedTransition *activePausedTransition;
@property (retain, nonatomic) _SBIconProgressFractionTransition *activeFractionTransition;
@property (weak, nonatomic) id <SBIconProgressViewDelegate> delegate;
@property (retain, nonatomic) UIImage *overlayImage;
@property (nonatomic) _Bool canAnimate;
@property (nonatomic) struct SBIconImageInfo iconImageInfo;

+ (id)_pieImagesMemoryPool;
+ (id)_pieImageAtFraction:(double)arg1;

- (void)dealloc;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_maskImage;
- (void)drawRect:(struct CGRect)arg1;
- (void)_onDisplayLink:(id)arg1;
- (void)_ensureDisplayLink;
- (void)_updateTransitionsAnimated:(_Bool)arg1;
- (void)_clearDisplayLink;
- (void)_updatePausedTransitionAnimated:(_Bool)arg1;
- (void)_updateStateTransitionAnimated:(_Bool)arg1;
- (void)_updateFractionTransitionAnimated:(_Bool)arg1;
- (_Bool)_hasActiveTransitions;
- (void)_drawPieWithCenter:(struct CGPoint)arg1;
- (void)_drawOutgoingCircleWithCenter:(struct CGPoint)arg1;
- (void)_drawIncomingCircleWithCenter:(struct CGPoint)arg1;
- (void)_drawPauseUIWithCenter:(struct CGPoint)arg1;
- (void)setState:(long long)arg1 paused:(_Bool)arg2 fractionLoaded:(double)arg3 animated:(_Bool)arg4;

@end
