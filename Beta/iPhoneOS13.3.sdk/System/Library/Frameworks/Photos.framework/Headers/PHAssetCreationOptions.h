/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class PHAssetCreationAdjustmentBakeInOptions, PHAssetCreationMetadataCopyOptions;

@interface PHAssetCreationOptions : NSObject

{
    _Bool _shouldDownloadOrCloudReReferenceMissingResources;
    _Bool _resetUserSpecificMetadata;
    _Bool _copyStillPhotoFromLivePhoto;
    _Bool _copyOriginal;
    _Bool _copySinglePhotoFromBurst;
    CDUnknownBlockType _destinationAssetAvailabilityHandler;
    PHAssetCreationAdjustmentBakeInOptions *_adjustmentBakeInOptions;
    PHAssetCreationMetadataCopyOptions *_metadataCopyOptions;
    CDStruct_1b6d18a9 _stillSourceTime;
}

@property (nonatomic) _Bool shouldDownloadOrCloudReReferenceMissingResources;
@property (copy, nonatomic) CDUnknownBlockType destinationAssetAvailabilityHandler;
@property (copy, nonatomic) PHAssetCreationAdjustmentBakeInOptions *adjustmentBakeInOptions;
@property (copy, nonatomic) PHAssetCreationMetadataCopyOptions *metadataCopyOptions;
@property (nonatomic) CDStruct_1b6d18a9 stillSourceTime;
@property (nonatomic) _Bool resetUserSpecificMetadata;
@property (nonatomic) _Bool copyStillPhotoFromLivePhoto;
@property (nonatomic) _Bool copyOriginal;
@property (nonatomic) _Bool copySinglePhotoFromBurst;

- (id)init;

@end
