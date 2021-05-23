/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHStrokeGroupBasedVisualization.h>

@interface CHStrokeGroupBaselineVisualization : CHStrokeGroupBasedVisualization

- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (struct CGRect)dirtyRectForStrokeGroup:(id)arg1;
- (long long)layeringPriority;
- (struct CGRect)_labelBoundsForAnchorPoint:(struct CGPoint)arg1;
- (struct CGPath *)_newBaselinePathForStrokeGroup:(id)arg1 outFirstPoint:(struct CGPoint *)arg2 strokeProvider:(id)arg3;
- (void)_getOrientedBounds:(struct CGRect *)arg1 length:(double *)arg2 forStroke:(id)arg3 atWritingDirectionIndex:(long long)arg4 inGroup:(id)arg5;
- (struct CGAffineTransform)_orientationTransformForStrokeBounds:(struct CGRect)arg1 atWritingDirectionIndex:(long long)arg2 inGroup:(id)arg3;

@end
