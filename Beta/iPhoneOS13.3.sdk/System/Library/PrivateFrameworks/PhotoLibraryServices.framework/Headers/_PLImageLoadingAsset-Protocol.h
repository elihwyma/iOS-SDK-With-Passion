/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@protocol _PLImageLoadingAsset <Swift>

- (unsigned short)uuid;
- (unsigned short)orientation;
- (unsigned short)duration;
- (unsigned short)kind;
- (unsigned short)originalImageSize;
- (unsigned short)aspectRatio;
- (unsigned short)imageSize;
- (unsigned short)isVideo;
- (unsigned short)debugFilename;
- (unsigned short)isJPEG;
- (unsigned short)originalFilename;
- (unsigned short)thumbnailIdentifier;
- (unsigned short)assetsLibraryURL;
- (unsigned short)originalImageOrientation;
- (unsigned short)hasLegacyAdjustments;
- (unsigned short)hasAdjustments;
- (unsigned short)savedAssetType;
- (unsigned short)kindSubtype;
- (unsigned short)uniformTypeIdentifier;
- (unsigned short)isLoopingVideo;
- (unsigned short)isPrimaryImageFormat;
- (unsigned short)isRAW;
- (unsigned short)isPartOfBurst;
- (unsigned short)isStreamedVideo;
- (unsigned short)pathForOriginalFile;
- (unsigned short)pathForAdjustmentFile;
- (unsigned short)pathForAdjustmentDataFile;
- (unsigned short)isInFlight;
- (unsigned short)isCloudSharedAsset;
- (unsigned short)cloudSharedAssetPlaceholderKind;
- (unsigned short)isCloudPhotoLibraryAsset;
- (unsigned short)isCloudPlaceholder;
- (unsigned short)managedAssetForPhotoLibrary: /* Error: Ran out of types for this method. */;
- (unsigned short)isTimelapsePlaceholder;
- (unsigned short)generateLargeThumbnailFileIfNecessary;
- (unsigned short)isOriginalSRGB;
- (unsigned short)localResourcesState;

@end
