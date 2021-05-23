/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAITOrientedBounds : NSObject

+ (id)absoluteOrientedBoundsOfDrawable:(id)arg1;
+ (float)scaleFactorFromLength:(float)arg1 toLength:(float)arg2;
+ (struct CGAffineTransform)transformFromBounds:(struct CGRect)arg1 toOrientedBounds:(id)arg2;
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(struct CGRect)arg3;
+ (id)relativeOrientedBoundsOfDrawable:(id)arg1;
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1 logicalBounds:(struct CGRect)arg2;
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1;
+ (id)relativeOrientedBoundsWithAbsoluteOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(struct CGRect)arg3;
+ (struct CGRect)axisParallelBoundsOfOrientedBounds:(id)arg1;

@end
