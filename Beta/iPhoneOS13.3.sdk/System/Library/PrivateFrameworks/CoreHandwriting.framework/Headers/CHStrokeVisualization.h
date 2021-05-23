/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHVisualization.h>

@protocol CHStrokeProvider;

@interface CHStrokeVisualization : CHVisualization

{
    id <CHStrokeProvider> __strokeProviderDrawn;
}

@property (retain, nonatomic) id <CHStrokeProvider> _strokeProviderDrawn;

- (void)dealloc;
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (void)drawStrokesFromStrokeProvider:(id)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;

@end
