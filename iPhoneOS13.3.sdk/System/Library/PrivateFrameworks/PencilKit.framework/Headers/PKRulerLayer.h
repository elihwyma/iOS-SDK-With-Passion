//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>


@class CATextLayer, NSTimer, PKRulerController;

@interface PKRulerLayer : CALayer <UIGestureRecognizerDelegate>
{
    BOOL _isInlineResizing;
    BOOL _isExpandedInline;
    BOOL _isRulerDrawingMovingToEndOfRuler;
    BOOL _zooming;
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
    CGAffineTransform _previousRulerTransform;
    CGAffineTransform _rulerZoomStartTransform;
}

@property(nonatomic) BOOL zooming; // @synthesize zooming=_zooming;
@property(nonatomic) CGAffineTransform rulerZoomStartTransform; // @synthesize rulerZoomStartTransform=_rulerZoomStartTransform;
@property(nonatomic) double rulerZoomStartScale; // @synthesize rulerZoomStartScale=_rulerZoomStartScale;
@property(nonatomic) double rulerZoomStartCenterTValueOnScreen; // @synthesize rulerZoomStartCenterTValueOnScreen=_rulerZoomStartCenterTValueOnScreen;
@property(nonatomic) double originTValueForSnappedDrawing; // @synthesize originTValueForSnappedDrawing=_originTValueForSnappedDrawing;
@property(nonatomic) double maxTValueForSnappedDrawing; // @synthesize maxTValueForSnappedDrawing=_maxTValueForSnappedDrawing;
@property(nonatomic) double minTValueForSnappedDrawing; // @synthesize minTValueForSnappedDrawing=_minTValueForSnappedDrawing;
@property(nonatomic) double currentTValueForSnappedDrawing; // @synthesize currentTValueForSnappedDrawing=_currentTValueForSnappedDrawing;
@property(nonatomic) BOOL isRulerDrawingMovingToEndOfRuler; // @synthesize isRulerDrawingMovingToEndOfRuler=_isRulerDrawingMovingToEndOfRuler;
@property(retain, nonatomic) CATextLayer *rulerDistanceText; // @synthesize rulerDistanceText=_rulerDistanceText;
@property(retain, nonatomic) CALayer *rulerDistanceHUD; // @synthesize rulerDistanceHUD=_rulerDistanceHUD;
@property(retain, nonatomic) CATextLayer *rulerAngleText; // @synthesize rulerAngleText=_rulerAngleText;
@property(retain, nonatomic) CALayer *rulerAngleTick; // @synthesize rulerAngleTick=_rulerAngleTick;
@property(nonatomic) CGAffineTransform previousRulerTransform; // @synthesize previousRulerTransform=_previousRulerTransform;
@property(retain, nonatomic) CALayer *rulerLayer; // @synthesize rulerLayer=_rulerLayer;
@property(nonatomic) BOOL isExpandedInline; // @synthesize isExpandedInline=_isExpandedInline;
@property(nonatomic) BOOL isInlineResizing; // @synthesize isInlineResizing=_isInlineResizing;
@property(nonatomic) double initialDrawingBoundsYOrigin; // @synthesize initialDrawingBoundsYOrigin=_initialDrawingBoundsYOrigin;
@property(retain, nonatomic) NSTimer *imageTransformTimer; // @synthesize imageTransformTimer=_imageTransformTimer;
@property(retain, nonatomic) CALayer *rulerAngleMarker; // @synthesize rulerAngleMarker=_rulerAngleMarker;
@property(nonatomic) double rulerAlpha; // @synthesize rulerAlpha=_rulerAlpha;
@property(nonatomic) __weak PKRulerController *rulerController; // @synthesize rulerController=_rulerController;
// - (void).cxx_destruct;
- (void)setImageTransformFrom:(CGAffineTransform)arg1 toTransform:(CGAffineTransform)arg2 animated:(BOOL)arg3 duration:(double)arg4;
- (void)updateImageTransform:(id)arg1;
- (void)removeRulerMarkers;
- (void)updateRulerMarkerForLocation:(CGPoint)arg1 firstTouch:(BOOL)arg2;
- (void)updateDistanceMarkerWithSpacing:(double)arg1;
- (double)_distanceMarkerFontSize;
- (id)_textForRulerHUD:(double)arg1;
- (double)_fontSizeForRulerTextHUD:(id)arg1;
- (CGPoint)getRulerCenterLineOriginAndTangent:(CGPoint )arg1;
- (BOOL)viewPointInRuler:(CGPoint)arg1;
- (void)hideRulerAngleMarker;
- (long long)userAngle;
- (void)updateAngleWithAngleMarkerPosition:(CGPoint)arg1;
- (BOOL)shouldUseLargestRulerTextFontSize;
- (void)hideRulerAnimated:(BOOL)arg1;
- (void)showRuler;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)addScaleAndOpacityAnimationOnLayer:(id)arg1 delegate:(id)arg2 fromScale:(double)arg3 toScale:(double)arg4 fromAlpha:(double)arg5 toAlpha:(double)arg6;
- (id)addScaleAnimationOnLayer:(id)arg1 delegate:(id)arg2 fromScale:(double)arg3 toScale:(double)arg4;
- (id)addOpacityAnimationOnLayer:(id)arg1 delegate:(id)arg2 toOpacity:(double)arg3;
- (void)updateRulerTickMarkImage;
@property(nonatomic) CGAffineTransform rulerTransform;
- (void)updateRulerAlpha:(double)arg1;
- (double)rulerAlignInset;
- (double)rulerTickMarkInset;
- (double)rulerWidth;
- (id)rulerDialLevelImage;
- (id)rulerDialImage;
- (id)_rulerImage;
- (BOOL)compactRuler;
- (id)initWithRulerController:(id)arg1;

@end

