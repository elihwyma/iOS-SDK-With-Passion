/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureMetadataOutputInternal, NSArray, NSObject, NSString;

@protocol AVCaptureMetadataOutputObjectsDelegate, OS_dispatch_queue;

@interface AVCaptureMetadataOutput : AVCaptureOutput

{
    AVCaptureMetadataOutputInternal *_internal;
}

@property (nonatomic, readonly) id <AVCaptureMetadataOutputObjectsDelegate> metadataObjectsDelegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *metadataObjectsCallbackQueue;
@property (nonatomic, readonly) NSArray *availableMetadataObjectTypes;
@property (copy, nonatomic) NSArray *metadataObjectTypes;
@property (nonatomic) struct CGRect rectOfInterest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id delegateOverride;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;

+ (void)initialize;
+ (id)new;
+ (id)_metadataConstantValueToName:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)connectionMediaTypes;
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque *)arg1;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation *)arg1;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;
- (id)_metadataIdentifiers;
- (long long)faceTrackingMaxFaces;
- (void)setFaceTrackingMaxFaces:(long long)arg1;
- (_Bool)isFaceTrackingUsesFaceRecognition;
- (void)setFaceTrackingUsesFaceRecognition:(_Bool)arg1;
- (void)_updateLocalQueue:(struct localQueueOpaque *)arg1;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage)arg1;
- (_Bool)isFaceTrackingSupported;
- (_Bool)isOfflineVideoStabilizationMotionMetadataSupported;
- (void)setMetadataObjectsDelegate:(id)arg1 queue:(id)arg2;
- (_Bool)isFaceTrackingMetadataObjectTypesAvailable;
- (void)setFaceTrackingMetadataObjectTypesAvailable:(_Bool)arg1;
- (_Bool)isOfflineVideoStabilizationMotionMetadataObjectTypesAvailable;
- (void)setOfflineVideoStabilizationMotionMetadataObjectTypesAvailable:(_Bool)arg1;

@end
