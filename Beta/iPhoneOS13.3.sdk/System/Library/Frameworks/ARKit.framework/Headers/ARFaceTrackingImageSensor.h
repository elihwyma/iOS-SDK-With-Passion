/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARImageSensor.h>

@class ARFaceData, AVCaptureConnection, AVCaptureDepthDataOutput, AVCaptureMetadataOutput, NSArray, NSObject, NSString;

@protocol OS_dispatch_semaphore;

@interface ARFaceTrackingImageSensor : ARImageSensor

{
    AVCaptureMetadataOutput *_metaDataOutput;
    NSArray *_availableMetadataObjectTypes;
    AVCaptureDepthDataOutput *_depthDataOutput;
    ARFaceData *_latestFaceData;
    NSObject<OS_dispatch_semaphore> *_faceDataSemaphore;
    _Bool _signpostFirstFrameDone;
    _Bool _signpostFirstFaceDone;
    double _startTime;
    unsigned long long _droppedFramesPerSec;
    _Bool _previousImageDataValid;
    AVCaptureConnection *_depthConnection;
    AVCaptureConnection *_metadataConnection;
    _Bool _recordingMode;
}

@property (nonatomic) _Bool recordingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (id)initWithSettings:(id)arg1 captureSession:(id)arg2 captureQueue:(id)arg3;
- (id)configureCaptureSession;
- (id)_configureMetaDataOutput;
- (void)configureCaptureDevice;
- (id)prepareToStart;
- (void)capturedSynchedOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromVideoConnection:(id)arg3 metaDataOutput:(id)arg4 didOutputMetadataObjects:(id)arg5 didOutputDepthData:(id)arg6 atTime:(CDStruct_1b6d18a9)arg7;
- (unsigned long long)providedDataTypes;
- (id)outputsForSynchronizer;

@end
