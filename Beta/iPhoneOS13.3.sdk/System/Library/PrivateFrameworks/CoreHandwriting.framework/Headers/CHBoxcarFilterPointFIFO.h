/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHPointFIFO.h>

@interface CHBoxcarFilterPointFIFO : CHPointFIFO

{
    float _spacing;
    unsigned long long _width;
    vector_74a7c1d0 _prevPoints;
}

@property (nonatomic) vector_027a6188 prevPoints;
@property (nonatomic) unsigned long long width;
@property (nonatomic) float spacing;

- (void)clear;
- (id).cxx_construct;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3;
- (void)emitAveragedPoint;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2;

@end
