/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVAudioMix, CLLocation, NSDate, NSDictionary, NSString, NSURL, PFAssetAdjustments, PFVideoAVObjectBuilder, PHLivePhoto, UIImage;

@interface PUReviewAsset : NSObject

{
    _Bool _requiresConfidentiality;
    _Bool _HDR;
    _Bool _livePhoto;
    _Bool _livePhotoPlaceholder;
    _Bool _canPlayPhotoIris;
    _Bool _representsBurst;
    AVAsset *providedAVAsset;
    AVAudioMix *providedAudioMix;
    PHLivePhoto *providedLivePhoto;
    NSString *_identifier;
    unsigned long long _mediaType;
    unsigned long long _mediaSubtypes;
    long long _playbackStyle;
    long long _playbackVariation;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    CLLocation *_location;
    NSDate *_creationDate;
    NSDate *_localCreationDate;
    NSDate *_modificationDate;
    double _duration;
    NSString *_burstIdentifier;
    unsigned long long _numberOfRepresentedAssets;
    UIImage *_providedPreviewImage;
    NSDictionary *_providedImageMetadata;
    NSURL *_providedFullsizeImageURL;
    NSURL *_providedFullsizeRenderImageURL;
    NSURL *_providedVideoURL;
    NSURL *_providedFullsizeRenderVideoURL;
    PFAssetAdjustments *_assetAdjustments;
    CDStruct_1b6d18a9 _livePhotoSynchronizedDisplayTime;
    CDStruct_1b6d18a9 _livePhotoDuration;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackVariation;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *localCreationDate;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly, getter=isFavorite) _Bool favorite;
@property (nonatomic, readonly, getter=isHDR) _Bool HDR;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, getter=isLivePhoto) _Bool livePhoto;
@property (nonatomic, readonly, getter=isLivePhotoPlaceholder) _Bool livePhotoPlaceholder;
@property (nonatomic, readonly) _Bool canPlayPhotoIris;
@property (nonatomic, readonly) CDStruct_1b6d18a9 livePhotoSynchronizedDisplayTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 livePhotoDuration;
@property (copy, nonatomic, readonly) NSString *burstIdentifier;
@property (nonatomic, readonly) _Bool representsBurst;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly) UIImage *providedPreviewImage;
@property (nonatomic, readonly) NSDictionary *providedImageMetadata;
@property (nonatomic, readonly) NSURL *providedFullsizeImageURL;
@property (nonatomic, readonly) NSURL *providedFullsizeRenderImageURL;
@property (nonatomic, readonly) NSURL *providedVideoURL;
@property (nonatomic, readonly) NSURL *providedFullsizeRenderVideoURL;
@property (nonatomic, readonly) PFAssetAdjustments *assetAdjustments;
@property (nonatomic, readonly) _Bool requiresConfidentiality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) _Bool isTemporaryPlaceholder;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) unsigned long long originalFilesize;
@property (nonatomic, readonly) _Bool isAnimatedImage;
@property (nonatomic, readonly) _Bool canPlayLoopingVideo;
@property (nonatomic, readonly) _Bool isPhotoIrisPlaceholder;
@property (nonatomic, readonly) CDStruct_1b6d18a9 photoIrisStillDisplayTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 photoIrisVideoDuration;
@property (nonatomic, readonly) _Bool hasPhotoColorAdjustments;
@property (nonatomic, readonly) unsigned long long deferredLogInfo;
@property (nonatomic, readonly) CDStruct_1b6d18a9 videoKeyFrameSourceTime;
@property (nonatomic, readonly, getter=isHighFramerateVideo) _Bool highFramerateVideo;
@property (nonatomic, readonly, getter=isAdjusted) _Bool adjusted;
@property (nonatomic, readonly, getter=isContentAdjustmentAllowed) _Bool contentAdjustmentAllowed;
@property (nonatomic, readonly, getter=isLivePhotoVisibilityAdjustmentAllowed) _Bool livePhotoVisibilityAdjustmentAllowed;
@property (nonatomic, readonly, getter=isInPlaceVideoTrimAllowed) _Bool inPlaceVideoTrimAllowed;
@property (nonatomic, readonly) unsigned long long originalResourceChoice;
@property (nonatomic, readonly, getter=isTrimmableType) _Bool trimmableType;
@property (nonatomic, readonly) unsigned long long livePhotoVisibilityState;
@property (nonatomic, readonly) PFVideoAVObjectBuilder *videoObjectBuilder;
@property (nonatomic, readonly) unsigned long long reframeVariation;
@property (nonatomic, readonly) NSDictionary *imageProperties;
@property (nonatomic, readonly) int originalEXIFOrientation;
@property (nonatomic, readonly, getter=isResourceDownloadPossible) _Bool resourceDownloadPossible;
@property (nonatomic, readonly, getter=isCloudPhotoLibraryEnabled) _Bool cloudPhotoLibraryEnabled;
@property (copy, nonatomic, readonly) NSString *pathForOriginalImageFile;
@property (copy, nonatomic, readonly) NSString *pathForOriginalVideoFile;
@property (copy, nonatomic, readonly) NSString *pathForTrimmedVideoFile;
@property (nonatomic, readonly) PHLivePhoto *providedLivePhoto;
@property (nonatomic, readonly) AVAsset *providedAVAsset;
@property (nonatomic, readonly) AVAudioMix *providedAudioMix;

