/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SCNOrderedDictionary;

@protocol MTLLibrary;

@interface SCNTechnique : NSObject

{
    unsigned int _isPresentationInstance:1;
    struct __C3DFXTechnique *_technique;
    NSMutableDictionary *_valueForSymbol;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    id <MTLLibrary> _library;
    NSArray *_passes;
}

@property (readonly) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) id <MTLLibrary> library;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray *animationKeys;

+ (_Bool)supportsSecureCoding;
+ (id)techniqueWithDictionary:(id)arg1;
+ (id)techniqueBySequencingTechniques:(id)arg1;
+ (id)techniqueWithTechniqueRef:(struct __C3DFXTechnique *)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)scene;
- (void)addAnimation:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAllAnimations;
- (id)passAtIndex:(unsigned long long)arg1;
- (const void *)__CFObject;
- (struct __C3DScene *)sceneRef;
- (id)initWithTechniqueRef:(struct __C3DFXTechnique *)arg1;
- (struct __C3DFXTechnique *)techniqueRef;
- (id)_symbolsAssignedValues;
- (void)setValue:(id)arg1 forSymbolNamed:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)_scnAnimationForKey:(id)arg1;
- (id)animationPlayerForKey:(id)arg1;
- (struct __C3DAnimationManager *)animationManager;
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (id)initPresentationTechniqueWithTechniqueRef:(struct __C3DFXTechnique *)arg1;
- (void)_setupPasses;
- (void)_customEncodingOfSCNTechnique:(id)arg1;
- (void)_customDecodingOfSCNTechnique:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)pauseAnimationForKey:(id)arg1;
- (void)resumeAnimationForKey:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (_Bool)isAnimationForKeyPaused:(id)arg1;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)valueForSymbolNamed:(id)arg1;
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
- (void)_didInstallInEngineContext:(struct __C3DEngineContext *)arg1;

@end
