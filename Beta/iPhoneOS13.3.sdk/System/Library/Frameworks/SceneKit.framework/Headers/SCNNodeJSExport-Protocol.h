/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSArray, NSString, SCNCamera, SCNGeometry, SCNLight, SCNMorpher, SCNNode, SCNPhysicsBody, SCNPhysicsField, SCNSkinner;

@protocol SCNNodeRendererDelegate;

@protocol SCNNodeJSExport <Swift>

@property (nonatomic, readonly) NSArray *audioPlayers;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SCNLight *light;
@property (retain, nonatomic) SCNCamera *camera;
@property (retain, nonatomic) SCNGeometry *geometry;
@property (retain, nonatomic) SCNSkinner *skinner;
@property (retain, nonatomic) SCNMorpher *morpher;
@property (nonatomic) struct SCNMatrix4 transform;
@property (nonatomic) struct SCNVector3 position;
@property (nonatomic) struct SCNVector4 rotation;
@property (nonatomic) struct SCNVector4 orientation;
@property (nonatomic) struct SCNVector4 worldOrientation;
@property (nonatomic) struct SCNVector3 eulerAngles;
@property (nonatomic) struct SCNVector3 scale;
@property (nonatomic) struct SCNMatrix4 pivot;
@property (nonatomic) struct SCNVector3 worldPosition;
@property (nonatomic, readonly) struct SCNMatrix4 worldTransform;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic) double opacity;
@property (nonatomic) long long renderingOrder;
@property (nonatomic) _Bool castsShadow;
@property (nonatomic) long long movabilityHint;
@property (nonatomic, readonly) SCNNode *parentNode;
@property (nonatomic, readonly) NSArray *childNodes;
@property (retain, nonatomic) SCNPhysicsBody *physicsBody;
@property (retain, nonatomic) SCNPhysicsField *physicsField;
@property (copy) NSArray *constraints;
@property (copy, nonatomic) NSArray *filters;
@property (nonatomic, readonly) SCNNode *presentationNode;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) id <SCNNodeRendererDelegate> rendererDelegate;
@property (nonatomic) unsigned long long categoryBitMask;
@property (nonatomic, readonly) struct SCNVector3 worldUp;
@property (nonatomic, readonly) struct SCNVector3 worldRight;
@property (nonatomic, readonly) struct SCNVector3 worldFront;
@property (readonly) NSArray *particleSystems;

+ (unsigned short)node;
+ (unsigned short)nodeWithMDLObject: /* Error: Ran out of types for this method. */;
+ (unsigned short)nodeWithGeometry: /* Error: Ran out of types for this method. */;
+ (unsigned short)localUp;
+ (unsigned short)localRight;
+ (unsigned short)localFront;

- (unsigned short)copy;
- (unsigned short)setValue:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllActions;
- (unsigned short)animationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)addAnimation:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllAnimations;
- (unsigned short)animationKeys;
- (unsigned short)actionForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)hasActions;
- (unsigned short)removeFromParentNode;
- (unsigned short)insertChildNode:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addChildNode: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateChildNodesUsingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)lookAt: /* Error: Ran out of types for this method. */;
- (unsigned short)clone;
- (unsigned short)enumerateHierarchyUsingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setWorldTransform: /* Error: Ran out of types for this method. */;
- (unsigned short)childNodesPassingTest: /* Error: Ran out of types for this method. */;
- (unsigned short)convertPosition:toNode: /* Error: Ran out of types for this method. */;
- (unsigned short)addAudioPlayer: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAudioPlayer: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeParticleSystem: /* Error: Ran out of types for this method. */;
- (unsigned short)addParticleSystem: /* Error: Ran out of types for this method. */;
- (unsigned short)convertTransform:toNode: /* Error: Ran out of types for this method. */;
- (unsigned short)childNodeWithName:recursively: /* Error: Ran out of types for this method. */;
- (unsigned short)runAction: /* Error: Ran out of types for this method. */;
- (unsigned short)runAction:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)flattenedClone;
- (unsigned short)removeActionForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)runAction:forKey:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)runAction:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)childNodeWithName: /* Error: Ran out of types for this method. */;
- (unsigned short)hitTestWithSegmentFromPoint:toPoint:options: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceChildNode:with: /* Error: Ran out of types for this method. */;
- (unsigned short)getBoundingSphere;
- (unsigned short)getBoundingBox;
- (unsigned short)removeAllParticleSystems;
- (unsigned short)removeAllAudioPlayers;
- (unsigned short)convertPosition:fromNode: /* Error: Ran out of types for this method. */;
- (unsigned short)convertVector:toNode: /* Error: Ran out of types for this method. */;
- (unsigned short)convertVector:fromNode: /* Error: Ran out of types for this method. */;
- (unsigned short)convertTransform:fromNode: /* Error: Ran out of types for this method. */;
- (unsigned short)lookAt:up:localFront: /* Error: Ran out of types for this method. */;
- (unsigned short)localTranslateBy: /* Error: Ran out of types for this method. */;
- (unsigned short)localRotateBy: /* Error: Ran out of types for this method. */;
- (unsigned short)rotateBy:aroundTarget: /* Error: Ran out of types for this method. */;

@end
