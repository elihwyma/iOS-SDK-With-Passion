/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <Foundation/NSObject.h>

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer;

@protocol BKUIVideoCaptureSesssionDelegate;

@interface BKUIPearlVideoCaptureSession : NSObject

{
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    AVCaptureVideoPreviewLayer *_previewLayer;
    unsigned long long _captureSessionRestarts;
    _Bool _captureSessionInterrupted;
    id <BKUIVideoCaptureSesssionDelegate> _delegate;
    double _additionalPreviewScalingAllowedByCameraFormat;
}

@property (weak, nonatomic) id <BKUIVideoCaptureSesssionDelegate> delegate;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (nonatomic, readonly) double additionalPreviewScalingAllowedByCameraFormat;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startCapture;
- (id)_frontCamera;
- (void)endCapture;
- (void)_captureSessionStarted:(id)arg1;
- (void)_captureSessionStopped:(id)arg1;
- (void)_captureSessionInterrupted:(id)arg1;

@end
