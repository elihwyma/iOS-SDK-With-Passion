/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UITextMagnifierTimeWeightedPoint, UITextSelectionWindowAveragedValue;

@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface UITextGestureTuning : NSObject

{
    _Bool _didBreakLineThresholdBelow;
    _Bool _didBreakLineThresholdAbove;
    double _visibilityOffset;
    double _initialOffset;
    double _initialOffsetFromTopOfCaret;
    UITextSelectionWindowAveragedValue *_averagedRadius;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    long long _lastTouchType;
    _Bool _shouldUseLineThreshold;
    _Bool _shouldIncludeConstantOffset;
    _Bool _includeTipProjection;
    _Bool _strongerBiasAgainstUp;
    NSObject<UICoordinateSpace> *_coordinateSpace;
}

@property (weak, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace;
@property (nonatomic) _Bool shouldUseLineThreshold;
@property (nonatomic) _Bool shouldIncludeConstantOffset;
@property (nonatomic) _Bool includeTipProjection;
@property (nonatomic) _Bool strongerBiasAgainstUp;
@property (nonatomic, readonly) double visibilityOffset;

- (id)init;
- (struct CGPoint)pointIfPlacedCarefully:(struct CGPoint)arg1;
- (struct CGPoint)touchAlignedPointForPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (void)updateVisibilityOffsetForTouch:(id)arg1 state:(long long)arg2;
- (void)updateWeightedPointWithGestureState:(long long)arg1 location:(struct CGPoint)arg2;
- (struct CGPoint)pointForGestureState:(long long)arg1 point:(struct CGPoint)arg2 translation:(struct CGPoint)arg3;
- (void)assertInitialVerticalOffset:(double)arg1 fromTopOfCaret:(double)arg2;
- (void)updateWithTouches:(id)arg1 gestureState:(long long)arg2;

@end
