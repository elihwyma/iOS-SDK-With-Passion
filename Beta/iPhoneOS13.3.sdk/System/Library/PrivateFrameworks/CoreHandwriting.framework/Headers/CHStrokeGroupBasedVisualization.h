/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHVisualization.h>

@class CHRecognitionSessionResult, NSSet;

@protocol CHStrokeGroupBasedVisualizationDelegate;

@interface CHStrokeGroupBasedVisualization : CHVisualization

{
    _Bool _newGroupsDefaultToActive;
    CHRecognitionSessionResult *_resultDrawn;
    NSSet *_activeStrokeGroupAncestorIdentifiers;
}

@property (retain, nonatomic) CHRecognitionSessionResult *resultDrawn;
@property (copy, nonatomic) NSSet *activeStrokeGroupAncestorIdentifiers;
@property (nonatomic) id <CHStrokeGroupBasedVisualizationDelegate> delegate;
@property (nonatomic, readonly) _Bool newGroupsDefaultToActive;

- (void)dealloc;
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (struct CGRect)dirtyRectForStrokeGroup:(id)arg1;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (void)toggleVisualizationRegionAtPoint:(struct CGPoint)arg1;
- (void)_markStrokeGroupsAsActive:(id)arg1;

@end
