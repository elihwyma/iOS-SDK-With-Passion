/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIAdjustmentController.h>

@interface PISlomoAdjustmentController : PIAdjustmentController

@property (nonatomic) CDStruct_1b6d18a9 startTime;
@property (nonatomic) CDStruct_1b6d18a9 endTime;
@property (nonatomic) double rate;

+ (id)rateKey;
+ (id)endScaleKey;
+ (id)endKey;
+ (id)startScaleKey;
+ (id)startKey;

@end
