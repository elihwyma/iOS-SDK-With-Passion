/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureVisionDataOutputInternal, NSObject, NSString;

@protocol AVCaptureVisionDataOutputDelegate, OS_dispatch_queue;

@interface AVCaptureVisionDataOutput : AVCaptureOutput

{
    AVCaptureVisionDataOutputInternal *_internal;
}

@property (nonatomic, readonly) id <AVCaptureVisionDataOutputDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (nonatomic) CDStruct_1b6d18a9 minFrameDuration;
@property (nonatomic) CDStruct_1b6d18a9 minBurstFrameDuration;
@property (nonatomic) CDStruct_1b6d18a9 maxBurstDuration;
@property (nonatomic) unsigned long long gaussianPyramidOctavesCount;
@property (nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor;
@property (nonatomic) unsigned long long maxKeypointsCount;
@property (nonatomic, getter=isFeatureBinningEnabled) _Bool featureBinningEnabled;
@property (nonatomic, getter=isFeatureOrientationAssignmentEnabled) _Bool featureOrientationAssignmentEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id delegateOverride;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;

+ (void)initialize;
+ (id)new;

- (id)init;
- (void)dealloc;
- (void)removeConnection:(id)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)connectionMediaTypes;
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque *)arg1;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation *)arg1;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;
- (float)keypointDetectionThreshold;
- (void)setKeypointDetectionThreshold:(float)arg1;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (_Bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (_Bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (void)_updateLocalQueue:(struct localQueueOpaque *)arg1;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage)arg1;
- (void)setDelegate:(id)arg1 callbackQueue:(id)arg2;
- (void)_initializeClientVisiblePropertiesForSourceDevice:(id)arg1;
- (void)triggerBurst;

@end
