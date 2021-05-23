/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoPreviewLayer, NSObject, NSString, NSURL;

@protocol CKVideoRecorderDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKVideoRecorder : UIViewController

{
    long long _currentDevice;
    _Bool _previousStatusBarHidden;
    AVCaptureDevice *_frontFacingCamera;
    AVCaptureDevice *_rearFacingCamera;
    NSObject<OS_dispatch_queue> *_avCaptureSessionDispatchQueue;
    _Bool _canceled;
    AVCaptureVideoPreviewLayer *_captureVideoPreviewLayer;
    id <CKVideoRecorderDelegate> _delegate;
    NSURL *_outputFileURL;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_rearVideoInput;
    AVCaptureDeviceInput *_frontVideoInput;
    AVCaptureDeviceInput *_audioInput;
    AVCaptureMovieFileOutput *_videoOutput;
    AVCaptureStillImageOutput *_stillImageOutput;
}

@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureDeviceInput *rearVideoInput;
@property (retain, nonatomic) AVCaptureDeviceInput *frontVideoInput;
@property (retain, nonatomic) AVCaptureDeviceInput *audioInput;
@property (retain, nonatomic) AVCaptureMovieFileOutput *videoOutput;
@property (retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput;
@property (nonatomic) _Bool canceled;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer;
@property (nonatomic) long long cameraDevice;
@property (weak, nonatomic) id <CKVideoRecorderDelegate> delegate;
@property (copy, nonatomic) NSURL *outputFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)takePicture;
- (_Bool)startVideoCapture;
- (void)stopVideoCapture;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (id)frontFacingCamera;
- (id)_configureFrontVideoInput;
- (id)_configureRearVideoInput;
- (id)audioDevice;
- (id)_cameraWithPosition:(long long)arg1;
- (void)setupCamera:(id)arg1;
- (id)rearFacingCamera;

@end
