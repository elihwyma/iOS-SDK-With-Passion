/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class CLLocation, NSDate, NSString, NSURL, PXFileBackedAssetDescription, _PXFileBackedAssetMetadata;

@interface PXFileBackedAsset : NSObject <Swift>

{
    _PXFileBackedAssetMetadata *_metadata;
    PXFileBackedAssetDescription *_description;
    NSString *_fileBackedUUID;
    NSURL *_url;
    NSString *_uniformTypeIdentifier;
}

@property (copy, nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) _Bool isAnimatedImage;
@property (nonatomic, readonly) _Bool canPlayPhotoIris;
@property (nonatomic, readonly) _Bool canPlayLoopingVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long thumbnailIndex;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *localCreationDate;
@property (nonatomic, readonly, getter=isFavorite) _Bool favorite;
@property (nonatomic, readonly) _Bool representsBurst;
@property (nonatomic, readonly) _Bool isInCloud;
@property (nonatomic, readonly) _Bool isEligibleForAutoPlayback;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) Class defaultImageProviderClass;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackVariation;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) unsigned long long thumbnailVersion;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) float hdrGain;
@property (nonatomic, readonly) unsigned long long burstSelectionTypes;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) NSDate *importDate;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double weight;
@property (nonatomic, readonly) struct CGAffineTransform transform;
@property (nonatomic, readonly) struct CGPoint positionOffset;
@property (nonatomic, readonly) struct CGRect preferredCropRect;
@property (nonatomic, readonly) struct CGRect acceptableCropRect;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) _Bool cloudIsDeletable;

+ (id)_locationFromImageProperties:(id)arg1;
+ (id)_creationDateFromImageProperties:(id)arg1;
+ (id)_globalCache;
+ (id)_exifDateFormatter;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithDescription:(id)arg1;
- (double)weightUsingCriterion:(long long)arg1;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;
- (long long)isContentEqualTo:(id)arg1;
- (_Bool)isEqualToFileBackedAsset:(id)arg1;
- (void)_loadFileMetadataIfNeeded;

@end
