/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <Foundation/NSObject.h>

@interface PVGeometryUtils : NSObject

+ (struct CGRect)normalizedRectForRect:(struct CGRect)arg1 inBoundsOfSize:(struct CGSize)arg2;
+ (struct CGRect)normalizedRectForRect:(struct CGRect)arg1 inBounds:(struct CGRect)arg2;
+ (struct CGRect)rectFromMappingNormalizedRect:(struct CGRect)arg1 toBoundsOfSize:(struct CGSize)arg2;
+ (struct CGRect)rectFromMappingNormalizedRect:(struct CGRect)arg1 toBounds:(struct CGRect)arg2;
+ (struct CGPoint)pointFromNormalizedPoint:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;

@end
