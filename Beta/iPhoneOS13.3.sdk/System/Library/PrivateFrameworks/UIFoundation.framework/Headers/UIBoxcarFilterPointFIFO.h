/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/UIPointFIFO.h>

@class _UIPointVector;

@interface UIBoxcarFilterPointFIFO : UIPointFIFO

{
    unsigned long long _width;
    float _spacing;
    _UIPointVector *_prevPoints;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) float spacing;
@property (nonatomic) _UIPointVector *prevPoints;

- (void)dealloc;
- (void)clear;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3;
- (void)emitAveragedPoint;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2;

@end
