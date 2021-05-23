/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary, NSString;

@interface PIAutoLoopAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSDictionary *recipe;
@property (copy, nonatomic) NSString *flavor;
@property (nonatomic, readonly) struct CGRect stabilizedCropRect;

+ (id)flavorKey;
+ (id)recipeKey;

@end
