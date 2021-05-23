/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class AVCaptureVideoPreviewLayer, CAMFocusIndicatorView, CAMGridView, CAMLevelIndicatorView, CAMStageLightOverlayView, CAMSubjectIndicatorView, CAMVideoPreviewView, UILabel;

@interface CAMPreviewView : UIView

{
    int __exposureBiasSide;
    long long _orientation;
    CAMVideoPreviewView *_videoPreviewView;
    UIView *_indicatorContainerView;
    long long _indicatorClippingStyle;
    CAMFocusIndicatorView *_continuousIndicator;
    CAMFocusIndicatorView *_pointIndicator;
    CAMGridView *_gridView;
    CAMLevelIndicatorView *_levelView;
    CAMSubjectIndicatorView *_centeredSubjectIndicatorView;
    CAMStageLightOverlayView *_stageLightOverlayView;
    double _bottomContentInset;
    UILabel *__simulatorLabel;
    struct CGRect _viewportFrame;
}

@property (nonatomic, readonly) UILabel *_simulatorLabel;
@property (nonatomic) int _exposureBiasSide;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGRect viewportFrame;
@property (nonatomic, readonly) CAMVideoPreviewView *videoPreviewView;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic, readonly) UIView *indicatorContainerView;
@property (nonatomic) long long indicatorClippingStyle;
@property (retain, nonatomic) CAMFocusIndicatorView *continuousIndicator;
@property (retain, nonatomic) CAMFocusIndicatorView *pointIndicator;
@property (nonatomic) CAMGridView *gridView;
@property (nonatomic) CAMLevelIndicatorView *levelView;
@property (retain, nonatomic) CAMSubjectIndicatorView *centeredSubjectIndicatorView;
@property (retain, nonatomic) CAMStageLightOverlayView *stageLightOverlayView;
@property (nonatomic) double bottomContentInset;

+ (Class)layerClass;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (struct CGPoint)captureDevicePointOfInterestForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForCaptureDevicePointOfInterest:(struct CGPoint)arg1;
- (int)_faceOrientationForRollAngle:(double)arg1;
- (struct CGRect)faceIndicatorFrameForFaceResult:(id)arg1;
- (struct CGRect)bodyIndicatorFrameForResult:(id)arg1;
- (struct CGRect)_aspectFaceRectFromSquareFaceRect:(struct CGRect)arg1 angle:(double)arg2;
- (void)indicatePointOfInterest:(struct CGPoint)arg1;
- (struct CGRect)fixedSizeSubjectIndicatorFrameForFaceResult:(id)arg1;
- (struct CGRect)fixedSizeSubjectIndicatorFrameForBodyResult:(id)arg1;
- (struct CGRect)mrcIndicatorFrameForMRCResult:(id)arg1;

@end
