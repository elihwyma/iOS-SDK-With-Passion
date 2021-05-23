/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/Swift-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@protocol CAMTransientAssetConvertible <Swift>

@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (copy, nonatomic, readonly) NSURL *persistenceURL;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) struct CGSize finalExpectedPixelSize;
@property (copy, nonatomic, readonly) NSDictionary *stillImageMetadata;
@property (copy, nonatomic, readonly) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly, getter=isExpectingPairedVideo) _Bool expectingPairedVideo;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly) CDStruct_1b6d18a9 irisStillDisplayTime;

@end
