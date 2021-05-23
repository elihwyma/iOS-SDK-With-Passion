/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSArray, SCNMaterialProperty, SCNNode, SCNPhysicsWorld;

@protocol SCNSceneJSExport <Swift>

@property (readonly) NSArray *particleSystems;
@property (nonatomic, readonly) SCNNode *rootNode;
@property (nonatomic, readonly) SCNPhysicsWorld *physicsWorld;
@property (nonatomic, readonly) SCNMaterialProperty *background;
@property (nonatomic, readonly) SCNMaterialProperty *lightingEnvironment;
@property (nonatomic) double fogStartDistance;
@property (nonatomic) double fogEndDistance;
@property (nonatomic) double fogDensityExponent;
@property (retain, nonatomic) id fogColor;
@property (nonatomic) _Bool wantsScreenSpaceReflection;
@property (nonatomic) long long screenSpaceReflectionSampleCount;
@property (nonatomic) double screenSpaceReflectionMaximumDistance;
@property (nonatomic) double screenSpaceReflectionStride;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double frameRate;

+ (unsigned short)scene;
+ (unsigned short)sceneWithMDLAsset: /* Error: Ran out of types for this method. */;
+ (unsigned short)sceneWithURL:options:error: /* Error: Ran out of types for this method. */;
+ (unsigned short)sceneNamed:inDirectory:options: /* Error: Ran out of types for this method. */;
+ (unsigned short)sceneNamed: /* Error: Ran out of types for this method. */;

- (unsigned short)setValue:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)attributeForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)setAttribute:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeParticleSystem: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllParticleSystems;
- (unsigned short)writeToURL:options:delegate:progressHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)addParticleSystem:withTransform: /* Error: Ran out of types for this method. */;

@end
