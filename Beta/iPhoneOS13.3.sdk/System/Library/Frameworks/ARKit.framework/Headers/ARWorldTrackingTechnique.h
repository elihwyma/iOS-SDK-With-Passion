/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARImageBasedTechnique.h>

@class ARTrackedRaycastPostProcessor, ARWorldTrackingErrorData, ARWorldTrackingOptions, ARWorldTrackingPoseData, NSHashTable, NSMutableSet, NSObject;

@protocol OS_dispatch_semaphore;

@interface ARWorldTrackingTechnique : ARImageBasedTechnique

{
    NSHashTable *_observers;
    NSObject<OS_dispatch_semaphore> *_observersSemaphore;
    struct map<CV3DVIOError, double, std::__1::less<CV3DVIOError>, std::__1::allocator<std::__1::pair<const CV3DVIOError, double>>> _lastErrorLogTimestamp;
    _Bool _useFixedIntrinsics;
    long long _vioHandleState;
    NSObject<OS_dispatch_semaphore> *_vioHandleStateSemaphore;
    NSObject<OS_dispatch_semaphore> *_vioObjectDetectionSemaphore;
    ARWorldTrackingErrorData *_errorData;
    ARWorldTrackingPoseData *_cachedPoseData;
    double _lastPoseMetaDataTimestamp;
    long long _reinitializationAttempts;
    long long _reinitializationAttemptsAtInitialization;
    double _lastRelocalizationTimestamp;
    double _lastQualityKeyframeTimestamp;
    int _previousKeyframeCount;
    double _lastPoseTrackingMapTimestamp;
    double _lastMajorRelocalizationTimestamp;
    double _originTimestamp;
    _Bool _relocalizingAfterSensorDataDrop;
    _Bool _didClearMap;
    _Bool _hasQualityKeyframe;
    NSObject<OS_dispatch_semaphore> *_resultSemaphore;
    double _minVergenceAngleCosine;
    double _resultLatency;
    _Bool _allowPoseGraphUpdates;
    struct CV3DSurfaceDetectionParameters _surfaceDetectionParameters;
    struct CV3DVIOSurfaceDetectionRuntimeConfiguration _surfaceDetectionConfiguration;
    struct CV3DMLModel *_mlModel;
    NSMutableSet *_anchorsReceived;
    NSMutableSet *_participantAnchors;
    _Bool _participantAnchorsEnabled;
    ARWorldTrackingOptions *_mutableOptions;
    struct CV3DVIOContext *_vioHandle;
    unsigned long long _vioSessionIdentifier;
    ARTrackedRaycastPostProcessor *_trackedRaycastPostProcessor;
    CDStruct_14d5dc5e _referenceOriginTransform;
}

@property (retain) ARWorldTrackingOptions *mutableOptions;
@property CDStruct_14d5dc5e referenceOriginTransform;
@property (nonatomic) struct CV3DVIOContext *vioHandle;
@property (readonly) unsigned long long vioSessionIdentifier;
@property (retain) ARTrackedRaycastPostProcessor *trackedRaycastPostProcessor;
@property (copy, nonatomic, readonly) ARWorldTrackingOptions *options;

+ (_Bool)isSupported;
+ (_Bool)supportsVideoResolution:(struct CGSize)arg1 forDeviceType:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id).cxx_construct;
- (void)prepare;
- (id)processData:(id)arg1;
- (void)_didFailWithError:(id)arg1;
- (void)pushCollaborationData:(id)arg1;
- (void)invalidateAllRaycasts;
- (void)stopRaycast:(id)arg1;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (_Bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (void)prepareResultData:(id)arg1 forContext:(id)arg2;
- (long long)captureBehavior;
- (_Bool)deterministicMode;
- (id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)mergeResultData:(id)arg1 intoData:(id)arg2 context:(id)arg3;
- (long long)vioHandleState;
- (void)initializeSceneUnderstandingIfNeeded;
- (id)getObservers;
- (long long)_initializeVIOHandle;
- (void)_initializeSurfaceDetection;
- (void)hitTestIntent:(struct CV3DHitTestIntent *)arg1 forRay:(id)arg2 isTracked:(_Bool)arg3;
- (id)raycastResultsFrom:(struct CV3DHitTestResults *)arg1 forRay:(id)arg2;
- (id)raycastResultFrom:(struct CV3DHitTestResult *)arg1;
- (void)_updatePoseDataTrackingState:(id)arg1 vioTrackingState:(int)arg2 stateDetails:(id)arg3;
- (void)_reportCollaborationData:(id)arg1 type:(int)arg2 metadata:(const void *)arg3;
- (long long)_mappingStatusFromStateDetails:(id)arg1 timestamp:(double)arg2;
- (id)_featurePointDataFromDictionary:(id)arg1;
- (CDStruct_14d5dc5e)cameraTransformAtTimestamp:(double)arg1;
- (id)serializeMapData:(_Bool)arg1;
- (void)clearMap;
- (id)serializeSurfaceData;
- (void)loadSurfaceData:(id)arg1;
- (void)addReferenceAnchors:(id)arg1;
- (void)removeReferenceAnchors:(id)arg1;
- (id)raycast:(id)arg1;
- (id)trackedRaycast:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (void)stopAllRaycasts;
- (void)didUpdateRaycastResult:(struct CV3DHitTestResults *)arg1;
- (void)_updatePose:(double)arg1 frame:(struct __CVBuffer *)arg2 rotationMatrix:(const double *)arg3 translationVector:(const double *)arg4 trackingState:(int)arg5 stateDetails:(id)arg6;
- (void)_reportError:(double)arg1 error:(int)arg2;

@end
