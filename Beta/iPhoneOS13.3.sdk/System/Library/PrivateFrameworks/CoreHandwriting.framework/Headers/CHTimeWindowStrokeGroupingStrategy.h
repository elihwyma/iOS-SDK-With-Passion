/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHStrokeGroupingStrategy.h>

@interface CHTimeWindowStrokeGroupingStrategy : CHStrokeGroupingStrategy

- (id)updatedGroupingResult:(id)arg1 byAddingStrokes:(id)arg2 removingStrokeIdentifiers:(id)arg3 stableStrokeIdentifiers:(id)arg4 allSubstrokesByStrokeIdentifier:(id)arg5 withCancellationBlock:(CDUnknownBlockType)arg6;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(struct CGVector)arg2 originalDrawing:(id *)arg3 orderedStrokesIDs:(id *)arg4 rescalingFactor:(double *)arg5;
- (id)_timeSortedStrokesForIdentifiers:(id)arg1;

@end