+ (_Bool)_shouldShowConfidentialityWarningForAdjustments:(id)arg1;
+ (_Bool)_shouldShowConfidentialityWarningForMetadata:(id)arg1 creationDate:(id)arg2;
+ (_Bool)_shouldCheckConfidentiality;
+ (unsigned long long)_confidentialityWarningsVersionForAdjustments:(id)arg1;
+ (id)createUniqueMediaDirectoryForAssetWithIdentifier:(id)arg1;
+ (id)fileURLForFullsizeImageInDirectory:(id)arg1 extension:(id)arg2;
+ (id)fileURLForFullsizeRenderImageInDirectory:(id)arg1 extension:(id)arg2;
+ (id)fileURLForFullsizeVideoInDirectory:(id)arg1 extension:(id)arg2;
+ (id)fileURLForFullsizeRenderVideoInDirectory:(id)arg1;
+ (id)fileURLForFullsizeVideoComplementInDirectory:(id)arg1;
+ (id)fileURLForFullsizeRenderVideoComplementInDirectory:(id)arg1;
+ (id)fileURLForAdjustmentsInDirectory:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelContentEditingInputRequest:(unsigned long long)arg1;
- (_Bool)isOriginalRaw;
- (unsigned long long)isContentEqualTo:(id)arg1;
- (id)adjustmentOutputForInputBaseVersion:(long long)arg1 withLivePhotoSupport:(_Bool)arg2;
- (id)inputForAdjustmentWithMediaProvider:(id)arg1 canHandleAdjustments:(CDUnknownBlockType)arg2;
- (id)reviewAssetWithAdjustmentOutput:(id)arg1 adjustmentData:(id)arg2 formatIdentifier:(id)arg3 version:(id)arg4;
- (id)reviewAssetRevertingAdjustments;
- (id)primaryRenderedMediaURL;
- (int)exifOrientationForImageVersion:(long long)arg1;
- (id)providedVideoURLForImageVersion:(long long)arg1;
- (id)providedVideoURLForVideoVersion:(long long)arg1;
- (id)providedImageURLForImageVersion:(long long)arg1;
- (id)initWithReviewAsset:(id)arg1;
- (id)initWithConformingAsset:(id)arg1;
- (id)initWithReviewAsset:(id)arg1 linkFileURLsToUniquePathsInDirectory:(id)arg2;
- (id)initWithReviewAsset:(id)arg1 linkFileURLsToUniquePathsInDirectory:(id)arg2 canPlayPhotoIris:(_Bool)arg3;
- (id)initWithReviewAsset:(id)arg1 primaryResourceURL:(id)arg2;
- (id)initWithReviewAsset:(id)arg1 baseImageURL:(id)arg2 renderedImageURL:(id)arg3 baseVideoURL:(id)arg4 renderedVideoURL:(id)arg5 pixelWidth:(unsigned long long)arg6 pixelHeight:(unsigned long long)arg7 assetAdjustments:(id)arg8 duration:(double)arg9;
- (id)initWithReviewAsset:(id)arg1 baseImageURL:(id)arg2 renderedImageURL:(id)arg3 baseVideoURL:(id)arg4 renderedVideoURL:(id)arg5 previewImage:(id)arg6 pixelWidth:(unsigned long long)arg7 pixelHeight:(unsigned long long)arg8 assetAdjustments:(id)arg9 duration:(double)arg10;
- (id)initWithPhoto:(id)arg1 mediaSubtypes:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 captureDate:(id)arg5 metadata:(id)arg6 burstIdentifier:(id)arg7 representedCount:(unsigned long long)arg8 fullsizeImageURL:(id)arg9 fullsizeUnadjustedImageURL:(id)arg10 assetAdjustments:(id)arg11 identifier:(id)arg12;
- (id)initWithLivePhoto:(id)arg1 fullsizeUnadjustedImageURL:(id)arg2 fullsizeUnadjustedVideoURL:(id)arg3 assetAdjustments:(id)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6 captureDate:(id)arg7 metadata:(id)arg8 duration:(double)arg9 previewImage:(id)arg10 identifier:(id)arg11;
- (id)initWithAVAsset:(id)arg1 audioMix:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 captureDate:(id)arg5 duration:(double)arg6 previewImage:(id)arg7 videoURL:(id)arg8 adjustments:(id)arg9 identifier:(id)arg10;
- (id)initWithAVAsset:(id)arg1 audioMix:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 captureDate:(id)arg5 duration:(double)arg6 previewImage:(id)arg7 videoURL:(id)arg8 unadjustedVideoURL:(id)arg9 adjustments:(id)arg10 identifier:(id)arg11;
- (id)_ensureLinkDestinationDirectoryFromBaseDirectory:(id)arg1;
- (id)_uniqueDestinationURLForFileURL:(id)arg1 inDirectory:(id)arg2;
- (_Bool)_linkFileAtURL:(id)arg1 toURL:(id)arg2;
- (void)removeAllFilesAtReferencedURLs;
- (void)_removeFileAtURL:(id)arg1;

@end
