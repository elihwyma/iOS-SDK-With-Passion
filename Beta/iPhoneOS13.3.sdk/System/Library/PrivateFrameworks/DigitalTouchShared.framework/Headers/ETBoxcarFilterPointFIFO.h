/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <DigitalTouchShared/ETPointFIFO.h>

@class MISSING_TYPE;

@interface ETBoxcarFilterPointFIFO : ETPointFIFO

{
    float _spacing;
    unsigned long long _width;
    vector_e654105b _prevPoints;
}

@property (nonatomic) vector_80ea899f prevPoints;
@property (nonatomic) unsigned long long width;
@property (nonatomic) float spacing;

- (void)clear;
- (id).cxx_construct;
- (void)flush;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3;
- (void)emitAveragedPoint;
- (void)addPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;

@end
