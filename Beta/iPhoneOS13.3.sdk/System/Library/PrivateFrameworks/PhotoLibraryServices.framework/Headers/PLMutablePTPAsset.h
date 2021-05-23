/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPTPAsset.h>

@class NSData, NSNumber, NSString, PLPTPAssetHandle;

@interface PLMutablePTPAsset : PLPTPAsset

@property (copy, nonatomic) NSData *event;
@property (copy, nonatomic) PLPTPAssetHandle *assetHandle;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *createdFilename;
@property (nonatomic, getter=isDeleted) _Bool deleted;
@property (copy, nonatomic) NSString *originalFilename;
@property (copy, nonatomic) NSString *fullDirectoryPath;
@property (nonatomic, getter=isExifAvailable) _Bool exifAvailable;
@property (copy, nonatomic) NSNumber *objectCompressedSize;
@property (copy, nonatomic) NSString *originatingAssetID;
@property (copy, nonatomic) NSNumber *thumbOffset;
@property (copy, nonatomic) NSNumber *thumbCompressedSize;
@property (nonatomic) struct CGSize imagePixSize;
@property (nonatomic) struct CGSize thumbPixSize;
@property (nonatomic) long long desiredOrientation;
@property (copy, nonatomic) NSString *modificationDateString;
@property (copy, nonatomic) NSString *captureDateString;
@property (copy, nonatomic) NSString *durationString;
@property (copy, nonatomic) NSString *locationString;
@property (copy, nonatomic) NSString *groupUUID;
@property (copy, nonatomic) NSString *spatialOverCaptureGroupIdentifier;
@property (copy, nonatomic) NSString *burstUUID;
@property (nonatomic, getter=isBurstPicked) _Bool burstPicked;
@property (nonatomic, getter=isBurstFavorite) _Bool burstFavorite;
@property (nonatomic, getter=isBurstFirstPicked) _Bool burstFirstPicked;
@property (nonatomic, getter=isHighFrameRateVideo) _Bool highFrameRateVideo;
@property (nonatomic, getter=isTimeLapseVideo) _Bool timeLapseVideo;
@property (copy, nonatomic) NSString *relatedUUID;
@property (nonatomic) long long conversionGroup;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
