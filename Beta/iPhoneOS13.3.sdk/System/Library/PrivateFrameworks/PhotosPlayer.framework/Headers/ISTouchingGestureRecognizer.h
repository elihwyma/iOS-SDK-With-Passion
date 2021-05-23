/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <UIKit/UIGestureRecognizer.h>

@interface ISTouchingGestureRecognizer : UIGestureRecognizer

{
    _Bool _requireSingleTouch;
    double _minimumTouchDuration;
    double _maximumTouchMovement;
    double _distanceFromInitialPoint;
    unsigned long long __touchCount;
    unsigned long long __beginRequestID;
    struct CGPoint __initialPointInView;
}

@property (nonatomic, setter=_setTouchCount:) unsigned long long _touchCount;
@property (nonatomic, setter=_setBeginRequestID:) unsigned long long _beginRequestID;
@property (nonatomic, setter=_setInitialPointInView:) struct CGPoint _initialPointInView;
@property (nonatomic) double minimumTouchDuration;
@property (nonatomic) _Bool requireSingleTouch;
@property (nonatomic) double maximumTouchMovement;
@property (nonatomic, readonly) double distanceFromInitialPoint;

- (void)setEnabled:(_Bool)arg1;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_incrementTouchesBy:(unsigned long long)arg1;
- (void)_decrementTouchesBy:(unsigned long long)arg1;
- (void)_beginWithRequestID:(unsigned long long)arg1;
- (void)_updateDistanceFromInitialPoint;

@end
