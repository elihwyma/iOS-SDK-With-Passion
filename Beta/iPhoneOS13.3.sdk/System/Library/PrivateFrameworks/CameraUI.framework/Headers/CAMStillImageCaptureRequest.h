/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureRequest.h>

#import <CameraUI/Swift-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol CAMStillImageCaptureRequestDelegate;

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <Swift>

{
    NSString *_EV0PersistenceUUID;
    NSString *_timelapseIdentifier;
    long long _effectFilterType;
    long long _lightingEffectType;
    long long _aspectRatioCrop;
    unsigned long long _maximumBurstLength;
    long long _flashMode;
    long long _hdrMode;
    long long _irisMode;
    long long _ctmCaptureType;
    _Bool _wantsSpatialOverCapture;
    _Bool _wantsPortraitEffect;
    NSArray *_adjustmentFilters;
    NSArray *_originalFilters;
    long long _photoQualityPrioritization;
    _Bool _wantsAutoDualCameraFusion;
    _Bool _wantsAudioForCapture;
    _Bool _wantsSquareCrop;
    long long _lowLightMode;
    long long _aspectRatio;
    _Bool _wantsHighResolutionStills;
    _Bool _stillDuringVideo;
    struct CGSize _desiredPreviewSize;
    NSString *_burstIdentifier;
    NSString *_irisIdentifier;
    NSURL *_localVideoDestinationURL;
    NSURL *_localCTMVideoDestinationURL;
    NSURL *_localSpatialOverCaptureVideoDestinationURL;
    NSURL *_localCTMSpatialOverCaptureVideoDestinationURL;
    NSString *_videoPersistenceUUID;
    NSString *_EV0IrisIdentifier;
    NSURL *_EV0LocalVideoDestinationURL;
    NSURL *_EV0LocalSpatialOverCaptureVideoDestinationURL;
    NSString *_EV0VideoPersistenceUUID;
    unsigned long long _userInitiationTime;
    double _loggingVideoZoomFactor;
    long long _loggingZoomInteractionType;
    id <CAMStillImageCaptureRequestDelegate> _delegate;
}

@property (copy, nonatomic, readonly) NSString *EV0PersistenceUUID;
@property (copy, nonatomic, readonly) NSString *timelapseIdentifier;
@property (nonatomic, readonly) long long effectFilterType;
@property (nonatomic, readonly) long long lightingEffectType;
@property (nonatomic, readonly) long long aspectRatioCrop;
@property (nonatomic, readonly) unsigned long long maximumBurstLength;
@property (nonatomic, readonly) long long flashMode;
@property (nonatomic, readonly) long long hdrMode;
@property (nonatomic, readonly) long long irisMode;
@property (nonatomic, readonly) _Bool wantsPortraitEffect;
@property (nonatomic, readonly) NSArray *adjustmentFilters;
@property (nonatomic, readonly) NSArray *originalFilters;
@property (nonatomic, readonly) long long photoQualityPrioritization;
@property (nonatomic, readonly) _Bool wantsAutoDualCameraFusion;
@property (nonatomic, readonly) _Bool wantsAudioForCapture;
@property (nonatomic, readonly) _Bool wantsSquareCrop;
@property (nonatomic, readonly) _Bool wantsHighResolutionStills;
@property (nonatomic, readonly) _Bool stillDuringVideo;
@property (nonatomic, readonly) long long ctmCaptureType;
@property (nonatomic, readonly, getter=isCTMVideo) _Bool CTMVideo;
@property (nonatomic, readonly) _Bool wantsSpatialOverCapture;
@property (nonatomic, readonly) long long lowLightMode;
@property (nonatomic, readonly) struct CGSize desiredPreviewSize;
@property (copy, nonatomic, readonly) NSString *burstIdentifier;
@property (copy, nonatomic, readonly) NSString *irisIdentifier;
@property (copy, nonatomic, readonly) NSURL *localVideoDestinationURL;
@property (copy, nonatomic, readonly) NSURL *localCTMVideoDestinationURL;
@property (copy, nonatomic, readonly) NSURL *localSpatialOverCaptureVideoDestinationURL;
@property (copy, nonatomic, readonly) NSURL *localCTMSpatialOverCaptureVideoDestinationURL;
@property (copy, nonatomic, readonly) NSString *videoPersistenceUUID;
@property (copy, nonatomic, readonly) NSString *EV0IrisIdentifier;
@property (copy, nonatomic, readonly) NSURL *EV0LocalVideoDestinationURL;
@property (copy, nonatomic, readonly) NSURL *EV0LocalSpatialOverCaptureVideoDestinationURL;
@property (copy, nonatomic, readonly) NSString *EV0VideoPersistenceUUID;
@property (nonatomic, readonly) unsigned long long userInitiationTime;
@property (nonatomic, readonly) double loggingVideoZoomFactor;
@property (nonatomic, readonly) long long loggingZoomInteractionType;
@property (weak, nonatomic, readonly) id <CAMStillImageCaptureRequestDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasAdjustments;
- (id)captureRequest;
- (id)initWithRequest:(id)arg1 distinctPersistence:(_Bool)arg2;
- (id)irisStillImagePersistenceUUIDForEV0:(_Bool)arg1;
- (id)irisVideoPersistenceUUIDForEV0:(_Bool)arg1;
- (_Bool)shouldProtectPersistenceForVideo;
- (_Bool)isEV0LocalVideoDestinationURL:(id)arg1;
- (id)irisIdentifierForEV0:(_Bool)arg1;
- (id)irisLocalVideoDestinationURLForEV0:(_Bool)arg1;
- (id)irisLocalSpatialOverCaptureVideoDestinationForEV0:(_Bool)arg1;
- (_Bool)isLocalSpatialOverCaptureVideoDestinationURL:(id)arg1;

@end
