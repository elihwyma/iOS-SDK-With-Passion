/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, SCNTimingFunction;

@interface SCNAnimation : NSObject

{
    struct __C3DAnimation *_animationRef;
    NSString *_keyPath;
    double _duration;
    double _repeatCount;
    double _timeOffset;
    double _beginTime;
    _Bool _autoreverses;
    _Bool _removedOnCompletion;
    _Bool _applyOnCompletion;
    _Bool _additive;
    _Bool _cumulative;
    _Bool _usesSceneTimeBase;
    _Bool _fillForward;
    _Bool _fillBackward;
    SCNTimingFunction *_timingFunction;
    NSArray *_animationEvents;
    double _fadeInDuration;
    double _fadeOutDuration;
    CDUnknownBlockType _animationDidStart;
    CDUnknownBlockType _animationDidStop;
    NSMutableDictionary *_userInfo;
    id _caAnimationCache;
    id _userAnimation;
    _Bool _didMutate;
}

@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) SCNTimingFunction *timingFunction;
@property (nonatomic) double blendInDuration;
@property (nonatomic) double blendOutDuration;
@property (nonatomic, getter=isRemovedOnCompletion) _Bool removedOnCompletion;
@property (nonatomic, getter=isAppliedOnCompletion) _Bool appliedOnCompletion;
@property (nonatomic) double repeatCount;
@property (nonatomic) _Bool autoreverses;
@property (nonatomic) double startDelay;
@property (nonatomic) double timeOffset;
@property (nonatomic) _Bool fillsForward;
@property (nonatomic) _Bool fillsBackward;
@property (nonatomic) _Bool usesSceneTimeBase;
@property (copy, nonatomic) CDUnknownBlockType animationDidStart;
@property (copy, nonatomic) CDUnknownBlockType animationDidStop;
@property (copy, nonatomic) NSArray *animationEvents;
@property (nonatomic, getter=isAdditive) _Bool additive;
@property (nonatomic, getter=isCumulative) _Bool cumulative;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)animationWithCAAnimation:(id)arg1;
+ (id)animationWithMDLTransform:(id)arg1;
+ (id)animationNamed:(id)arg1;
+ (id)animationWithC3DAnimation:(struct __C3DAnimation *)arg1;
+ (id)animationWithContentsOfURL:(id)arg1;
+ (id)animationFromScene:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setFadeInDuration:(double)arg1;
- (void)setFadeOutDuration:(double)arg1;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (double)repeatDuration;
- (void)setRepeatDuration:(double)arg1;
- (void)_didMutate;
- (const void *)__CFObject;
- (id)userAnimation;
- (void)prepareWithTarget:(id)arg1 implicitDuration:(double)arg2;
- (void)_syncObjCModel;
- (struct __C3DAnimation *)animationRef;
- (id)caAnimation;
- (void)_setAnimationRef:(struct __C3DAnimation *)arg1;
- (id)initWithC3DAnimation:(struct __C3DAnimation *)arg1;
- (id)initWithCAAnimation:(id)arg1;

@end
