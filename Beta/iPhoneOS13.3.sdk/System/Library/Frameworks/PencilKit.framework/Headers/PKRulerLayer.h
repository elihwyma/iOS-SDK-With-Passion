/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <QuartzCore/CALayer.h>

#import <PencilKit/Swift-Protocol.h>

@class CATextLayer, NSString, NSTimer, PKRulerController;

@interface PKRulerLayer : CALayer <Swift>

{
    _Bool _isInlineResizing;
    _Bool _isExpandedInline;
    _Bool _isRulerDrawingMovingToEndOfRuler;
    _Bool _zooming;
    PKRulerController *_rulerController;
    double _rulerAlpha;
    CALayer *_rulerAngleMarker;
    NSTimer *_imageTransformTimer;
    double _initialDrawingBoundsYOrigin;
    CALayer *_rulerLayer;
    CALayer *_rulerAngleTick;
    CATextLayer *_rulerAngleText;
    CALayer *_rulerDistanceHUD;
    CATextLayer *_rulerDistanceText;
    double _currentTValueForSnappedDrawing;
    double _minTValueForSnappedDrawing;
    double _maxTValueForSnappedDrawing;
    double _originTValueForSnappedDrawing;
    double _rulerZoomStartCenterTValueOnScreen;
    double _rulerZoomStartScale;
    struct CGAffineTransform _previousRulerTransform;
    struct CGAffineTransform _rulerZoomStartTransform;
}

@property (retain, nonatomic) NSTimer *imageTransformTimer;
@property (nonatomic) double initialDrawingBoundsYOrigin;
@property (nonatomic) _Bool isInlineResizing;
@property (nonatomic) _Bool isExpandedInline;
@property (retain, nonatomic) CALayer *rulerLayer;
@property (nonatomic) struct CGAffineTransform rulerTransform;
@property (nonatomic) struct CGAffineTransform previousRulerTransform;
@property (retain, nonatomic) CALayer *rulerAngleTick;
@property (retain, nonatomic) CATextLayer *rulerAngleText;
@property (retain, nonatomic) CALayer *rulerDistanceHUD;
@property (retain, nonatomic) CATextLayer *rulerDistanceText;
@property (nonatomic) _Bool isRulerDrawingMovingToEndOfRuler;
@property (nonatomic) double currentTValueForSnappedDrawing;
@property (nonatomic) double minTValueForSnappedDrawing;
@property (nonatomic) double maxTValueForSnappedDrawing;
@property (nonatomic) double originTValueForSnappedDrawing;
@property (nonatomic) double rulerZoomStartCenterTValueOnScreen;
@property (nonatomic) double rulerZoomStartScale;
@property (nonatomic) struct CGAffineTransform rulerZoomStartTransform;
@property (nonatomic) _Bool zooming;
@property (weak, nonatomic) PKRulerController *rulerController;
@property (nonatomic) double rulerAlpha;
@property (retain, nonatomic) CALayer *rulerAngleMarker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showRuler;
- (_Bool)compactRuler;
- (id)_rulerImage;
- (void)updateRulerAlpha:(double)arg1;
- (double)rulerWidth;
- (void)updateRulerTickMarkImage;
- (id)addOpacityAnimationOnLayer:(id)arg1 delegate:(id)arg2 toOpacity:(double)arg3;
- (void)removeRulerMarkers;
- (_Bool)shouldUseLargestRulerTextFontSize;
- (id)rulerDialImage;
- (id)rulerDialLevelImage;
- (long long)userAngle;
- (double)_distanceMarkerFontSize;
- (double)_fontSizeForRulerTextHUD:(id)arg1;
- (void)addScaleAndOpacityAnimationOnLayer:(id)arg1 delegate:(id)arg2 fromScale:(double)arg3 toScale:(double)arg4 fromAlpha:(double)arg5 toAlpha:(double)arg6;
- (id)_textForRulerHUD:(double)arg1;
- (struct CGPoint)getRulerCenterLineOriginAndTangent:(struct CGPoint *)arg1;
- (void)updateDistanceMarkerWithSpacing:(double)arg1;
- (id)initWithRulerController:(id)arg1;
- (double)rulerTickMarkInset;
- (double)rulerAlignInset;
- (id)addScaleAnimationOnLayer:(id)arg1 delegate:(id)arg2 fromScale:(double)arg3 toScale:(double)arg4;
- (void)hideRulerAnimated:(_Bool)arg1;
- (void)updateAngleWithAngleMarkerPosition:(struct CGPoint)arg1;
- (void)hideRulerAngleMarker;
- (_Bool)viewPointInRuler:(struct CGPoint)arg1;
- (void)updateRulerMarkerForLocation:(struct CGPoint)arg1 firstTouch:(_Bool)arg2;
- (void)updateImageTransform:(id)arg1;
- (void)setImageTransformFrom:(struct CGAffineTransform)arg1 toTransform:(struct CGAffineTransform)arg2 animated:(_Bool)arg3 duration:(double)arg4;

@end
