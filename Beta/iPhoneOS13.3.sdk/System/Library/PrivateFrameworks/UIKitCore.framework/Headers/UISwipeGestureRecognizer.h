/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableArray;

@interface UISwipeGestureRecognizer : UIGestureRecognizer

{
    double _maximumDuration;
    double _minimumPrimaryMovement;
    double _maximumPrimaryMovement;
    double _minimumSecondaryMovement;
    double _maximumSecondaryMovement;
    double _rateOfMinimumMovementDecay;
    double _rateOfMaximumMovementDecay;
    unsigned long long _numberOfTouchesRequired;
    NSMutableArray *_touches;
    unsigned long long _direction;
    struct CGPoint _startLocation;
    struct CGPoint *_startLocations;
    double _startTime;
    _Bool _failed;
}

@property (nonatomic) double maximumDuration;
@property (nonatomic) double minimumPrimaryMovement;
@property (nonatomic) double maximumPrimaryMovement;
@property (nonatomic) double minimumSecondaryMovement;
@property (nonatomic) double maximumSecondaryMovement;
@property (nonatomic) double rateOfMinimumMovementDecay;
@property (nonatomic) double rateOfMaximumMovementDecay;
@property (nonatomic, readonly) struct CGPoint startPoint;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) unsigned long long direction;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_shouldDefaultToTouches;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (void)_appendSubclassDescription:(id)arg1;
- (unsigned long long)numberOfTouches;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (_Bool)_checkForSwipeWithDelta:(struct CGPoint)arg1 time:(double)arg2;

@end
