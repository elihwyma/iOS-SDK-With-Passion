/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUApplier.h>

@class CADisplayLink, HUAnimationSettings, NSMutableSet;

@interface HUAnimationApplier : HUApplier

{
    _Bool _applyDynamically;
    HUAnimationSettings *_animationSettings;
    CADisplayLink *_displayLink;
    double _startTime;
    NSMutableSet *_relativeAnimations;
    NSMutableSet *_effectiveProgressObservers;
}

@property (copy, nonatomic) HUAnimationSettings *animationSettings;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) NSMutableSet *relativeAnimations;
@property (nonatomic, readonly) NSMutableSet *effectiveProgressObservers;
@property (nonatomic) _Bool applyDynamically;
@property (nonatomic, readonly) double effectiveProgress;

+ (id)dynamicApplierWithAnimationSettings:(id)arg1;
+ (id)staticApplierWithAnimationSettings:(id)arg1;
+ (id)applyAnimationSettings:(id)arg1 withStaticApplier:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_applyAnimationSettings:(id)arg1 withApplier:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 applyDynamically:(_Bool)arg4;
+ (id)_applierWithAnimationSettings:(id)arg1 applyDynamically:(_Bool)arg2;
+ (id)applyAnimationSettings:(id)arg1 withDynamicApplier:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

- (id)init;
- (_Bool)cancel;
- (_Bool)start;
- (_Bool)complete:(_Bool)arg1;
- (id)initWithAnimationSettings:(id)arg1;
- (double)_effectiveDuration;
- (void)_startEffectiveProgressTimerForObserver:(id)arg1;
- (double)_remainingTimeIntervalForEffectiveProgress:(double)arg1;
- (void)_updateDynamicProgress:(double)arg1;
- (void)_displayLinkTick;
- (void)_invalidateDisplayLinkIfNecessary;
- (_Bool)addAlongsideAnimationApplier:(id)arg1 relativeStart:(double)arg2 relativeDuration:(double)arg3;
- (_Bool)notifyUponEffectiveProgress:(double)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
