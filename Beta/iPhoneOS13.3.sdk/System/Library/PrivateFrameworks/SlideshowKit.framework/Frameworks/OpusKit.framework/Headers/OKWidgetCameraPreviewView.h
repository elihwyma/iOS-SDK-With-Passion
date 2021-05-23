/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusFoundation/OFUIView.h>

@class AVCaptureSession;

@interface OKWidgetCameraPreviewView : OFUIView

@property (nonatomic) AVCaptureSession *session;

+ (Class)layerClass;

- (void)dealloc;

@end
