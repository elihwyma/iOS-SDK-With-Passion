/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, SCNOrderedDictionary;

@interface SCNConstraint : NSObject

{
    struct __C3DConstraint *_constraintRef;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    _Bool _enabled;
    _Bool _incremental;
    double _influenceFactor;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) double influenceFactor;
@property (nonatomic, getter=isIncremental) _Bool incremental;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray *animationKeys;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setName:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)commonInit;
- (id)scene;
- (void)addAnimation:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAllAnimations;
- (const void *)__CFObject;
- (struct __C3DScene *)sceneRef;
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
- (_Bool)isPausedOrPausedByInheritance;
- (struct __C3DConstraint *)constraintRef;
- (void)setConstraintRef:(struct __C3DConstraint *)arg1;
- (void)finalizeDecodeConstraint:(id)arg1;

@end
