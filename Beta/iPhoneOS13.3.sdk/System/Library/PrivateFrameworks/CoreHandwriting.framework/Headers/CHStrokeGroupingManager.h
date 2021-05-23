/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHRecognitionSessionResult, NSArray, NSDictionary;

@protocol CHStrokeProvider;

@interface CHStrokeGroupingManager : NSObject

{
    _Bool _isInlineContinuousMode;
    id <CHStrokeProvider> _strokeProvider;
    CHRecognitionSessionResult *_sessionLastResult;
    NSArray *_locales;
    NSDictionary *_groupingStrategiesByIdentifier;
}

@property (retain, nonatomic, readonly) NSDictionary *groupingStrategiesByIdentifier;
@property (retain, nonatomic, readonly) id <CHStrokeProvider> strokeProvider;
@property (retain, nonatomic, readonly) CHRecognitionSessionResult *sessionLastResult;
@property (retain, nonatomic, readonly) NSArray *locales;
@property (nonatomic, readonly) _Bool isInlineContinuousMode;

- (void)dealloc;
- (id)strokesForIdentifiers:(id)arg1;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(struct CGVector)arg2 originalDrawing:(id *)arg3 orderedStrokesIDs:(id *)arg4 rescalingFactor:(double *)arg5;
- (id)_greedyCombinationOfGroupingResults:(id)arg1 stableStrokeIdentifiers:(id)arg2 withCancellationBlock:(CDUnknownBlockType)arg3;
- (id)_simpleDrawingForStrokeGroup:(id)arg1 originalDrawing:(id *)arg2 orderedStrokeIDs:(id *)arg3;
- (id)initWithStrokeProvider:(id)arg1 sessionLastResult:(id)arg2 locales:(id)arg3 isInlineContinuousMode:(_Bool)arg4 inlineContinuousModeTargets:(id)arg5;
- (id)updatedGroupingResultByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 orderedStrokeIdentifiers:(id)arg3 strokeClassificationResult:(id)arg4 cancellationBlock:(CDUnknownBlockType)arg5;

@end
