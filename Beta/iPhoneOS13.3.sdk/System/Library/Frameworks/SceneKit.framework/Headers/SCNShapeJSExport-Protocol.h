/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@protocol SCNShapeJSExport <Swift>

@property (copy, nonatomic) id path;
@property (nonatomic) double extrusionDepth;
@property (nonatomic) long long chamferMode;
@property (nonatomic) double chamferRadius;
@property (copy, nonatomic) id chamferProfile;

+ (unsigned short)shapeWithPath:extrusionDepth: /* Error: Ran out of types for this method. */;

@end
