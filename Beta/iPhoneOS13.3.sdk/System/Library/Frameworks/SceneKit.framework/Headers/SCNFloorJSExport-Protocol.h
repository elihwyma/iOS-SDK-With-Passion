/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@protocol SCNFloorJSExport <Swift>

@property (nonatomic) double reflectivity;
@property (nonatomic) double reflectionFalloffStart;
@property (nonatomic) double reflectionFalloffEnd;
@property (nonatomic) unsigned long long reflectionCategoryBitMask;
@property (nonatomic) double width;
@property (nonatomic) double length;
@property (nonatomic) double reflectionResolutionScaleFactor;

+ (unsigned short)floor;

@end
