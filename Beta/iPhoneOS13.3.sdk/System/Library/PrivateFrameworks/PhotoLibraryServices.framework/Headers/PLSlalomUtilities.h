/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLSlalomUtilities : NSObject

+ (id)synchronouslyFetchVideoAdjustmentsFromManagedAsset:(id)arg1;
+ (id)videoAVObjectBuilderForManagedAsset:(id)arg1 applyVideoAdjustments:(_Bool)arg2;
+ (double)durationForManagedAsset:(id)arg1 applyVideoAdjustments:(_Bool)arg2;
+ (double)durationForBaseDuration:(double)arg1 videoAdjustments:(id)arg2;

@end
