/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class CLLocation, NSDate, NSManagedObjectID, NSSet, NSString, NSURL;

@protocol PLPTPTransferableAdditionalAssetAttributes, PLPTPTransferableSidecarFile;

@protocol PLPTPTransferableAsset <Swift>

@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (retain, nonatomic, readonly) id uuid;
@property (nonatomic, readonly) short savedAssetType;
@property (nonatomic, readonly) unsigned short deferredProcessingNeeded;
@property (copy, nonatomic, readonly) NSString *filename;
@property (copy, nonatomic, readonly) NSString *originalFilename;
@property (copy, nonatomic, readonly) NSDate *dateCreated;
@property (copy, nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) unsigned long long originalFilesize;
@property (copy, nonatomic, readonly) NSString *pathForOriginalFile;
@property (nonatomic, readonly) _Bool cloudPhotoLibraryEnabled;
@property (nonatomic, readonly) unsigned long long ptpCloudMasterOriginalFileSize;
@property (retain, nonatomic, readonly) id <PLPTPTransferableAdditionalAssetAttributes> ptpAdditionalAttributes;
@property (retain, nonatomic, readonly) NSSet *ptpSidecarFiles;
@property (nonatomic, readonly) _Bool isInFlight;
@property (nonatomic, readonly) _Bool isPhoto;
@property (nonatomic, readonly) _Bool isVideo;
@property (nonatomic, readonly) _Bool isAudio;
@property (nonatomic, readonly) _Bool isAvalanchePhoto;
@property (nonatomic, readonly) _Bool isPhotoIris;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) short kindSubtype;
@property (copy, nonatomic, readonly) NSString *avalancheUUID;
@property (nonatomic, readonly) int avalanchePickType;
@property (copy, nonatomic, readonly) NSString *mediaGroupUUID;
@property (nonatomic, readonly) id <PLPTPTransferableSidecarFile> ptpPhotoIrisSidecar;
@property (copy, nonatomic, readonly) NSURL *mainFileURL;
@property (nonatomic, readonly) int embeddedThumbnailOffset;
@property (nonatomic, readonly) long long originalWidth;
@property (nonatomic, readonly) long long originalHeight;
@property (nonatomic, readonly) short originalOrientation;
@property (nonatomic, readonly) long long width;
@property (nonatomic, readonly) long long height;
@property (retain, nonatomic, readonly) CLLocation *location;
@property (copy, nonatomic, readonly) NSString *pathForDiagnosticFile;
@property (copy, nonatomic, readonly) NSString *pathForAdjustmentFile;
@property (copy, nonatomic, readonly) NSString *pathForFullsizeRenderImageFile;
@property (copy, nonatomic, readonly) NSString *pathForFullsizeRenderVideoFile;
@property (copy, nonatomic, readonly) NSString *pathForSpatialOverCaptureContentFile;
@property (copy, nonatomic, readonly) NSString *pathForVideoComplementSpatialOverCaptureContentFile;
@property (copy, nonatomic, readonly) NSString *pathForOriginalAdjustmentFile;
@property (nonatomic, readonly) struct CGSize spatialOverCaptureSize;
@property (nonatomic, readonly) struct CGSize videoComplementSpatialOverCaptureSize;
@property (nonatomic, readonly) long long snowplowTrashedState;
@property (copy, nonatomic, readonly) NSString *pathForPenultimateFullsizeRenderImageFile;
@property (copy, nonatomic, readonly) NSString *pathForPenultimateFullsizeRenderVideoFile;

@end
