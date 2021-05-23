/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@interface ARUIAnimatableObjectPropertyAnimation : NSObject

{
    CDUnknownBlockType _animationTimingFunction;
    double _currentAnimationTime;
    double _duration;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (retain, nonatomic, setter=_setStartValue:) id _startValue;
@property (retain, nonatomic, setter=_setEndValue:) id _endValue;
@property (retain, nonatomic, setter=_setCurrentValue:) id _currentValue;

+ (CDUnknownBlockType)timingFunctionForMediaTimingFunction:(id)arg1;
+ (CDUnknownBlockType)linearTimingFunction;
+ (id)animationWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

- (void)update:(double)arg1;
- (void)_updateWithProgress:(float)arg1;
- (_Bool)isFinishedAnimating;
- (id)valueByAddingCurrentValueToValue:(id)arg1;
- (void)callAndReleaseCompletionHandler;

@end
