/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSArray, NSString, SCNGeometryElement, SCNGeometrySource, SCNGeometryTessellator, SCNMaterial;

@protocol SCNGeometryJSExport <Swift>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *materials;
@property (retain, nonatomic) SCNMaterial *firstMaterial;
@property (nonatomic, readonly) NSArray *geometrySources;
@property (nonatomic, readonly) NSArray *geometrySourceChannels;
@property (nonatomic, readonly) NSArray *geometryElements;
@property (nonatomic, readonly) long long geometryElementCount;
@property (copy, nonatomic) NSArray *levelsOfDetail;
@property (retain, nonatomic) SCNGeometryTessellator *tessellator;
@property (nonatomic) unsigned long long subdivisionLevel;
@property (retain, nonatomic) SCNGeometryElement *edgeCreasesElement;
@property (retain, nonatomic) SCNGeometrySource *edgeCreasesSource;
@property (nonatomic) long long smoothingMode;

+ (unsigned short)geometry;
+ (unsigned short)geometryWithMDLMesh: /* Error: Ran out of types for this method. */;
+ (unsigned short)geometryWithSources:elements: /* Error: Ran out of types for this method. */;
+ (unsigned short)geometryWithSources:elements:sourceChannels: /* Error: Ran out of types for this method. */;

- (unsigned short)copy;
- (unsigned short)setValue:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)animationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)addAnimation:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllAnimations;
- (unsigned short)animationKeys;
- (unsigned short)geometrySourcesForSemantic: /* Error: Ran out of types for this method. */;
- (unsigned short)geometryElementAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceMaterialAtIndex:withMaterial: /* Error: Ran out of types for this method. */;
- (unsigned short)getBoundingSphere;
- (unsigned short)getBoundingBox;
- (unsigned short)removeMaterialAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)insertMaterial:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)materialWithName: /* Error: Ran out of types for this method. */;

@end
