/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class ARDeviceOrientationSensor, ARFaceTrackingConfiguration, ARMotionSensor, ARSession, AVCaptureDevice, AVCaptureSession, CMMotionManager, JTCustomImageSensor, NSString;

@protocol JTARKitFrameDelegate, OS_dispatch_queue;

@interface JTARKitCameraSessionController : NSObject

{
    id <JTARKitFrameDelegate> _frameDelegate;
    ARSession *_arSession;
    ARFaceTrackingConfiguration *_faceTrackingConfiguration;
    JTCustomImageSensor *_customImageSensor;
    CMMotionManager *_motionManager;
    ARMotionSensor *_motionSensor;
    ARDeviceOrientationSensor *_orientationSensor;
    AVCaptureSession *_underlyingAVCaptureSession;
    AVCaptureDevice *_underlyingAVCaptureDevice;
    NSObject<OS_dispatch_queue> *_arSessionDelegateQueue;
}

@property (retain, nonatomic) ARSession *arSession;
@property (retain, nonatomic) ARFaceTrackingConfiguration *faceTrackingConfiguration;
@property (retain, nonatomic) JTCustomImageSensor *customImageSensor;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (retain, nonatomic) ARMotionSensor *motionSensor;
@property (retain, nonatomic) ARDeviceOrientationSensor *orientationSensor;
@property (retain, nonatomic) AVCaptureSession *underlyingAVCaptureSession;
@property (retain, nonatomic) AVCaptureDevice *underlyingAVCaptureDevice;
@property (nonatomic) NSObject<OS_dispatch_queue> *arSessionDelegateQueue;
@property (weak, nonatomic) id <JTARKitFrameDelegate> frameDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)processExternalSensorData:(id)arg1;
- (void)provideSensorFrameSet:(id)arg1 trackedFacesMetadata:(id)arg2 faceObjectsMetadata:(id)arg3;
- (id)initWithAVCaptureSession:(id)arg1 captureDevice:(id)arg2 arSessionDelegateQueue:(id)arg3;
- (void)startARSession;
- (_Bool)JT_setupARSession:(id *)arg1;
- (void)JT_resetARSession;

@end
