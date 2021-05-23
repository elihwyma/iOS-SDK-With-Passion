/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSData, NSDate, NSString, PHAsset, PHMomentShare, UIImage;

@interface PXCMMPreviewAsset : NSObject <Swift>

{
    UIImage *_cachedImage;
    PHMomentShare *_momentShare;
    PHAsset *_underlyingAsset;
}

@property (nonatomic, readonly) PHMomentShare *momentShare;
@property (nonatomic, readonly) PHAsset *underlyingAsset;
@property (nonatomic, readonly) _Bool isPreviewImageDataAvailable;
@property (nonatomic, readonly) NSData *previewImageData;
@property (nonatomic, readonly) UIImage *previewImage;
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

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)size;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (long long)isContentEqualTo:(id)arg1;
- (id)initWithMomentShare:(id)arg1 underlyingAsset:(id)arg2;

@end
