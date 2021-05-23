/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHStrokeGroupingVisualization.h>

@interface CHStrokeGroupClassificationVisualization : CHStrokeGroupingVisualization

- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (long long)layeringPriority;
- (struct CGColor *)_newColorForStroke:(id)arg1 inGroup:(id)arg2;
- (id)_attributedStringFromString:(id)arg1 withColor:(struct CGColor *)arg2 font:(struct __CTFont *)arg3 paragraphStyle:(struct __CTParagraphStyle *)arg4;

@end
