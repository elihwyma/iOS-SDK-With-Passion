/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <QuartzCore/CAKeyframeAnimation.h>

__attribute__((visibility("hidden")))
@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation

{
    struct __C3DKeyframedAnimation *_c3dAnimation;
    _Bool _caReady;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValues:(id)arg1;
- (id)values;
- (id)keyPath;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)timingFunction;
- (void)setTimingFunction:(id)arg1;
- (float)speed;
- (void)setSpeed:(float)arg1;
- (_Bool)isAdditive;
- (void)setFillMode:(id)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setAutoreverses:(_Bool)arg1;
- (void)setRepeatCount:(float)arg1;
- (double)timeOffset;
- (void)setKeyPath:(id)arg1;
- (void)setRemovedOnCompletion:(_Bool)arg1;
- (void)setKeyTimes:(id)arg1;
- (void)setTimingFunctions:(id)arg1;
- (void)setFadeInDuration:(double)arg1;
- (void)setFadeOutDuration:(double)arg1;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (id)keyTimes;
- (void)setAdditive:(_Bool)arg1;
- (void)setTensionValues:(id)arg1;
- (_Bool)autoreverses;
- (float)repeatCount;
- (double)repeatDuration;
- (id)fillMode;
- (void)setRepeatDuration:(double)arg1;
- (_Bool)additive;
- (_Bool)isRemovedOnCompletion;
- (id)timingFunctions;
- (id)tensionValues;
- (id)continuityValues;
- (void)setContinuityValues:(id)arg1;
- (id)biasValues;
- (void)setBiasValues:(id)arg1;
- (_Bool)isCumulative;
- (void)setCumulative:(_Bool)arg1;
- (_Bool)cumulative;
- (void)setUsesSceneTimeBase:(_Bool)arg1;
- (_Bool)usesSceneTimeBase;
- (void)setC3dAnimation:(struct __C3DKeyframedAnimation *)arg1;
- (void)_convertToCA;
- (void)_clearC3DCache;
- (void)setCommitsOnCompletion:(_Bool)arg1;
- (_Bool)commitsOnCompletion;
- (void)setAnimationEvents:(id)arg1;
- (id)animationEvents;
- (struct __C3DKeyframedAnimation *)c3dAnimation;

@end
