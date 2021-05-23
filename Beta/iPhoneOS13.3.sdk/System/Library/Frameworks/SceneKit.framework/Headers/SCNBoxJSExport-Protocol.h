/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@protocol SCNBoxJSExport <Swift>

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double length;
@property (nonatomic) double chamferRadius;
@property (nonatomic) long long widthSegmentCount;
@property (nonatomic) long long heightSegmentCount;
@property (nonatomic) long long lengthSegmentCount;
@property (nonatomic) long long chamferSegmentCount;

+ (unsigned short)boxWithWidth:height:length:chamferRadius: /* Error: Ran out of types for this method. */;

@end
