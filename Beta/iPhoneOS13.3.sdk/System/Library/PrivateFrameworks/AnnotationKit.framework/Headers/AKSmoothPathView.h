/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIView.h>

@class AKBitmapFIFO, AKController, CHBoxcarFilterPointFIFO, CHPointStrokeFIFO, CHQuadCurvePointFIFO, MISSING_TYPE, NSString, UIColor;

@protocol AKSmoothPathViewDelegate;

@interface AKSmoothPathView : UIView

{
    double _cachedEffectiveStrokeWidthInModel;
    double _cachedModelToViewScale;
    _Bool _prestrokedOutputMode;
    _Bool _hasShadow;
    _Bool _applyModelBaseScaleFactorToStroke;
    _Bool _startedTouchDrawing;
    _Bool _isAddingPointWithoutSmoothing;
    _Bool _disableSingleDotSpecialCase;
    AKController *_controller;
    id <AKSmoothPathViewDelegate> _delegate;
    UIColor *_strokeColor;
    double _strokeWidth;
    double _shadowRadiusInModel;
    double _shadowRadiusInView;
    double _minPressure;
    double _maxPressure;
    double _minThickness;
    double _maxThickness;
    CHPointStrokeFIFO *_strokeFIFO;
    CHBoxcarFilterPointFIFO *_smoothingFIFO;
    CHQuadCurvePointFIFO *_interpolatingFIFO;
    AKBitmapFIFO *_bitmapFifo;
    double _currentWeight;
    double _singleDotCurrentSize;
    struct CGRect _singleDotRect;
}

@property _Bool applyModelBaseScaleFactorToStroke;
@property (nonatomic) _Bool startedTouchDrawing;
@property _Bool isAddingPointWithoutSmoothing;
@property struct CGRect singleDotRect;
@property double shadowRadiusInModel;
@property double shadowRadiusInView;
@property double cachedModelToViewScale;
@property (nonatomic) double minPressure;
@property (nonatomic) double maxPressure;
@property (nonatomic) double minThickness;
@property (nonatomic) double maxThickness;
@property (retain, nonatomic) CHPointStrokeFIFO *strokeFIFO;
@property (retain, nonatomic) CHBoxcarFilterPointFIFO *smoothingFIFO;
@property (retain, nonatomic) CHQuadCurvePointFIFO *interpolatingFIFO;
@property (retain, nonatomic) AKBitmapFIFO *bitmapFifo;
@property (weak) AKController *controller;
@property double currentWeight;
@property _Bool disableSingleDotSpecialCase;
@property double singleDotCurrentSize;
@property (retain) id <AKSmoothPathViewDelegate> delegate;
@property (nonatomic) _Bool prestrokedOutputMode;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (nonatomic) _Bool hasShadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newSmoothPathViewForCurrentPlatformWithController:(id)arg1;

- (_Bool)isOpaque;
- (void)commonInit;
- (void)teardown;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)handleTapAction:(id)arg1;
- (void)awakeFromNib;
- (void)_clear;
- (id)initWithController:(id)arg1;
- (id)drawing;
- (double)_windowBackingScaleFactor;
- (void)continueStrokeWithoutSmoothing: /* Error: Ran out of types for this method. */;
- (double)weightForValue:(double)arg1;
- (void)continueStroke: /* Error: Ran out of types for this method. */;
- (void)terminateStroke;
- (void)handleForwardedEvent:(id)arg1;
- (void)handleDragAction:(id)arg1;
- (void)_updateShadowRadiusInView;
- (void)updateInterpolatingFifoUnitScale;
- (void)_updateInterpolatingFifoLineWidth;
- (void)_setupFilterChainWithBitmapFifo:(_Bool)arg1;
- (struct CGContext *)_getPlatformCGContext;
- (void)_setupShadowInContext:(struct CGContext *)arg1;
- (double)_effectiveStrokeWidthInModel;
- (void)callDelegate;
- (void)startStroke;
- (MISSING_TYPE *)_pointForRecognizer:(id)arg1;
- (MISSING_TYPE *)_pointForTouch:(id)arg1;
- (_Bool)_catchUpAccumulatedTouchesForRecognizer:(id)arg1;
- (double)_convertValueFromModelToSelf:(double)arg1;

@end
