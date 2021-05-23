/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSDate, NSString, NSURL, UIImage;

@interface CAMTransientAsset : NSObject

{
    _Bool _canPlayPhotoIris;
    _Bool _canPlayLoopingVideo;
    _Bool _isPhotoIrisPlaceholder;
    _Bool _HDR;
    _Bool _representsBurst;
    NSDate *_localCreationDate;
    NSString *_uuid;
    unsigned long long _mediaType;
    unsigned long long _mediaSubtypes;
    long long _playbackStyle;
    long long _playbackVariation;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    double _duration;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSURL *_persistenceURL;
    UIImage *_placeholderImage;
    NSString *_burstIdentifier;
    unsigned long long _numberOfRepresentedAssets;
    CDStruct_1b6d18a9 _photoIrisStillDisplayTime;
    CDStruct_1b6d18a9 _photoIrisVideoDuration;
}

@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackVariation;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, getter=isFavorite) _Bool favorite;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) _Bool isLivePhoto;
@property (nonatomic, readonly) _Bool canPlayPhotoIris;
@property (nonatomic, readonly) _Bool canPlayLoopingVideo;
@property (nonatomic, readonly) _Bool isPhotoIrisPlaceholder;
@property (nonatomic, readonly) CDStruct_1b6d18a9 photoIrisStillDisplayTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 photoIrisVideoDuration;
@property (nonatomic, readonly) _Bool hasPhotoColorAdjustments;
@property (copy, nonatomic, readonly) NSURL *persistenceURL;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly, getter=isHDR) _Bool HDR;
@property (nonatomic, readonly) _Bool representsBurst;
@property (copy, nonatomic, readonly) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *localCreationDate;
@property (nonatomic, readonly) _Bool isTemporaryPlaceholder;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) unsigned long long originalFilesize;
@property (nonatomic, readonly) _Bool isAnimatedImage;
@property (nonatomic, readonly, getter=isLivePhoto) _Bool livePhoto;
@property (nonatomic, readonly) unsigned long long deferredLogInfo;
@property (nonatomic, readonly) CDStruct_1b6d18a9 videoKeyFrameSourceTime;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUID:(id)arg1;
- (unsigned long long)isContentEqualTo:(id)arg1;
- (id)initWithAsset:(id)arg1 uuid:(id)arg2;
- (void)_populateStillImageTransientAssetFromConvertible:(id)arg1;
- (void)_populateVideoTransientAssetFromConvertible:(id)arg1;
- (id)initWithAsset:(id)arg1 convertible:(id)arg2;

@end
