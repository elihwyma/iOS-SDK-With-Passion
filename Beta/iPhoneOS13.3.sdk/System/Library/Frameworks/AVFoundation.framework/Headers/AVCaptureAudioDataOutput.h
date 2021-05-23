/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureAudioDataOutputInternal, NSDictionary, NSObject, NSString;

@protocol AVCaptureAudioDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface AVCaptureAudioDataOutput : AVCaptureOutput

{
    AVCaptureAudioDataOutputInternal *_internal;
}

@property (nonatomic, readonly) id <AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (copy, nonatomic) NSDictionary *audioSettings;
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
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)connectionMediaTypes;
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (id)supportedAssetWriterOutputFileTypes;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque *)arg1;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation *)arg1;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;
- (id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg1;

@end
