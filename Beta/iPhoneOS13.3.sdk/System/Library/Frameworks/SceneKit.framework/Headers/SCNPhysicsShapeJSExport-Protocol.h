/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSArray, NSDictionary;

@protocol SCNPhysicsShapeJSExport <Swift>

@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) id sourceObject;
@property (nonatomic, readonly) NSArray *transforms;

+ (unsigned short)shapeWithGeometry:options: /* Error: Ran out of types for this method. */;
+ (unsigned short)shapeWithNode:options: /* Error: Ran out of types for this method. */;
+ (unsigned short)shapeWithShapes:transforms: /* Error: Ran out of types for this method. */;

- (unsigned short)copy;

@end
