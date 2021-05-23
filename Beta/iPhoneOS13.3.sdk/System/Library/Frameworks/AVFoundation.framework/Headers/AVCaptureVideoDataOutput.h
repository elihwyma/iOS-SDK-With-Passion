/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureVideoDataOutputInternal, NSArray, NSDictionary, NSObject, NSString;

@protocol AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface AVCaptureVideoDataOutput : AVCaptureOutput

{
    AVCaptureVideoDataOutputInternal *_internal;
}

@property (nonatomic, readonly) id <AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (copy, nonatomic) NSDictionary *videoSettings;
@property (nonatomic, readonly) NSArray *availableVideoCVPixelFormatTypes;
@property (nonatomic, readonly) NSArray *availableVideoCodecTypes;
@property (nonatomic) CDStruct_1b6d18a9 minFrameDuration;
@property (nonatomic) _Bool alwaysDiscardsLateVideoFrames;
@property (nonatomic) _Bool automaticallyConfiguresOutputBufferDimensions;
@property (nonatomic) _Bool deliversPreviewSizedOutputBuffers;
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
- (int)outputFormat;
- (void)removeConnection:(id)arg1;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)connectionMediaTypes;
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (id)supportedAssetWriterOutputFileTypes;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque *)arg1;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation *)arg1;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;
- (_Bool)updateVideoSettingsForConnection:(id)arg1;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (struct CGSize)outputSizeForSourceFormat:(id)arg1;
- (_Bool)hasRequiredOutputFormatForConnection:(id)arg1;
- (_Bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (_Bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (unsigned int)requiredOutputFormatForConnection:(id)arg1;
- (void)_updateDeliversPreviewSizedOutputBuffersForConnection:(id)arg1 sessionPreset:(id)arg2;
- (id)vettedVideoSettingsForSettingsDictionary:(id)arg1 connection:(id)arg2;
- (id)outputScalingModeForSourceFormat:(id)arg1;
- (id)supportedVideoSettingsKeys;
- (id)fullyPopulatedVideoSettingsForSettingsDictionary:(id)arg1 connection:(id)arg2;
- (void)_setMinFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)_updateAvailableVideoCVPixelFormatTypesForConnection:(id)arg1;
- (void)_updateLocalQueue:(struct localQueueOpaque *)arg1;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage)arg1;
- (_Bool)isVideoSettingsDimensionsOverrideEnabled;
- (void)setVideoSettingsDimensionsOverrideEnabled:(_Bool)arg1;
- (id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (id)availableVideoCodecTypesForAssetWriterWithOutputFileType:(id)arg1;
- (id)recommendedVideoSettingsForVideoCodecType:(id)arg1 assetWriterOutputFileType:(id)arg2;

@end
