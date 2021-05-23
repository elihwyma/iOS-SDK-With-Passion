/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARParentImageSensorSettings, AVCaptureAudioDataOutput, AVCaptureConnection, AVCaptureDeviceInput, AVCaptureSession, NSMutableArray, NSString;

@protocol ARSensorDelegate, OS_dispatch_queue;

@interface ARParentImageSensor : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_captureQueue;
    _Bool _recordingMode;
    _Bool _running;
    _Bool _interrupted;
    _Bool _unrecoverable;
    ARParentImageSensorSettings *_settings;
    NSMutableArray *_sensors;
    id <ARSensorDelegate> _delegate;
    unsigned long long _powerUsage;
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_audioInput;
    AVCaptureAudioDataOutput *_audioOutput;
    AVCaptureConnection *_audioConnection;
}

@property (retain, nonatomic) NSMutableArray *sensors;
@property _Bool running;
@property _Bool interrupted;
@property _Bool unrecoverable;
@property (weak, nonatomic) id <ARSensorDelegate> delegate;
@property (copy, nonatomic, readonly) ARParentImageSensorSettings *settings;
@property (nonatomic) unsigned long long powerUsage;
@property (nonatomic, readonly) AVCaptureSession *captureSession;
@property (nonatomic, readonly) AVCaptureDeviceInput *audioInput;
@property (nonatomic, readonly) AVCaptureAudioDataOutput *audioOutput;
@property (nonatomic, readonly) AVCaptureConnection *audioConnection;
@property (nonatomic) _Bool recordingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithSettings:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)reconfigure:(id)arg1;
- (void)_configureAudioCapture;
- (unsigned long long)providedDataTypes;
- (void)forceUpdatePowerUsage:(unsigned long long)arg1;
- (void)addSensorForSettings:(id)arg1;
- (_Bool)canReconfigure:(id)arg1;
- (_Bool)_validateMicrophoneAuthorization;
- (_Bool)_validateCameraAuthorization;
- (void)captureSessionStateChanged:(id)arg1;
- (void)updateCaptureDeviceConfigurations:(id)arg1;

@end
