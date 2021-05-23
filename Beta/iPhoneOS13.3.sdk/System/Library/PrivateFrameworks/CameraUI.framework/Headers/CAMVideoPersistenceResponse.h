/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMPersistenceResponse.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface CAMVideoPersistenceResponse : CAMPersistenceResponse

{
    NSString *_stillPersistenceUUID;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _stillDisplayTime;
}

@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
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
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) struct CGSize finalExpectedPixelSize;
@property (copy, nonatomic, readonly) NSDictionary *stillImageMetadata;
@property (copy, nonatomic, readonly) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly, getter=isExpectingPairedVideo) _Bool expectingPairedVideo;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly) CDStruct_1b6d18a9 irisStillDisplayTime;

- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scrubberImage:(id)arg5 finalExpectedPixelSize:(struct CGSize)arg6 duration:(CDStruct_1b6d18a9)arg7 stillPersistenceUUID:(id)arg8 stillDisplayTime:(CDStruct_1b6d18a9)arg9 coordinationInfo:(id)arg10;

@end
