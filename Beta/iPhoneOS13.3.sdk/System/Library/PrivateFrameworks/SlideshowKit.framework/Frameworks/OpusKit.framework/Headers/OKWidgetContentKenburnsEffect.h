/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetContentEffect.h>

@class CABasicAnimation, NSString, OKPanGenerator;

@interface OKWidgetContentKenburnsEffect : OKWidgetContentEffect

{
    OKPanGenerator *_panGenerator;
    CABasicAnimation *_translationXAnimation;
    CABasicAnimation *_translationYAnimation;
    CABasicAnimation *_scaleAnimation;
    double _fromScale;
    double _toScale;
    double _fromX;
    double _toX;
    double _fromY;
    double _toY;
    double _panningCropThreshold;
    double _beginTime;
    NSString *_timingFunction;
    double _speedMitigator;
    double _durationPadding;
    double _panningAmount;
    _Bool _animationIsUnderway;
    double _animationProgressAtStateChange;
    double _animationResumeTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;

- (void)dealloc;
- (void)startAnimation;
- (void)stopAnimation;
- (void)pauseAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)setDefaultDuration:(double)arg1;
- (void)resumeAnimation;
- (double)_fullDuration;
- (id)settingObjectForKey:(id)arg1;
- (void)applySettings;
- (void)prepareContentEffectWithView:(id)arg1;
- (double)remainingPlayDuration;
- (float)_croppedFractionforRectAspectRatio:(float)arg1 photoAspectRatio:(float)arg2;
- (void)_applyGeometryForStart:(_Bool)arg1;
- (void)_setupAnimation;

@end
