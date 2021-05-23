/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <Foundation/NSObject.h>

@class AXMutableReplayableGesture, NSMutableArray, NSMutableDictionary;

@protocol AXGestureRecorderFingerPathCollectionDelegate;

@interface AXGestureRecorderFingerPathCollection : NSObject

{
    _Bool _shouldRecordRealTimeGesture;
    id <AXGestureRecorderFingerPathCollectionDelegate> _delegate;
    unsigned long long _maximumFingerPathsCount;
    unsigned long long _referenceTimesArrayIndex;
    NSMutableArray *_fingerPaths;
    NSMutableArray *_pointsArrays;
    NSMutableArray *_forcesArrays;
    NSMutableDictionary *_touchPathIndicesToFingerPathIndices;
    NSMutableArray *_timesArrays;
    double _minimumFingerLineWidth;
    double _maximumFingerLineWidth;
    AXMutableReplayableGesture *_replayableGesture;
}

@property (nonatomic) unsigned long long maximumFingerPathsCount;
@property (nonatomic) unsigned long long referenceTimesArrayIndex;
@property (nonatomic, readonly) NSMutableArray *referenceTimesArray;
@property (retain, nonatomic) NSMutableArray *fingerPaths;
@property (retain, nonatomic) NSMutableArray *pointsArrays;
@property (retain, nonatomic) NSMutableArray *forcesArrays;
@property (retain, nonatomic) NSMutableDictionary *touchPathIndicesToFingerPathIndices;
@property (retain, nonatomic) NSMutableArray *timesArrays;
@property (retain, nonatomic) AXMutableReplayableGesture *replayableGesture;
@property (weak, nonatomic) id <AXGestureRecorderFingerPathCollectionDelegate> delegate;
@property (nonatomic, readonly) unsigned long long fingerPathsCount;
@property (nonatomic, readonly) unsigned long long timestampsCount;
@property (nonatomic) _Bool shouldRecordRealTimeGesture;
@property (nonatomic) double minimumFingerLineWidth;
@property (nonatomic) double maximumFingerLineWidth;

- (id)init;
- (void)dealloc;
- (void)reset;
- (double)timestampAtIndex:(unsigned long long)arg1;
- (void)_referenceTimesArrayIndexNeedsRefresh;
- (id)_realTimeFingerPathToAppendForIndex:(unsigned long long)arg1 upToPositionForTimestampAtIndex:(unsigned long long)arg2;
- (id)_nonRealTimeFingerPathToAppendForIndex:(unsigned long long)arg1 upToPositionForTimestampAtIndex:(unsigned long long)arg2;
- (id)_bezierPathToAppendForTouchLocation:(struct CGPoint)arg1 unnamedValue:(double)arg2 optionalPreviousTouchLocation:(id)arg3 optionalPreviousForce:(id)arg4;
- (struct CGPoint)_interfaceOrientedScreenPointForPoint:(struct CGPoint)arg1 view:(id)arg2;
- (void)_didInsertFingerPathAtIndex:(unsigned long long)arg1;
- (void)_didUpdateFingerPathAtIndex:(unsigned long long)arg1;
- (void)_addPointsToReplayableGesture:(id)arg1 forces:(id)arg2 time:(double)arg3;
- (id)initWithMaximumFingerPathsCount:(unsigned long long)arg1;
- (id)fingerPathAtIndex:(unsigned long long)arg1;
- (id)fingerPathToAppendForIndex:(unsigned long long)arg1 forTimestampAtIndex:(unsigned long long)arg2;
- (id)propertyListRepresentationWithName:(id)arg1;
- (id)replayableGestureRepresentation;
- (void)appendPointsForTouches:(id)arg1 referenceView:(id)arg2 time:(double)arg3;
- (void)handleLiftForTouches:(id)arg1 referenceView:(id)arg2 time:(double)arg3;
- (void)appendFingerPathsFromFingerPathCollection:(id)arg1;

@end
