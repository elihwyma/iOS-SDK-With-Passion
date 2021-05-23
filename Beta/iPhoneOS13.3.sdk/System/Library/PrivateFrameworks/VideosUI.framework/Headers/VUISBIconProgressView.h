/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class CADisplayLink, UIImage, _VUISBIconProgressFractionTransition, _VUISBIconProgressPausedTransition, _VUISBInstallProgressStateTransition;

@protocol VUISBIconProgressViewDelegate;

__attribute__((visibility("hidden")))
@interface VUISBIconProgressView : UIView

{
    _VUISBInstallProgressStateTransition *_activeStateTransition;
    _VUISBIconProgressPausedTransition *_activePausedTransition;
    _VUISBIconProgressFractionTransition *_activeFractionTransition;
    long long _modelState;
    _Bool _modelPaused;
    double _modelFraction;
    CADisplayLink *_displayLink;
    double _lastUpdate;
    UIImage *_maskImage;
    _Bool _canAnimate;
    _Bool _displayingPaused;
    id <VUISBIconProgressViewDelegate> _delegate;
    UIImage *_overlayImage;
    double _backgroundAlpha;
    double _foregroundAlpha;
    double _circleRadiusFraction;
    double _pauseRadiusFraction;
    long long _displayedState;
    double _displayedFraction;
}

@property (nonatomic) double backgroundAlpha;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic) double circleRadiusFraction;
@property (nonatomic) double pauseRadiusFraction;
@property (nonatomic, readonly) struct CGRect circleBoundingRect;
@property (nonatomic) long long displayedState;
@property (nonatomic) _Bool displayingPaused;
@property (nonatomic) double displayedFraction;
@property (nonatomic) id <VUISBIconProgressViewDelegate> delegate;
@property (retain, nonatomic) UIImage *overlayImage;
@property (nonatomic) _Bool canAnimate;

+ (id)_pieImagesMemoryPool;
+ (id)_pieImageAtFraction:(double)arg1;

- (void)dealloc;
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
- (void)_clearTransitionIfComplete:(id *)arg1;

@end
