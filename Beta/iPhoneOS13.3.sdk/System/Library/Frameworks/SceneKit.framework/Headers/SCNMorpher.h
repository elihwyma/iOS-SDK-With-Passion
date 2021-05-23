/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SCNOrderedDictionary;

@interface SCNMorpher : NSObject

{
    struct __C3DMorph *_morpher;
    unsigned int _isPresentationInstance:1;
    long long _calculationMode;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSArray *_targets;
    NSMutableArray *_weights;
    NSArray *_topLevelAndInBetweenTargets;
    NSArray *_inBetweenCounts;
    NSArray *_inBetweenInfluenceWeights;
    NSDictionary *_targetNameToIndexes;
    NSString *_name;
    _Bool _unifyNormal;
    _Bool _useSparseTargets;
}

@property (copy, nonatomic) NSArray *targets;
@property (retain, nonatomic) NSArray *weights;
@property (nonatomic) long long calculationMode;
@property _Bool unifiesNormals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray *animationKeys;

+ (_Bool)supportsSecureCoding;
+ (id)morpher;
+ (id)morpherWithMorphRef:(struct __C3DMorph *)arg1;
+ (id)weightIndexStringForIndex:(long long)arg1;
+ (Class)SCNUID_classForElementOfArray:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setName:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)scene;
- (void)addAnimation:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAllAnimations;
- (void)setTargets:(id)arg1 withInBetweenTargetCounts:(id)arg2 inBetweenWeights:(id)arg3;
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
- (id)presentationInstance;
- (void)_syncObjCModel;
- (void)_syncEntityObjCModel;
- (struct __C3DMorph *)morphRef;
- (id)initWithMorphRef:(struct __C3DMorph *)arg1;
- (void)clearInBetweens;
- (id)initPresentationMorpherWithMorphRef:(struct __C3DMorph *)arg1;
- (id)presentationMorpher;
- (long long)_weightIndexForTargetNamed:(id)arg1;
- (void)setWeight:(double)arg1 forTargetAtIndex:(unsigned long long)arg2;
- (double)weightForTargetAtIndex:(unsigned long long)arg1;
- (void)_customEncodingOfSCNMorpher:(id)arg1;
- (void)_customDecodingOfSCNMorpher:(id)arg1;
- (void)_didDecodeSCNMorpher:(id)arg1;
- (void)setWeight:(double)arg1 forTargetNamed:(id)arg2;
- (double)weightForTargetNamed:(id)arg1;
- (id)channelTargetCounts;
- (id)channelTargetWeights;
- (void)setChannelTargetCounts:(id)arg1;
- (void)setChannelTargetWeights:(id)arg1;
- (id)targetsAndInBetween;
- (void)_updateTargetsAndInBetween:(id)arg1;
- (id)inBetweenTargetsForTargetAtIndex:(unsigned long long)arg1;
- (id)inBetweenWeightsForTargetAtIndex:(unsigned long long)arg1;
- (_Bool)shouldMorphNormals;
- (void)setShouldMorphNormals:(_Bool)arg1;
- (_Bool)wantsCPUMorphing;
- (void)setWantsCPUMorphing:(_Bool)arg1;
- (void)convertToAdditiveWithBaseGeometry:(id)arg1;
- (_Bool)_isUsingSparseTargets;
- (void)convertToSparseWithBaseGeometry:(id)arg1;

@end
