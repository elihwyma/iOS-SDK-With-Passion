/*
 Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@class NSString;

@protocol CRCodeRedeemerControllerDelegate;

@interface CRCodeRedeemerController

{
    id <CRCodeRedeemerControllerDelegate> _delegate;
}

@property (getter=isCaptureMode) _Bool captureMode;
@property unsigned long long captureCount;
@property double sessionTimeout;
@property long long whiteBalanceMode;
@property long long focusMode;
@property long long exposureMode;
@property long long torchMode;
@property (copy) NSString *cameraMode;
@property long long cameraPosition;
@property _Bool showDiagnosticHUD;
@property (weak) id <CRCodeRedeemerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)findCodeInImage:(struct vImage_Buffer)arg1 maxStage:(unsigned long long)arg2;
+ (id)findCodeInImage:(struct vImage_Buffer)arg1 maxStage:(unsigned long long)arg2 roi:(struct CGRect)arg3;
+ (unsigned long long)isCRCodeRedeemerAvailable;

- (id)init;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReaderDidDisplayMessage:(id)arg1;
- (void)cameraReaderDidFindTarget:(id)arg1;
- (void)showMessage:(id)arg1 color:(id)arg2 style:(unsigned long long)arg3 duration:(double)arg4;

@end
