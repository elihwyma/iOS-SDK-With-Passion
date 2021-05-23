/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@interface PUStorageManagementUtility : NSObject

+ (void)purgeableSizeAndOriginalsInLibrary:(CDUnknownBlockType)arg1;
+ (_Bool)isCPLEnabled;
+ (_Bool)shouldHideCPL;
+ (id)_assetsInTrash;
+ (id)sizeForRecentlyDeletedItems;
+ (_Bool)isDeletableItemsInTrash;
+ (id)_assetsWithSpatialOvercaptureResources;
+ (id)sizeForTrashedSpatialOvercaptureResources;
+ (_Bool)isOptimizedModeOn;
+ (void)enableOptimizedMode:(_Bool)arg1;
+ (void)enableCPLWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)expungeRecentlyDeletedItemsWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)expungeTrashedSpatialOverCaptureResourcesWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (id)stringWithSizeUnitForValue:(id)arg1;
+ (id)_defaultVideoAssetFetchOptionsWithSortOrder:(_Bool)arg1 fetchLimit:(unsigned long long)arg2 minimumFileSize:(unsigned long long)arg3;
+ (id)fetchVideoAssetsBySizeWithSortOrder:(_Bool)arg1;
+ (id)_deleteableVideoAssets;
+ (unsigned long long)totalReclaimableSizeFromPurgingVideoClips;
+ (id)significantItems;
+ (_Bool)isCPLInInitialUploadingState;

@end
