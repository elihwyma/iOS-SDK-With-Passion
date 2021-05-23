/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCapturePhotoSettings, AVMomentCaptureSettings, AVWeakReference, NSArray, NSDictionary, NSMutableArray, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCapturePhotoOutputInternal : NSObject

{
    AVWeakReference *weakReference;
    long long lastSettingsUniqueID;
    NSArray *availablePhotoPixelFormatTypes;
    NSArray *availablePhotoCodecTypes;
    NSArray *availableRawPhotoPixelFormatTypes;
    NSArray *availablePhotoFileTypes;
    NSArray *availableRawPhotoFileTypes;
    long long maxPhotoQualityPrioritization;
    _Bool maxPhotoQualityPrioritizationHasBeenSetByClient;
    _Bool stillImageStabilizationSupported;
    _Bool virtualDeviceFusionSupported;
    _Bool virtualDeviceConstituentPhotoDeliverySupported;
    _Bool virtualDeviceConstituentPhotoDeliveryEnabled;
    _Bool dualCameraDualPhotoDeliverySupported;
    _Bool dualCameraDualPhotoDeliveryEnabled;
    _Bool cameraCalibrationDataDeliverySupported;
    NSArray *supportedHDRModes;
    NSArray *supportedFlashModes;
    NSArray *supportedDigitalFlashModes;
    _Bool digitalFlashCaptureEnabled;
    _Bool autoRedEyeReductionSupported;
    _Bool highResolutionCaptureEnabled;
    unsigned long long maxBracketedCapturePhotoCount;
    _Bool lensStabilizationDuringBracketedCaptureSupported;
    _Bool livePhotoCaptureSupported;
    _Bool livePhotoCaptureEnabled;
    _Bool livePhotoAutoTrimmingEnabled;
    NSArray *availableLivePhotoVideoCodecTypes;
    CDStruct_1b6d18a9 livePhotoMovieDuration;
    CDStruct_1b6d18a9 livePhotoMovieVideoFrameDuration;
    CDStruct_79c71658 livePhotoMovieDimensions;
    _Bool livePhotoCaptureSuspended;
    _Bool depthDataDeliverySupported;
    _Bool depthDataDeliveryEnabled;
    _Bool portraitEffectsMatteDeliverySupported;
    _Bool portraitEffectsMatteDeliveryEnabled;
    NSArray *availableSemanticSegmentationTypes;
    NSArray *enabledSemanticSegmentationTypes;
    _Bool filterRenderingEnabled;
    _Bool imageOptimizationForOfflineVideoStabilizationSupported;
    _Bool optimizesImagesForOfflineVideoStabilization;
    CDStruct_79c71658 optimizedImageDimensionsForOfflineStabilization;
    _Bool livePhotoMovieProcessingSuspended;
    _Bool videoCaptureSupported;
    _Bool videoCaptureEnabled;
    _Bool resumeLivePhotoMovieCaptureAfterVideoCaptureEnds;
    NSObject<OS_dispatch_queue> *sceneDetectionObserversDispatchQueue;
    int flashSceneObserverCount;
    int HDRSceneObserverCount;
    int stillImageStabilizationSceneObserverCount;
    _Bool isFlashScene;
    _Bool isHDRScene;
    _Bool isStillImageStabilizationScene;
    int digitalFlashStatusObserverCount;
    long long digitalFlashStatus;
    int digitalFlashExposureTimesObserverCount;
    NSDictionary *digitalFlashExposureTimes;
    AVCapturePhotoSettings *photoSettingsForSceneMonitoring;
    struct OpaqueFigSimpleMutex *requestsLock;
    NSMutableArray *photoRequests;
    NSMutableArray *prepareRequests;
    NSMutableArray *movieRequests;
    NSObject<OS_dispatch_queue> *beginEndIrisMovieCaptureHostTimeQueue;
    NSObject<OS_dispatch_group> *beginEndIrisMovieCaptureHostTimeDispatchGroup;
    NSString *sourceDeviceType;
    struct ct_green_tea_logger_s *greenTeaLogger;
    _Bool movieRecordingSupported;
    _Bool movieRecordingEnabled;
    AVMomentCaptureSettings *momentCaptureInFlight;
    long long lastMomentSettingsUniqueID;
    _Bool deferredProcessingSupported;
    _Bool deferredProcessingEnabled;
    _Bool processedPhotoZoomWithoutUpscalingSupported;
}

@end
