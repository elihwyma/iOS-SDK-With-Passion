/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIUndoPinchGestureRecognizer : UIGestureRecognizer

{
    _Bool _recognized;
    struct CGAffineTransform _transform;
    id _transformAnalyzer;
    _Bool _hasFailedOnOtherDominantMotion;
    unsigned long long _numberOfTouchesRequired;
    _Bool _multitouchTimerEnabled;
    _Bool _tooMuchSingleMovement;
    double _beginPinchTimestamp;
    double _beforeReductionTimeInterval;
    double _beginPerimeter;
    NSMutableArray *_activeTouches;
    double _allowableElapsedTimeForAllRequiredTouches;
    long long _pinchDirection;
    double _avgTouchesToCentroidDistance;
    NSMutableDictionary *_beginTouchLocations;
    struct CGPoint _beginCentroid;
}

@property (nonatomic) double beginPinchTimestamp;
@property (nonatomic) double beforeReductionTimeInterval;
@property (nonatomic) double beginPerimeter;
@property (nonatomic) struct CGPoint beginCentroid;
@property (retain, nonatomic) NSMutableArray *activeTouches;
@property (nonatomic) double allowableElapsedTimeForAllRequiredTouches;
@property (nonatomic, readonly) long long pinchDirection;
@property (nonatomic, readonly) double avgTouchesToCentroidDistance;
@property (retain, nonatomic) NSMutableDictionary *beginTouchLocations;
@property (nonatomic) _Bool tooMuchSingleMovement;

- (id)initWithCoder:(id)arg1;
- (double)scale;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (_Bool)_analyticsIsGestureHandled;
- (void)clearMultitouchTimer;
- (void)multitouchExpired:(id)arg1;
- (void)startMultitouchTimer:(double)arg1;
- (void)_updateTransformAnalyzerWeights;
- (struct CGPoint)centroidOfTouches:(id)arg1;
- (double)perimeterOfTouches:(id)arg1;
- (double)avgDistanceToCentroid:(id)arg1;
- (_Bool)sufficientMotionInDirection:(long long)arg1 withLocation:(struct CGPoint)arg2 withScale:(double)arg3 withAngle:(double)arg4;
- (long long)pinchDirectionWithCurrentTime:(double)arg1 perimeter:(double)arg2;

@end
