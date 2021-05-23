/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHStrokeGroupBasedVisualization.h>

@interface CHNormalizedDrawingVisualization : CHStrokeGroupBasedVisualization

- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (struct CGRect)dirtyRectForStrokeGroup:(id)arg1;
- (_Bool)shouldDrawStrokeGroup:(id)arg1;
- (struct CGAffineTransform)_transformForInputDrawingBounds:(struct CGRect)arg1 referenceBounds:(struct CGRect)arg2 viewBounds:(struct CGRect)arg3;
- (void)_drawGroupBrackgroundInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)drawInputDrawing:(id)arg1 inContext:(struct CGContext *)arg2 transform:(struct CGAffineTransform)arg3;
- (void)_drawCutPoints:(id)arg1 inputDrawing:(id)arg2 inContext:(struct CGContext *)arg3 transform:(struct CGAffineTransform)arg4;
- (long long)layeringPriority;
- (_Bool)wantsInputDrawings;

@end
