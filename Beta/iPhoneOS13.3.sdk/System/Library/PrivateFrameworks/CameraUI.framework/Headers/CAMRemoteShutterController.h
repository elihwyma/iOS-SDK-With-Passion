/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMMotionController, CCCameraConnection, NSArray, NSString;

@protocol CAMRemoteShutterDelegate;

@interface CAMRemoteShutterController : NSObject

{
    _Bool _showingPreview;
    _Bool _capturingVideo;
    _Bool _capturingTimelapse;
    NSArray *_availableCaptureModes;
    long long _captureMode;
    long long _captureDevice;
    long long _flashMode;
    long long _hdrMode;
    long long _irisMode;
    double _zoomAmount;
    long long _shallowDepthOfFieldStatus;
    id <CAMRemoteShutterDelegate> _delegate;
    CCCameraConnection *_connection;
    CAMMotionController *__motionController;
}

@property (retain, nonatomic) CCCameraConnection *connection;
@property (nonatomic, readonly) CAMMotionController *_motionController;
@property (nonatomic, readonly, getter=isConnected) _Bool connected;
@property (nonatomic, getter=isShowingPreview) _Bool showingPreview;
@property (retain, nonatomic) NSArray *availableCaptureModes;
@property (nonatomic) long long captureMode;
@property (nonatomic) long long captureDevice;
@property (nonatomic) long long flashMode;
@property (nonatomic) long long hdrMode;
@property (nonatomic) long long irisMode;
@property (nonatomic) double zoomAmount;
@property (nonatomic) long long shallowDepthOfFieldStatus;
@property (nonatomic, getter=isCapturingVideo) _Bool capturingVideo;
@property (nonatomic, getter=isCapturingTimelapse) _Bool capturingTimelapse;
@property (weak, nonatomic) id <CAMRemoteShutterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)_currentMode;
- (void)openConnection;
- (void)closeConnection;
- (void)createConnectionIfNecessary;
- (void)_enterBackground:(id)arg1;
- (void)_enterForeground:(id)arg1;
- (_Bool)cameraConnectionEndBurstCapture:(id)arg1;
- (long long)cameraConnectionOrientation:(id)arg1;
- (_Bool)cameraConnection:(id)arg1 setCaptureMode:(long long)arg2;
- (void)cameraConnection:(id)arg1 takePhotoWithCountdown:(unsigned long long)arg2;
- (_Bool)cameraConnectionBeginBurstCapture:(id)arg1;
- (_Bool)cameraConnectionStartCapture:(id)arg1;
- (_Bool)cameraConnectionStopCapture:(id)arg1;
- (void)cameraConnection:(id)arg1 setFocusPoint:(struct CGPoint)arg2;
- (id)cameraConnectionSupportedCaptureModes:(id)arg1;
- (long long)cameraConnectionCaptureMode:(id)arg1;
- (_Bool)cameraConnectionToggleCameraDeviceSupport:(id)arg1;
- (_Bool)cameraConnectionZoomSupport:(id)arg1;
- (double)cameraConnectionZoomAmount:(id)arg1;
- (long long)cameraConnectionFlashSupport:(id)arg1;
- (long long)cameraConnectionFlashMode:(id)arg1;
- (long long)cameraConnectionHDRSupport:(id)arg1;
- (long long)cameraConnectionHDRMode:(id)arg1;
- (long long)cameraConnectionIrisSupport:(id)arg1;
- (long long)cameraConnectionIrisMode:(id)arg1;
- (_Bool)cameraConnectionBurstSupport:(id)arg1;
- (_Bool)cameraConnectionIsShowingLivePreview:(id)arg1;
- (void)cameraConnectionCancelCountdown:(id)arg1;
- (void)cameraConnection:(id)arg1 setZoomAmount:(double)arg2;
- (void)cameraConnection:(id)arg1 setFlashMode:(long long)arg2;
- (void)cameraConnection:(id)arg1 setHDRMode:(long long)arg2;
- (void)cameraConnection:(id)arg1 setIrisMode:(long long)arg2;
- (void)cameraConnectionToggleCameraDevice:(id)arg1;
- (void)burstCaptureWillStart;
- (void)burstCaptureNumberOfPhotosDidChange:(unsigned long long)arg1;
- (void)burstCaptureDidStop;
- (void)willStartCapturing;
- (void)didStartCaptureTimer;
- (void)didStopCapture;
- (void)countdownCanceled;
- (void)sendThumbnailImage:(id)arg1 isVideo:(_Bool)arg2;
- (void)applyCaptureConfiguration:(id)arg1;
- (void)_captureOrientationDidChange:(id)arg1;
- (long long)_convertMode:(long long)arg1;
- (void)_sendMode;
- (void)sendThumbnailData:(id)arg1 isVideo:(_Bool)arg2;
- (id)initWithCaptureConfiguration:(id)arg1 motionController:(id)arg2;
- (_Bool)cameraConnectionIsMirrored:(id)arg1;

@end
