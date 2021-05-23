/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/UIPointFIFO.h>

@class MISSING_TYPE, UIView, _UIPointVector;

@interface UIQuadCurvePointFIFO : UIPointFIFO

{
    float _unitScale;
    _Bool _emitInterpolatedPoints;
    struct CGPath *_path;
    double _lineWidth;
    CDUnknownBlockType _emissionHandler;
    _UIPointVector *_prevPoints;
    _UIPointVector *_points;
    _UIPointVector *_controlPoints;
    MISSING_TYPE *_lastPoint;
    UIView *_view;
}

@property (nonatomic) float unitScale;
@property (nonatomic) _Bool emitInterpolatedPoints;
@property (copy) CDUnknownBlockType emissionHandler;
@property (nonatomic) struct CGPath *path;
@property (nonatomic) double lineWidth;
@property (nonatomic) _UIPointVector *prevPoints;
@property (nonatomic) _UIPointVector *points;
@property (nonatomic) _UIPointVector *controlPoints;
@property (nonatomic) MISSING_TYPE *lastPoint;
@property (retain, nonatomic) UIView *view;

+ (MISSING_TYPE *)interpolateFromPoint:(float)arg1 toPoint:controlPoint:time: /* Error: Ran out of types for this method. */;

- (void)dealloc;
- (void)clear;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (id)initWithFIFO:(id)arg1;
- (void)enumerateInterpolationFromPoint:(CDUnknownBlockType)arg1 toPoint:controlPoint:usingBlock: /* Error: Ran out of types for this method. */;
- (id)initWithFIFO:(id)arg1 strokeView:(id)arg2;
- (void)setUnitScaleForViewSize:(struct CGSize)arg1 normalizedSize:(struct CGSize)arg2 contentScaleFactor:(double)arg3;

@end
