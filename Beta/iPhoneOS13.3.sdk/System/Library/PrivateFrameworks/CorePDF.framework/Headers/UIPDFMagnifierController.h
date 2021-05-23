/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CALayer, CAShapeLayer, UIPDFPageView, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIPDFMagnifierController : NSObject

{
    UIWindow *_textEffectsWindow;
    UIView *_textEffectsSubView;
    CALayer *_loLayer;
    CALayer *_hiLayer;
    CALayer *_imageContainer;
    CALayer *_imageLayer;
    CAShapeLayer *_selectionLayer;
    CALayer *_maskLayer;
    double _power;
    struct CGSize _magnifierSize;
    _Bool _loupe;
    struct CGPoint _touchPoint;
    struct CGPoint _pointToMagnify;
    double _enlargementScale;
    CALayer *_leftBar;
    CALayer *_leftGrabber;
    CALayer *_rightBar;
    CALayer *_rightGrabber;
    struct CGSize _controlPointSize;
    struct CGColor *_grabberColor;
    unsigned long long _pageRotation;
    _Bool _visible;
    UIPDFPageView *pageView;
}

@property (nonatomic) UIPDFPageView *pageView;

- (id)init;
- (void)dealloc;
- (_Bool)visible;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)hide;
- (void)setPosition:(struct CGPoint)arg1 viewPoint:(struct CGPoint)arg2;
- (void)showMagnifier;
- (void)move;
- (void)showLoupe;
- (void)tearDownLayers;
- (void)placeImage;
- (void)setImageContainerMask;
- (void)_show;
- (void)setImageContainerPositionLoupe;
- (void)setImageContainerPositionMagnifier;
- (void)setTextRangeHandlePositions;
- (void)setSelectionPath;
- (void)setLayerPositions;
- (struct CGRect)convertRectToRotatedPage:(struct CGRect)arg1;
- (struct CGPoint)convertPointToRotatedPage:(struct CGPoint)arg1;
- (struct CGPoint)viewPointInTextEffectsSpace;
- (struct CGPoint)pointToMagnifyInPDFSpace;
- (struct CGPoint)convertPointToEnlargedSpace:(struct CGPoint)arg1;
- (struct CGRect)convertRectToEnlargedSpace:(struct CGRect)arg1;
- (void)setSelectionPath:(struct CGPath *)arg1 bounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3;
- (void)setPower;
- (id)imageReceived:(id)arg1 data:(id)arg2;
- (void)addBling;
- (void)addTextRangeHandles;
- (_Bool)isSelectionUniformlyRotated:(double *)arg1;
- (struct CGPoint)convertViewPointToEnlargedSpace:(struct CGPoint)arg1;

@end
