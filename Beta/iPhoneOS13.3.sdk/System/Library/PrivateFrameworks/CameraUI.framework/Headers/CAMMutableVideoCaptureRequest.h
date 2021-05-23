/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMVideoCaptureRequest.h>

@class CLHeading, CLLocation, NSString, NSURL;

@protocol CAMVideoCaptureRequestDelegate;

@interface CAMMutableVideoCaptureRequest : CAMVideoCaptureRequest

@property (nonatomic, getter=isTimelapse) _Bool timelapse;
@property (nonatomic) _Bool shouldGenerateVideoPreviewImage;
@property (nonatomic) double maximumRecordedDuration;
@property (nonatomic) long long maximumRecordedFileSize;
@property (nonatomic) long long remainingDiskUsageThreshold;
@property (weak, nonatomic) id <CAMVideoCaptureRequestDelegate> delegate;
@property (nonatomic) long long captureOrientation;
@property (nonatomic) long long captureDevice;
@property (nonatomic) long long captureMode;
@property (nonatomic) long long captureVideoConfiguration;
@property (nonatomic) long long pressType;
@property (nonatomic) long long torchMode;
@property (nonatomic) unsigned short sessionIdentifier;
@property (nonatomic) double userInitationTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long persistenceOptions;
@property (nonatomic) unsigned long long deferredPersistenceOptions;
@property (nonatomic) long long temporaryPersistenceOptions;
@property (copy, nonatomic) NSURL *localDestinationURL;
@property (copy, nonatomic) NSString *persistenceUUID;
@property (nonatomic) _Bool shouldExtractDiagnosticsFromMetadata;
@property (nonatomic) _Bool shouldPersistDiagnosticsToSidecar;
@property (nonatomic) _Bool shouldDelayRemotePersistence;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) CLHeading *heading;
@property (nonatomic) unsigned int assertionIdentifier;
@property (nonatomic) long long origin;
@property (nonatomic) long long videoEncodingBehavior;
@property (nonatomic) long long photoEncodingBehavior;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
