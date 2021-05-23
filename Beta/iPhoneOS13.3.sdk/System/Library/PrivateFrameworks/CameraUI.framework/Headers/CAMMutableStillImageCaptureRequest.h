/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMStillImageCaptureRequest.h>

@class CLHeading, CLLocation, NSArray, NSString, NSURL;

@protocol CAMStillImageCaptureRequestDelegate;

@interface CAMMutableStillImageCaptureRequest : CAMStillImageCaptureRequest

@property (copy, nonatomic) NSString *EV0PersistenceUUID;
@property (copy, nonatomic) NSString *timelapseIdentifier;
@property (nonatomic) long long effectFilterType;
@property (nonatomic) long long lightingEffectType;
@property (nonatomic) long long aspectRatioCrop;
@property (copy, nonatomic) NSString *burstIdentifier;
@property (nonatomic) unsigned long long maximumBurstLength;
@property (nonatomic) long long captureOrientation;
@property (nonatomic) long long captureDevice;
@property (nonatomic) long long captureMode;
@property (nonatomic) long long pressType;
@property (nonatomic) long long flashMode;
@property (nonatomic) long long hdrMode;
@property (nonatomic) long long irisMode;
@property (nonatomic) long long ctmCaptureType;
@property (nonatomic) _Bool wantsSpatialOverCapture;
@property (nonatomic) long long lowLightMode;
@property (nonatomic) _Bool wantsPortraitEffect;
@property (retain, nonatomic) NSArray *adjustmentFilters;
@property (retain, nonatomic) NSArray *originalFilters;
@property (nonatomic) long long photoQualityPrioritization;
@property (nonatomic) _Bool wantsAutoDualCameraFusion;
@property (nonatomic) _Bool wantsAudioForCapture;
@property (nonatomic) _Bool wantsSquareCrop;
@property (nonatomic) _Bool wantsHighResolutionStills;
@property (nonatomic) _Bool stillDuringVideo;
@property (nonatomic) struct CGSize desiredPreviewSize;
@property (copy, nonatomic) NSString *irisIdentifier;
@property (copy, nonatomic) NSURL *localVideoDestinationURL;
@property (copy, nonatomic) NSURL *localCTMVideoDestinationURL;
@property (copy, nonatomic) NSURL *localSpatialOverCaptureVideoDestinationURL;
@property (copy, nonatomic) NSURL *localCTMSpatialOverCaptureVideoDestinationURL;
@property (copy, nonatomic) NSString *videoPersistenceUUID;
@property (copy, nonatomic) NSString *EV0IrisIdentifier;
@property (copy, nonatomic) NSURL *EV0LocalVideoDestinationURL;
@property (copy, nonatomic) NSURL *EV0LocalSpatialOverCaptureVideoDestinationURL;
@property (copy, nonatomic) NSString *EV0VideoPersistenceUUID;
@property (nonatomic) unsigned short sessionIdentifier;
@property (nonatomic) unsigned long long userInitiationTime;
@property (nonatomic) double loggingVideoZoomFactor;
@property (nonatomic) long long loggingZoomInteractionType;
@property (weak, nonatomic) id <CAMStillImageCaptureRequestDelegate> delegate;
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
- (void)setAspectRatio:(long long)arg1;
- (void)setCapturedFromPhotoBooth:(_Bool)arg1;

@end
