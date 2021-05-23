/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class AVAsset, CLLocation, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PUFilmstripAsset : NSObject <Swift>

{
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    _Bool __isSourceTimeAccurate;
    double _sourceTime;
    AVAsset *__asset;
    double __normalizedTime;
}

@property (nonatomic) double sourceTime;
@property (nonatomic, setter=_setAsset:) AVAsset *_asset;
@property (nonatomic, setter=_setNormalizedTime:) double _normalizedTime;
@property (nonatomic, setter=_setSourceTimeAccurate:) _Bool _isSourceTimeAccurate;
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

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)isContentEqualTo:(id)arg1;
- (id)initWithNormalizedTime:(double)arg1 asset:(id)arg2;
- (void)loadSourceTimeWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
