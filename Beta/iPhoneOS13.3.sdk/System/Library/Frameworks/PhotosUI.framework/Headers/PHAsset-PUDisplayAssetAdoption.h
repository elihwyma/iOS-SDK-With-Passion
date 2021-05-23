/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Photos/PHAsset.h>

@class CLLocation, NSDate, NSDictionary, NSString, PFVideoAVObjectBuilder;

@interface PHAsset (PUDisplayAssetAdoption)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackVariation;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, getter=isFavorite) _Bool favorite;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *localCreationDate;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) _Bool isTemporaryPlaceholder;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) unsigned long long originalFilesize;
@property (nonatomic, readonly) _Bool isAnimatedImage;
@property (nonatomic, readonly, getter=isLivePhoto) _Bool livePhoto;
@property (nonatomic, readonly) _Bool canPlayPhotoIris;
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

+ (long long)_pu_mediaTypeForAssets:(id)arg1;
+ (id)pu_typeStringForMediaType:(long long)arg1;
+ (id)pu_typeStringForAssets:(id)arg1;
+ (long long)pu_commonMediaTypeForPhotoCount:(long long)arg1 videoCount:(long long)arg2 otherCount:(long long)arg3;

- (unsigned long long)isContentEqualTo:(id)arg1;

@end
