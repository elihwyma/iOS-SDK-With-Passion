/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <UIKit/UIView.h>

@class AVCaptureVideoPreviewLayer;

@interface RPPipView : UIView

{
    AVCaptureVideoPreviewLayer *_previewLayer;
}

@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;

- (void)layoutSubviews;
- (void)addPreviewLayer:(id)arg1;

@end
