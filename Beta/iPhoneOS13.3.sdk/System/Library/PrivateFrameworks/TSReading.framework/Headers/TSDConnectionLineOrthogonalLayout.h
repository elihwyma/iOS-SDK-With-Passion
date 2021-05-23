/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDConnectionLineAbstractLayout.h>

@interface TSDConnectionLineOrthogonalLayout : TSDConnectionLineAbstractLayout

- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint [3])arg3;
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2 andOriginalA:(struct CGPoint)arg3 originalB:(struct CGPoint)arg4;
- (_Bool)canEndpointsCoincide;
- (struct CGRect)orthoRectOfLayout:(id)arg1 outset:(double)arg2;
- (struct CGPoint)axisSnapPoint:(struct CGPoint)arg1 toXs:(vector_b67dfe3a)arg2 toYs:(vector_b67dfe3a)arg3 withThreshold:(double)arg4;
- (void)addEndpointSnapsToXs:(vector_b67dfe3a *)arg1 andYs:(vector_b67dfe3a *)arg2;

@end
