/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, NSArray;

@interface CACZWLensChromeView : UIView

{
    _Bool _showingResizeHandles;
    double _lensCornerRadius;
    CAShapeLayer *_chromeOuterBorderLayer;
    CAShapeLayer *_chromeInnerBorderLayer;
    CAShapeLayer *_lensResizingHandlesLayer;
    CAShapeLayer *_touchStealerShapeLayer;
    CALayer *_grabberOverlayLayer;
    CALayer *_backdropLayer;
    CAShapeLayer *_backdropMaskShapeLayer;
    CAShapeLayer *_backdropGrabberMaskLayer;
    CAShapeLayer *_backdropResizingMaskLayer;
    NSArray *_resizeElements;
    struct CGRect _previousResizeBounds;
}

@property (nonatomic) double lensCornerRadius;
@property (retain, nonatomic) CAShapeLayer *chromeOuterBorderLayer;
@property (retain, nonatomic) CAShapeLayer *chromeInnerBorderLayer;
@property (retain, nonatomic) CAShapeLayer *lensResizingHandlesLayer;
@property (retain, nonatomic) CAShapeLayer *touchStealerShapeLayer;
@property (retain, nonatomic) CALayer *grabberOverlayLayer;
@property (retain, nonatomic) CALayer *backdropLayer;
@property (retain, nonatomic) CAShapeLayer *backdropMaskShapeLayer;
@property (retain, nonatomic) CAShapeLayer *backdropGrabberMaskLayer;
@property (retain, nonatomic) CAShapeLayer *backdropResizingMaskLayer;
@property (retain, nonatomic) NSArray *resizeElements;
@property (nonatomic) struct CGRect previousResizeBounds;
@property (nonatomic) _Bool showingResizeHandles;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateChromeVisibility:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showLensResizingHandles:(_Bool)arg1 animated:(_Bool)arg2;

@end
