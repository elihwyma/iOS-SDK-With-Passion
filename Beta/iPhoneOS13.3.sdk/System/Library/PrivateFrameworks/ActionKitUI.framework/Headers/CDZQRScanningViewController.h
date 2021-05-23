/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIViewController.h>

@class AVCaptureDevice, AVCaptureSession, AVCaptureVideoPreviewLayer, NSArray, NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface CDZQRScanningViewController : UIViewController

{
    CDUnknownBlockType _resultBlock;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _cancelBlock;
    NSArray *_metadataObjectTypes;
    AVCaptureSession *_avSession;
    AVCaptureDevice *_captureDevice;
    AVCaptureVideoPreviewLayer *_previewLayer;
    UIButton *_torchButton;
    UILabel *_cameraUnavailableLabel;
    NSString *_lastCapturedString;
}

@property (retain, nonatomic) AVCaptureSession *avSession;
@property (retain, nonatomic) AVCaptureDevice *captureDevice;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (retain, nonatomic) UIButton *torchButton;
@property (weak, nonatomic) UILabel *cameraUnavailableLabel;
@property (copy, nonatomic) NSString *lastCapturedString;
@property (retain, nonatomic) NSArray *metadataObjectTypes;
@property (copy, nonatomic) CDUnknownBlockType resultBlock;
@property (copy, nonatomic) CDUnknownBlockType errorBlock;
@property (copy, nonatomic) CDUnknownBlockType cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)sessionRuntimeError:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)sessionWasInterrupted:(id)arg1;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)turnTorchOn;
- (void)turnTorchOff;
- (id)initWithMetadataObjectTypes:(id)arg1;
- (void)cancelItemSelected:(id)arg1;
- (void)toggleTorch:(id)arg1;
- (void)handleFocusTap:(id)arg1;

@end
