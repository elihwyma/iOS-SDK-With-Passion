/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSNumber, NSString, PLSpatialOverCaptureInformation;

@protocol PLPTPTransferableAdditionalAssetAttributes <Swift>

@property (copy, nonatomic, readonly) NSString *originatingAssetIdentifier;
@property (retain, nonatomic, readonly) NSNumber *embeddedThumbnailHeight;
@property (retain, nonatomic, readonly) NSNumber *embeddedThumbnailLength;
@property (retain, nonatomic, readonly) NSNumber *embeddedThumbnailOffset;
@property (retain, nonatomic, readonly) NSNumber *embeddedThumbnailWidth;
@property (retain, nonatomic, readonly) NSString *exifTimestampString;
@property (nonatomic, readonly) long long ptpTrashedState;
@property (retain, nonatomic, readonly) PLSpatialOverCaptureInformation *spatialOverCaptureInformation;

@end
