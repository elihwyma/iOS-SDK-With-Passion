/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIAdjustmentController.h>

@class NSArray;

@interface PIRedEyeAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSArray *inputCorrectionInfo;

+ (id)inputCorrectionInfoKey;

- (_Bool)hasCorrections;

@end
