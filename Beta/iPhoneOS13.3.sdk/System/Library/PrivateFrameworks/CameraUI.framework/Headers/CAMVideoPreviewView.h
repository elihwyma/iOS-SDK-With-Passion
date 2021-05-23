/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class AVCaptureVideoPreviewLayer;

@interface CAMVideoPreviewView : UIView

{
    _Bool _square;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    UIView *_previewLayerView;
    long long _previewViewAspectMode;
}

@property (retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic, readonly) UIView *previewLayerView;
@property (nonatomic) long long previewViewAspectMode;
@property (nonatomic, getter=isSquare) _Bool square;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)_frameForSubviewsAccountForSquare:(_Bool)arg1;
- (void)_updateAspectModeForSublayers;
- (void)setSquare:(_Bool)arg1 animated:(_Bool)arg2;

@end
