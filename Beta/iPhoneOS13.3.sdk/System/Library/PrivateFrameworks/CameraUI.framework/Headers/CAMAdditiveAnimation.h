/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction;

@interface CAMAdditiveAnimation : NSObject

{
    double __toValue;
    double __fromValue;
    double __duration;
    CAMediaTimingFunction *__curve;
    CAMAdditiveAnimation *__fromAnimation;
    double __startTime;
    double __lastTime;
}

@property (nonatomic, readonly) double _toValue;
@property (nonatomic) double _fromValue;
@property (nonatomic, readonly) double _duration;
@property (nonatomic, readonly) CAMediaTimingFunction *_curve;
@property (retain, nonatomic) CAMAdditiveAnimation *_fromAnimation;
@property (nonatomic, setter=_setStartTime:) double _startTime;
@property (nonatomic, setter=_setLastTime:) double _lastTime;
@property (nonatomic, readonly) double value;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;

+ (id)animationToValue:(double)arg1 fromAnimation:(id)arg2 duration:(double)arg3 curve:(id)arg4;
+ (id)animationToValue:(double)arg1 fromValue:(double)arg2 duration:(double)arg3 curve:(id)arg4;

- (id)description;
- (void)updateWithTimestamp:(double)arg1;

@end
