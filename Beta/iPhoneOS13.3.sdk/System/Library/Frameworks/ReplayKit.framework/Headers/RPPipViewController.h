/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <UIKit/UIViewController.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession;

@interface RPPipViewController : UIViewController

{
    long long _cameraPosition;
    AVCaptureSession *_pipSession;
    AVCaptureDevice *_videoDevice;
    AVCaptureDeviceInput *_videoInput;
    long long _initialOrientation;
    long long _previousOrientation;
    double _previousOrientationWidth;
    double _previousOrientationHeight;
}

@property (retain, nonatomic) AVCaptureSession *pipSession;
@property (retain, nonatomic) AVCaptureDevice *videoDevice;
@property (retain, nonatomic) AVCaptureDeviceInput *videoInput;
@property (nonatomic) long long initialOrientation;
@property (nonatomic) long long previousOrientation;
@property (nonatomic) double previousOrientationWidth;
@property (nonatomic) double previousOrientationHeight;
@property (nonatomic) long long cameraPosition;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithOrientation:(long long)arg1 position:(long long)arg2;
- (void)startPipSession;
- (void)stopPipSession;
- (id)cameraWithPosition:(long long)arg1;
- (id)_pipView;
- (void)_updateViewGeometry;
- (void)setUpPipSession;
- (long long)_captureVideoOrientationForUIDeviceOrientation:(long long)arg1;
- (void)_deviceOrientationDidChange;

@end
