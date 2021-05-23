/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARImageSensorSettings, AVCaptureConnection, AVCaptureDataOutputSynchronizer, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVisionDataOutput, NSArray, NSMutableArray, NSString;

@protocol ARSensorDelegate, OS_dispatch_queue;

@interface ARImageSensor : NSObject <Swift>

{
    AVCaptureVisionDataOutput *_visionDataOutput;
    NSArray *_captureDeviceKeysObserved;
    _Bool _runningSingleShotAutoFocus;
    float _defaultLensPosition;
    ARImageSensorSettings *_settings;
    id <ARSensorDelegate> _delegate;
    AVCaptureDevice *_captureDevice;
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_videoInput;
    AVCaptureVideoDataOutput *_videoOutput;
    AVCaptureConnection *_videoConnection;
    AVCaptureConnection *_visionDataConnection;
    AVCaptureDataOutputSynchronizer *_outputSynchronizer;
    NSObject<OS_dispatch_queue> *_captureQueue;
    unsigned long long _powerUsage;
    long long _captureFramesPerSecond;
    NSMutableArray *_connections;
}

@property float defaultLensPosition;
@property long long captureFramesPerSecond;
@property _Bool runningSingleShotAutoFocus;
@property (weak, nonatomic) id <ARSensorDelegate> delegate;
@property (copy, nonatomic, readonly) ARImageSensorSettings *settings;
@property (nonatomic, readonly) AVCaptureDevice *captureDevice;
@property (nonatomic, readonly) AVCaptureSession *captureSession;
@property (nonatomic, readonly) AVCaptureDeviceInput *videoInput;
@property (nonatomic, readonly) AVCaptureVideoDataOutput *videoOutput;
@property (nonatomic, readonly) AVCaptureConnection *videoConnection;
@property (nonatomic, readonly) AVCaptureConnection *visionDataConnection;
@property (nonatomic, readonly) NSArray *outputsForSynchronizer;
@property (nonatomic, readonly) AVCaptureDataOutputSynchronizer *outputSynchronizer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *captureQueue;
@property (nonatomic) unsigned long long powerUsage;
@property (retain) NSMutableArray *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)registerSignPostForImageData:(id)arg1;
+ (float)defaultLensPosition;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)triggerVisionDataBurst;
- (id)logPrefix;
- (void)reconfigure:(id)arg1;
- (id)initWithSettings:(id)arg1 captureSession:(id)arg2 captureQueue:(id)arg3;
- (id)configureCaptureSession;
- (void)configureCaptureDevice;
- (id)prepareToStart;
- (unsigned long long)providedDataTypes;
- (void)forceUpdatePowerUsage:(unsigned long long)arg1;
- (void)updateCaptureDeviceFrameRate:(double)arg1;
- (_Bool)canReconfigure:(id)arg1;
- (void)enableSensor:(_Bool)arg1;
- (void)_configureCameraFocusForDevice:(id)arg1;
- (id)_setActiveFormat;
- (void)_configureFrameRateForDevice:(id)arg1;
- (id)_configureVisionDataOutputForSession:(id)arg1;
- (void)_configureCameraExposureForDevice:(id)arg1;
- (void)_configureCameraWhiteBalanceForDevice:(id)arg1;
- (void)_configureImageControlModeForDevice:(id)arg1;
- (void)configureGeometricDistortionCorrectionForDevice:(id)arg1;
- (void)_configureFrameRateForDevice:(id)arg1 frameRate:(double)arg2;
- (void)enableAutoFocusForDevice:(id)arg1;
- (void)_dispatchImageData:(id)arg1;

@end
