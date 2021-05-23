/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHStrokeGroupBasedVisualization.h>

@interface CHGroupBoundsVisualization : CHStrokeGroupBasedVisualization

- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (struct CGRect)dirtyRectForStrokeGroup:(id)arg1;

@end
