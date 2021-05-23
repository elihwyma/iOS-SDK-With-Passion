/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureDepthDataOutputInternal, NSObject, NSString;

@protocol AVCaptureDepthDataOutputDelegate, OS_dispatch_queue;

@interface AVCaptureDepthDataOutput : AVCaptureOutput

{
    AVCaptureDepthDataOutputInternal *_internal;
}

@property (nonatomic, readonly) id <AVCaptureDepthDataOutputDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (nonatomic) _Bool alwaysDiscardsLateDepthData;
@property (nonatomic, getter=isFilteringEnabled) _Bool filteringEnabled;
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
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeConnection:(id)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)connectionMediaTypes;
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque *)arg1;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation *)arg1;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;
- (_Bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (_Bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (void)_updateLocalQueue:(struct localQueueOpaque *)arg1;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage)arg1;
- (void)setDelegate:(id)arg1 callbackQueue:(id)arg2;

@end
