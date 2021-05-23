/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIAdjustmentController.h>

@interface PIVignetteAdjustmentController : PIAdjustmentController

@property (nonatomic) double intensity;
@property (nonatomic) double radius;
@property (nonatomic) double falloff;

+ (id)intensityKey;
+ (id)falloffKey;
+ (id)radiusKey;

@end
