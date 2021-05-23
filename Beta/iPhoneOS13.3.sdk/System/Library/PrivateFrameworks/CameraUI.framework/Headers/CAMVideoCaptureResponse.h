/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureResponse.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface CAMVideoCaptureResponse : CAMCaptureResponse

{
    NSString *_persistenceUUID;
    NSURL *_localPersistenceURL;
    NSDate *_captureDate;
    long long _reason;
    double _videoZoomFactor;
    UIImage *_imageWellImage;
    UIImage *_previewImage;
    NSString *_stillPersistenceUUID;
    struct CGSize _finalExpectedPixelSize;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _stillDisplayTime;
}

@property (copy, nonatomic, readonly) NSString *persistenceUUID;
@property (copy, nonatomic, readonly) NSURL *localPersistenceURL;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) _Bool stoppedUnexpectedly;
@property (nonatomic, readonly) double videoZoomFactor;
@property (nonatomic, readonly) UIImage *imageWellImage;
@property (nonatomic, readonly) UIImage *previewImage;
@property (nonatomic, readonly) struct CGSize finalExpectedPixelSize;
@property (copy, nonatomic, readonly) NSString *stillPersistenceUUID;
@property (nonatomic, readonly) CDStruct_1b6d18a9 stillDisplayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (copy, nonatomic, readonly) NSURL *persistenceURL;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (copy, nonatomic, readonly) NSDictionary *stillImageMetadata;
@property (copy, nonatomic, readonly) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly, getter=isExpectingPairedVideo) _Bool expectingPairedVideo;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly) CDStruct_1b6d18a9 irisStillDisplayTime;

- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 captureDate:(id)arg4 duration:(CDStruct_1b6d18a9)arg5 stillPersistenceUUID:(id)arg6 stillDisplayTime:(CDStruct_1b6d18a9)arg7 reason:(long long)arg8 videoZoomFactor:(double)arg9 finalExpectedPixelSize:(struct CGSize)arg10 imageWellImage:(id)arg11 previewImage:(id)arg12 coordinationInfo:(id)arg13;

@end
