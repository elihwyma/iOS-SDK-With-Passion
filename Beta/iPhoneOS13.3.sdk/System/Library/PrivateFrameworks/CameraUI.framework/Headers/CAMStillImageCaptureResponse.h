/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureResponse.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface CAMStillImageCaptureResponse : CAMCaptureResponse

{
    _Bool _expectingPairedVideo;
    NSString *_persistenceUUID;
    NSDate *_captureDate;
    NSDictionary *_metadata;
    NSString *_burstIdentifier;
    unsigned long long _burstRepresentedCount;
    UIImage *_imageWellImage;
    struct CGSize _finalExpectedPixelSize;
}

@property (copy, nonatomic, readonly) NSString *persistenceUUID;
@property (nonatomic, readonly) NSDate *captureDate;
@property (copy, nonatomic, readonly) NSDictionary *metadata;
@property (copy, nonatomic, readonly) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned long long burstRepresentedCount;
@property (nonatomic, readonly) UIImage *imageWellImage;
@property (nonatomic, readonly) _Bool flashFired;
@property (nonatomic, readonly, getter=isExpectingPairedVideo) _Bool expectingPairedVideo;
@property (nonatomic, readonly) struct CGSize finalExpectedPixelSize;
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
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly) CDStruct_1b6d18a9 irisStillDisplayTime;

- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 captureDate:(id)arg3 metadata:(id)arg4 burstIdentifier:(id)arg5 burstRepresentedCount:(unsigned long long)arg6 imageWellImage:(id)arg7 coordinationInfo:(id)arg8 finalExpectedPixelSize:(struct CGSize)arg9 expectingPairedVideo:(_Bool)arg10;

@end
