/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary;

@interface PIDepthAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSDictionary *depthInfo;
@property (nonatomic) double aperture;

+ (id)depthInfoKey;
+ (id)apertureKey;

- (id)capturedAperture;
- (_Bool)canRenderDepth;
- (id)initWithAdjustment:(id)arg1;

@end
