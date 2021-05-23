/*
 Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

#import <UIKitCore/UIView.h>

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSObject, NSString;

@protocol AVCaptureMetadataOutputObjectsDelegate, OS_dispatch_queue;

@interface TSCellularPlanQRCodeScannerView : UIView

{
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    AVCaptureVideoPreviewLayer *_previewLayer;
    _Bool _canUseCamera;
    id <AVCaptureMetadataOutputObjectsDelegate> _delegate;
}

@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *previewLayer;
@property (nonatomic, readonly) _Bool canUseCamera;
@property (nonatomic) id <AVCaptureMetadataOutputObjectsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)stopRunning;
- (void)startRunning;
- (void)setupCameraSession;
- (void)_changeCameraConfiguration;
- (void)_handleRuntimeError:(id)arg1;

@end
