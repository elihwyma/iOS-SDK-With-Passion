/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <DigitalTouchShared/ETPointFIFO.h>

@class MISSING_TYPE;

@interface ETQuadCurvePointFIFO : ETPointFIFO

{
    _Bool _emitInterpolatedPoints;
    float _unitSize;
    CDUnknownBlockType _emissionHandler;
    MISSING_TYPE *_lastPoint;
    vector_e654105b _prevPoints;
    vector_e654105b _points;
    vector_e654105b _controlPoints;
}

@property (nonatomic) vector_80ea899f prevPoints;
@property (nonatomic) vector_80ea899f points;
@property (nonatomic) vector_80ea899f controlPoints;
@property (nonatomic) MISSING_TYPE *lastPoint;
@property (nonatomic) float unitSize;
@property (nonatomic) _Bool emitInterpolatedPoints;
@property (copy) CDUnknownBlockType emissionHandler;

- (void)clear;
- (id).cxx_construct;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (void)addPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;

@end
