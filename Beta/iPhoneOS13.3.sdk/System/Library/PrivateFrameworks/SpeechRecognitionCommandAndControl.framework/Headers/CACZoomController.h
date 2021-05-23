/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIViewController.h>

@class CABackdropLayer, CACZWLensChromeView, CAReplicatorLayer, UIView;

@interface CACZoomController : UIViewController

{
    CACZWLensChromeView *_lensChromeView;
    double _zoomFactor;
    CABackdropLayer *_screenBackdropLayer;
    CABackdropLayer *_zoomedRegionBackdropLayer;
    CAReplicatorLayer *_dockedReplicatorLayer;
    UIView *_containingView;
    struct CGRect _zoomedRegionFrame;
    struct CGRect _dockedLensFrame;
}

@property (retain, nonatomic) CABackdropLayer *screenBackdropLayer;
@property (retain, nonatomic) CABackdropLayer *zoomedRegionBackdropLayer;
@property (retain, nonatomic) CAReplicatorLayer *dockedReplicatorLayer;
@property (nonatomic) double zoomFactor;
@property (nonatomic) struct CGRect zoomedRegionFrame;
@property (nonatomic) struct CGRect dockedLensFrame;
@property (retain, nonatomic) CACZWLensChromeView *lensChromeView;
@property (weak, nonatomic) UIView *containingView;

+ (id)sharedController;

- (void)loadView;
- (void)show;
- (_Bool)_canShowWhileLocked;
- (void)hide;
- (id)initWithZoomFactor:(double)arg1;
- (id)initWithContainingView:(id)arg1;
- (struct CGRect)bestDockFromZoomRegion:(struct CGRect)arg1;
- (void)moveZoomRegion:(struct CGRect)arg1;
- (struct CGSize)_prescaledSizeForFinalSize:(struct CGSize)arg1 withScaleFactor:(double)arg2;
- (struct CGRect)_effectiveRectForBounds:(struct CGRect)arg1 position:(struct CGPoint)arg2 scaleFactor:(double)arg3;
- (void)layerize:(id)arg1 color:(id)arg2;
- (void)printLayers;

@end
