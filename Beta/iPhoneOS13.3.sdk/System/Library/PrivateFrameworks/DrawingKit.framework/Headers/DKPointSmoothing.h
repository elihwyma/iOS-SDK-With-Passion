/*
 Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, UIBoxcarFilterPointFIFO, UIPointFIFO, UIQuadCurvePointFIFO;

__attribute__((visibility("hidden")))
@interface DKPointSmoothing : NSObject

{
    unsigned long long _width;
    float _spacing;
    float _unitScale;
    _Bool _emitInterpolatedPoints;
    UIPointFIFO *_strokeFIFO;
    UIBoxcarFilterPointFIFO *_boxcarFIFO;
    UIQuadCurvePointFIFO *_interpolatingFIFO;
}

@property (retain, nonatomic) UIPointFIFO *strokeFIFO;
@property (retain, nonatomic) UIBoxcarFilterPointFIFO *boxcarFIFO;
@property (retain, nonatomic) UIQuadCurvePointFIFO *interpolatingFIFO;
@property (nonatomic) unsigned long long width;
@property (nonatomic) float spacing;
@property (nonatomic) float unitScale;
@property (nonatomic) _Bool emitInterpolatedPoints;
@property (copy, nonatomic) CDUnknownBlockType emissionHandler;

+ (MISSING_TYPE *)interpolateFromPoint:(float)arg1 toPoint:controlPoint:time: /* Error: Ran out of types for this method. */;
+ (void)_interpolateFromPoint:(float)arg1 toPoint:(CDUnknownBlockType)arg2 withControlPoint:atUnitScale:emissionHandler: /* Error: Ran out of types for this method. */;

- (id)init;
- (void)clear;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (void)emitPoint: /* Error: Ran out of types for this method. */;
- (id)initWithWidth:(unsigned long long)arg1 spacing:(float)arg2;

@end
