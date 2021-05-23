/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSData, NSNumber, NSString, PLPTPAssetHandle;

@interface PLPTPAsset : NSObject <Swift>

{
    NSData *_event;
    PLPTPAssetHandle *_assetHandle;
    NSString *_filename;
    NSString *_createdFilename;
    _Bool _deleted;
    NSString *_originalFilename;
    NSString *_fullDirectoryPath;
    _Bool _exifAvailable;
    NSNumber *_objectCompressedSize;
    NSString *_originatingAssetID;
    NSNumber *_thumbOffset;
    NSNumber *_thumbCompressedSize;
    struct CGSize _imagePixSize;
    struct CGSize _thumbPixSize;
    long long _desiredOrientation;
    NSString *_modificationDateString;
    NSString *_captureDateString;
    NSString *_durationString;
    NSString *_locationString;
    NSString *_groupUUID;
    NSString *_burstUUID;
    _Bool _burstPicked;
    _Bool _burstFavorite;
    _Bool _burstFirstPicked;
    _Bool _highFrameRateVideo;
    _Bool _timeLapseVideo;
    NSString *_relatedUUID;
    NSString *_spatialOverCaptureGroupIdentifier;
    long long _conversionGroup;
}

@property (copy, nonatomic, readonly) PLPTPAssetHandle *assetHandle;
@property (copy, nonatomic, readonly) NSString *cacheKey;
@property (copy, nonatomic, readonly) NSString *filename;
@property (copy, nonatomic, readonly) NSString *createdFilename;
@property (nonatomic, readonly, getter=isDeleted) _Bool deleted;
@property (copy, nonatomic, readonly) NSString *originalFilename;
@property (copy, nonatomic, readonly) NSString *fullDirectoryPath;
@property (nonatomic, readonly, getter=isExifAvailable) _Bool exifAvailable;
@property (copy, nonatomic, readonly) NSNumber *objectCompressedSize;
@property (copy, nonatomic, readonly) NSString *originatingAssetID;
@property (copy, nonatomic, readonly) NSNumber *thumbOffset;
@property (copy, nonatomic, readonly) NSNumber *thumbCompressedSize;
@property (nonatomic, readonly) struct CGSize imagePixSize;
@property (nonatomic, readonly) struct CGSize thumbPixSize;
@property (nonatomic, readonly) long long desiredOrientation;
@property (copy, nonatomic, readonly) NSString *modificationDateString;
@property (copy, nonatomic, readonly) NSString *captureDateString;
@property (copy, nonatomic, readonly) NSString *durationString;
@property (copy, nonatomic, readonly) NSString *locationString;
@property (copy, nonatomic, readonly) NSString *groupUUID;
@property (copy, nonatomic, readonly) NSString *spatialOverCaptureGroupIdentifier;
@property (copy, nonatomic, readonly) NSString *burstUUID;
@property (nonatomic, readonly, getter=isBurstPicked) _Bool burstPicked;
@property (nonatomic, readonly, getter=isBurstFavorite) _Bool burstFavorite;
@property (nonatomic, readonly, getter=isBurstFirstPicked) _Bool burstFirstPicked;
@property (nonatomic, readonly, getter=isHighFrameRateVideo) _Bool highFrameRateVideo;
@property (nonatomic, readonly, getter=isTimeLapseVideo) _Bool timeLapseVideo;
@property (copy, nonatomic, readonly) NSString *relatedUUID;
@property (nonatomic, readonly) long long conversionGroup;
@property (copy, nonatomic, readonly) NSData *event;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (id)initWithPTPAsset:(id)arg1;

@end
