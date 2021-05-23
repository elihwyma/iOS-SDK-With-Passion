/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@class CLLocation, NSDate, NSString;

@protocol PUDisplayAsset <Swift>

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

- (unsigned short)isContentEqualTo: /* Error: Ran out of types for this method. */;

@end
