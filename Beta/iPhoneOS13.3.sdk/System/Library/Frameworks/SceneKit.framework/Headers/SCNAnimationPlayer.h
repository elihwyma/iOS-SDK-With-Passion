/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, SCNAnimation, SCNOrderedDictionary;

@interface SCNAnimationPlayer : NSObject

{
    struct __C3DAnimationPlayer *_playerRef;
    SCNAnimation *_animation;
    float _weight;
    float _speed;
    _Bool _paused;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
}

@property (nonatomic, readonly) SCNAnimation *animation;
@property (nonatomic) double speed;
@property (nonatomic) double blendFactor;
@property (nonatomic) _Bool paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray *animationKeys;

+ (_Bool)supportsSecureCoding;
+ (id)animationPlayerWithSCNAnimation:(id)arg1;
+ (id)animationPlayerWithAnimationPlayerRef:(struct __C3DAnimationPlayer *)arg1;
+ (id)animationPlayerWithAnimation:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)stop;
- (void)setWeight:(float)arg1;
- (void)commonInit;
- (float)weight;
- (void)play;
- (id)scene;
- (void)addAnimation:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAllAnimations;
- (void)_setAnimation:(id)arg1;
- (const void *)__CFObject;
- (struct __C3DScene *)sceneRef;
- (void)prepareWithTarget:(id)arg1 implicitDuration:(double)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)_scnAnimationForKey:(id)arg1;
- (id)animationPlayerForKey:(id)arg1;
- (struct __C3DAnimationManager *)animationManager;
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)pauseAnimationForKey:(id)arg1;
- (void)resumeAnimationForKey:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (_Bool)isAnimationForKeyPaused:(id)arg1;
- (_Bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_syncObjCAnimations;
- (void)_copyAnimationsFrom:(id)arg1;
- (id)_scnBindings;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)unbindAnimatablePath:(id)arg1;
- (void)removeAllBindings;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (struct __C3DAnimationPlayer *)animationPlayerRef;
- (id)initWithAnimationPlayerRef:(struct __C3DAnimationPlayer *)arg1;
- (id)initWithSCNAnimation:(id)arg1;
- (void)stopWithBlendOutDuration:(double)arg1;
- (void)stopWithFadeOutDuration:(double)arg1;

@end
