/*
 Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

#import <UIKit/UIView.h>

#import <CellularBridgeUI/Swift-Protocol.h>

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSObject, NSString;

@protocol NPHCellularBridgeBarcodeScannerCaptureDelegate, OS_dispatch_queue;

@interface NPHCellularBridgeBarcodeScannerView : UIView <Swift>

{
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    AVCaptureVideoPreviewLayer *_previewLayer;
    _Bool _canUseCamera;
    id <NPHCellularBridgeBarcodeScannerCaptureDelegate> _delegate;
}

@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *previewLayer;
@property (nonatomic, readonly) _Bool canUseCamera;
@property (nonatomic, readonly) _Bool isRunning;
@property (nonatomic) id <NPHCellularBridgeBarcodeScannerCaptureDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)stopRunning;
- (void)startRunning;
- (void)setupCameraSession;
- (void)handleRuntimeError:(id)arg1;
- (void)_changeCameraConfiguration;
- (void)autoFocusAtPoint:(struct CGPoint)arg1;
- (void)autoExposeAtPoint:(struct CGPoint)arg1;

@end
