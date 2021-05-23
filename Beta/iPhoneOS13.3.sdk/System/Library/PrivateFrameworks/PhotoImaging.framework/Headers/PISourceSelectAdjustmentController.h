/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIAdjustmentController.h>

@interface PISourceSelectAdjustmentController : PIAdjustmentController

@property (nonatomic) long long sourceSelection;

+ (id)sourceSelectionKey;
+ (id)stringForSourceSelection:(long long)arg1;
+ (long long)sourceSelectionForString:(id)arg1;

@end
