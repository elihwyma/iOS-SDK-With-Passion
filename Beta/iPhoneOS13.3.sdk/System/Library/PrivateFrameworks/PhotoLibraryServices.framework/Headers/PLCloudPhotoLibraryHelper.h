/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLCloudPhotoLibraryHelper : NSObject

+ (void)enableCPL:(CDUnknownBlockType)arg1;
+ (void)disableCPL:(CDUnknownBlockType)arg1;
+ (_Bool)shouldSendOptimizeFeedbackOnce;
+ (void)setShouldSendOptimizeFeedbackOnce:(_Bool)arg1;
+ (_Bool)shouldRepushVideoAssetsMetadataOnce;
+ (void)setShouldRepushVideoAssetsMetadataOnce:(_Bool)arg1;
+ (_Bool)shouldRepushMasterWithMissingMediaMetadataOnce;
+ (void)setShouldRepushMasterWithMissingMediaMetadataOnce:(_Bool)arg1;
+ (_Bool)shouldMarkPurgeableResourcesOnce;
+ (void)setShouldMarkPurgeableResourcesOnce:(_Bool)arg1;
+ (_Bool)shouldClearPurgeableResourcesOnce;
+ (void)setShouldClearPurgeableResourcesOnce:(_Bool)arg1;
+ (_Bool)shouldHandleOptimizeModeChange;
+ (void)setShouldHandleOptimizeModeChange:(_Bool)arg1;

@end
