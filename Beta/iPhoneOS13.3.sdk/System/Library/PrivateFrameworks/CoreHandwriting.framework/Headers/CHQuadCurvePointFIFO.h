/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHPointFIFO.h>

@class MISSING_TYPE;

@protocol CHPointFIFODrawingTarget;

@interface CHQuadCurvePointFIFO : CHPointFIFO

{
    _Bool _emitInterpolatedPoints;
    float _unitScale;
    CDUnknownBlockType _emissionHandler;
    struct CGPath *_path;
    double _lineWidth;
    id <CHPointFIFODrawingTarget> _drawingTarget;
    MISSING_TYPE *_lastPoint;
    vector_74a7c1d0 _prevPoints;
    vector_74a7c1d0 _points;
    vector_74a7c1d0 _controlPoints;
}

@property (nonatomic) vector_027a6188 prevPoints;
@property (nonatomic) vector_027a6188 points;
@property (nonatomic) vector_027a6188 controlPoints;
@property (nonatomic) MISSING_TYPE *lastPoint;
@property (retain, nonatomic) id <CHPointFIFODrawingTarget> drawingTarget;
@property (nonatomic) float unitScale;
@property (nonatomic) _Bool emitInterpolatedPoints;
@property (copy) CDUnknownBlockType emissionHandler;
@property (nonatomic) struct CGPath *path;
@property (nonatomic) double lineWidth;

+ (MISSING_TYPE *)interpolateFromPoint:(float)arg1 toPoint:controlPoint:time: /* Error: Ran out of types for this method. */;

- (void)dealloc;
- (void)clear;
- (id).cxx_construct;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (id)initWithFIFO:(id)arg1;
- (void)setUnitScaleForViewSize:(struct CGSize)arg1 normalizedSize:(struct CGSize)arg2 contentScaleFactor:(double)arg3;
- (id)initWithFIFO:(id)arg1 drawingTarget:(id)arg2;

@end
