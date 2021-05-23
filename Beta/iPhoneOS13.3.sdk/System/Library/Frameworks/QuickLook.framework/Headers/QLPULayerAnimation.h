/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLPUAnimationGroup.h>

@class CAAnimation, CALayer, NSString;

__attribute__((visibility("hidden")))
@interface QLPULayerAnimation : QLPUAnimationGroup

{
    float _speed;
    double _timeOffset;
    double _beginTime;
    _Bool _isAnimationRunning;
    CALayer *_layer;
    NSString *_key;
    CAAnimation *__animation;
}

@property (retain, nonatomic, setter=_setAnimation:) CAAnimation *_animation;
@property (nonatomic, readonly) CALayer *layer;
@property (copy, nonatomic, readonly) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (id)initWithLayer:(id)arg1 key:(id)arg2;
- (void)finishImmediately;
- (void)setSpeed:(float)arg1 timeOffset:(double)arg2 beginTime:(double)arg3;
- (_Bool)isReadyToComplete;
- (void)_updateLayerAnimation;

@end
