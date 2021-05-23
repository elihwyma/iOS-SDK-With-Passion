/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <AssetExplorer/Swift-Protocol.h>

@class AVAsset, AVAudioMix, CLLocation, NSDate, NSDictionary, NSString, NSURL, PFAssetAdjustments, PHLivePhoto, UIImage;

@protocol PUCAMReviewAsset <Swift>

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
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly, getter=isFavorite) _Bool favorite;
@property (nonatomic, readonly, getter=isHDR) _Bool HDR;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, getter=isLivePhoto) _Bool livePhoto;
@property (nonatomic, readonly, getter=isLivePhotoPlaceholder) _Bool livePhotoPlaceholder;
@property (nonatomic, readonly) struct livePhotoSynchronizedDisplayTime;
@property (nonatomic, readonly) struct livePhotoDuration;
@property (copy, nonatomic, readonly) NSString *burstIdentifier;
@property (nonatomic, readonly) _Bool representsBurst;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly) UIImage *providedPreviewImage;
@property (nonatomic, readonly) NSDictionary *providedImageMetadata;
@property (nonatomic, readonly) NSURL *providedFullsizeImageURL;
@property (nonatomic, readonly) NSURL *providedFullsizeRenderImageURL;
@property (nonatomic, readonly) PHLivePhoto *providedLivePhoto;
@property (nonatomic, readonly) AVAsset *providedAVAsset;
@property (nonatomic, readonly) AVAudioMix *providedAudioMix;
@property (nonatomic, readonly) NSURL *providedVideoURL;
@property (nonatomic, readonly) NSURL *providedFullsizeRenderVideoURL;
@property (nonatomic, readonly) PFAssetAdjustments *assetAdjustments;

@end
