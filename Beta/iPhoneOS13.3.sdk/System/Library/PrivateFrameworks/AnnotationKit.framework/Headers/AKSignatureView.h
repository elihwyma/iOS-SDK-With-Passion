/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIView.h>

@class AKBitmapFIFO, CHBoxcarFilterPointFIFO, CHPointStrokeFIFO, CHQuadCurvePointFIFO, UIColor;

@protocol AKSignatureViewLiveDelegate;

@interface AKSignatureView : UIView

{
    struct CGPoint _lastPoint;
    id _trackingTouchID;
    double _lastSetNeedsDisplayCallToSuperTime;
    struct CGRect _accumulatedSignatureDirtyRect;
    _Bool _isAddingPointWithoutSmoothing;
    UIColor *_strokeColor;
    double _minPressure;
    double _maxPressure;
    double _minThickness;
    double _maxThickness;
    unsigned long long _totalPointsAdded;
    double _currentWeight;
    double _strokeStartTime;
    CHPointStrokeFIFO *_strokeFIFO;
    CHBoxcarFilterPointFIFO *_boxcarFIFO;
    CHQuadCurvePointFIFO *_interpolatingFIFO;
    AKBitmapFIFO *_bitmapFifo;
    id <AKSignatureViewLiveDelegate> _liveDelegate;
    struct CGPoint _strokeStartLocation;
    struct CGPoint _strokeLastLocation;
    struct CGRect _aggregateInvalid;
    struct CGRect _unionDrawingRect;
}

@property (nonatomic) double currentWeight;
@property unsigned long long totalPointsAdded;
@property struct CGPoint strokeStartLocation;
@property struct CGPoint strokeLastLocation;
@property double strokeStartTime;
@property _Bool isAddingPointWithoutSmoothing;
@property (retain, nonatomic) CHPointStrokeFIFO *strokeFIFO;
@property (retain, nonatomic) CHBoxcarFilterPointFIFO *boxcarFIFO;
@property (retain, nonatomic) CHQuadCurvePointFIFO *interpolatingFIFO;
@property (retain, nonatomic) AKBitmapFIFO *bitmapFifo;
@property (nonatomic) struct CGRect aggregateInvalid;
@property (nonatomic) struct CGRect unionDrawingRect;
@property (nonatomic, readonly) double interfaceScale;
@property (weak, nonatomic) id <AKSignatureViewLiveDelegate> liveDelegate;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double minPressure;
@property (nonatomic) double maxPressure;
@property (nonatomic) double minThickness;
@property (nonatomic) double maxThickness;

- (void)dealloc;
- (void)clear;
- (id)initWithCoder:(id)arg1;
- (void)teardown;
- (void)_commonInit;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (double)_windowBackingScaleFactor;
- (void)_forceRedisplay;
- (void)continueStrokeWithoutSmoothing: /* Error: Ran out of types for this method. */;
- (_Bool)ak_forceAvailableForTouch:(id)arg1;
- (double)weightForValue:(double)arg1;
- (double)weightForTouch:(id)arg1;
- (void)startStroke: /* Error: Ran out of types for this method. */;
- (void)handleCoalescedTouches:(id)arg1 forTouch:(id)arg2;
- (void)continueStroke: /* Error: Ran out of types for this method. */;
- (void)terminateStroke;
- (struct CGPath *)copyStrokedInterpolatedPath;

@end
