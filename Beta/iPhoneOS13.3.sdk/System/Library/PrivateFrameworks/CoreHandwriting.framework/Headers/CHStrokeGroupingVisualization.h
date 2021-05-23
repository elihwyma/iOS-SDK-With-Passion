/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHStrokeGroupBasedVisualization.h>

@interface CHStrokeGroupingVisualization : CHStrokeGroupBasedVisualization

- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (struct CGRect)dirtyRectForStrokeGroup:(id)arg1;
- (struct CGColor *)_newColorForStroke:(id)arg1 inGroup:(id)arg2;

@end
