/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, PLMutablePTPAsset, PLSpatialOverCaptureInformation;

@protocol PLFileManager, PLPTPConversionSupport, PLPTPTransferableAsset;

@interface PLPTPAssetBuilder : NSObject

{
    id <PLPTPConversionSupport> _conversionSupport;
    id <PLPTPTransferableAsset> _asset;
    id <PLFileManager> _fileManager;
    NSString *_filenameForPTP;
    PLMutablePTPAsset *_currentPtpAsset;
    PLMutablePTPAsset *_commonPtpAsset;
    PLMutablePTPAsset *_originalPtpAsset;
    NSArray *_sidecarPtpAssets;
    PLMutablePTPAsset *_diagnosticPtpAsset;
    PLMutablePTPAsset *_adjustmentPtpAsset;
    PLMutablePTPAsset *_fullSizeRenderImagePtpAsset;
    PLMutablePTPAsset *_fullSizeRenderVideoPtpAsset;
    PLMutablePTPAsset *_spatialOverCaptureImagePtpAsset;
    PLMutablePTPAsset *_spatialOverCaptureVideoComplementPtpAsset;
    PLMutablePTPAsset *_originalAdjustmentPtpAsset;
    PLSpatialOverCaptureInformation *_cachedSpatialOverCaptureInformation;
    PLMutablePTPAsset *_penultimateImagePtpAsset;
    PLMutablePTPAsset *_penultimateVideoPtpAsset;
    NSMutableArray *_convertedAssets;
    _Bool _irisSidecarRequiresFormatConversion;
}

+ (_Bool)_shouldIncludeDiagnosticFile;
+ (id)pictureTransferProtocolAssetsForAsset:(id)arg1 withConversionSupport:(id)arg2;

- (id)spatialOverCaptureInformation;
- (_Bool)_suppressPtpInfo;
- (_Bool)_buildDirectoryPathAndFilename;
- (void)_buildExifAvailable;
- (void)_buildFileSize;
- (void)_buildOriginatingAssetID;
- (void)_buildThumbnailOffsetAndLength;
- (void)_buildImageDimensions;
- (void)_buildThumbnailDimensions;
- (void)_buildOrientation;
- (void)_buildPhotoKey;
- (void)_buildModificationAndCreationDate;
- (void)_durationOfTheAsset;
- (void)_buildGPSInformation;
- (void)_buildBurst;
- (void)_buildSlowMo;
- (void)_buildTimelapse;
- (id)initWithAsset:(id)arg1 conversionSupport:(id)arg2;
- (id)initWithAsset:(id)arg1 conversionSupport:(id)arg2 fileManager:(id)arg3;
- (id)pictureTransferProtocolAssets;
- (void)updateSiblingAssetTypesOnMutablePTPAssets:(id)arg1;
- (void)_buildCommonAsset;
- (_Bool)_buildOriginalAsset;
- (void)updateAssetForFormatConversion:(id)arg1 isVideo:(_Bool)arg2 isRender:(_Bool)arg3 forceLegacyConversion:(_Bool)arg4;
- (void)_updateAssetForTranscodeChoice:(id)arg1 withConversionResult:(id)arg2;
- (void)_updateAsset:(id)arg1 withConversionResult:(id)arg2;
- (void)_updateOriginalAssetFormatConversionFromVideoComplement;
- (void)_buildGroupUUID;
- (_Bool)_hasIrisSidecarFile;
- (void)_buildRelatedUUID;
- (void)_buildSpatialOverCaptureGroupIdentifier;
- (void)_buildSpatialOverCaptureLivePhotoPairingIdentifier;
- (void)_buildDeletedFlag;
- (void)_buildSidecarAssets;
- (id)_assetForSidecar:(id)arg1 sidecarPath:(id)arg2 irisSidecarPath:(id)arg3;
- (void)_buildDiagnosticAsset;
- (void)_buildAdjustmentAsset;
- (void)_buildFullSizeRenderImageAsset;
- (void)_buildFullSizeRenderVideoAsset;
- (_Bool)hasSpatialOverCaptureContent;
- (void)buildSpatialOverCaptureContentPtpAsset;
- (void)buildSpatialOverCaptureVideoComplementPtpAsset;
- (void)buildOriginalAdjustmentPtpAsset;
- (void)buildPenultimateImagePtpAsset;
- (void)buildPenultimateVideoPtpAsset;

@end
