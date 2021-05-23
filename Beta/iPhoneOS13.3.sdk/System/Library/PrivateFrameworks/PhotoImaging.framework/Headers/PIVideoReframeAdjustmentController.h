/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIAdjustmentController.h>

@class NSArray;

@interface PIVideoReframeAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSArray *keyframes;
@property (nonatomic) CDStruct_996ac03c stabCropRect;

+ (id)stabCropRectKey;
+ (id)keyframesKey;

- (_Bool)isEqual:(id)arg1 forKeys:(id)arg2;
- (id)copyKeyframesTrimmingToTimeRange:(CDStruct_5c5366e1)arg1;

@end
