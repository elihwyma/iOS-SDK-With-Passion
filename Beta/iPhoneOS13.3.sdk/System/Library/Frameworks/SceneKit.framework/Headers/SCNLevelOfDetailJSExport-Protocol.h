/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class SCNGeometry;

@protocol SCNLevelOfDetailJSExport <Swift>

@property (readonly) SCNGeometry *geometry;
@property (readonly) double screenSpaceRadius;
@property (readonly) double worldSpaceDistance;

+ (unsigned short)levelOfDetailWithGeometry:screenSpaceRadius: /* Error: Ran out of types for this method. */;
+ (unsigned short)levelOfDetailWithGeometry:worldSpaceDistance: /* Error: Ran out of types for this method. */;

- (unsigned short)copy;
- (unsigned short)setValue:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forKeyPath: /* Error: Ran out of types for this method. */;

@end
