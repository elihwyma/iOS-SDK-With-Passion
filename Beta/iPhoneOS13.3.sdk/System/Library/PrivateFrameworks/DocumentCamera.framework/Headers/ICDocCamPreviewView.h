/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <UIKit/UIView.h>

@class AVCaptureSession, AVCaptureVideoPreviewLayer;

__attribute__((visibility("hidden")))
@interface ICDocCamPreviewView : UIView

@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (retain, nonatomic) AVCaptureSession *session;

+ (Class)layerClass;

@end
