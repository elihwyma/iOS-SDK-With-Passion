/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <ActivityRingsUI/ARUIAnimatableObjectPropertyAnimation.h>

@interface ARUIFloatPropertyAnimation : ARUIAnimatableObjectPropertyAnimation

{
    float _startValue;
    float _endValue;
    float _currentValue;
}

@property (nonatomic, readonly) float startValue;
@property (nonatomic, readonly) float endValue;
@property (nonatomic, readonly) float currentValue;

+ (id)animationWithEndingFloatValue:(float)arg1 duration:(double)arg2 customTimingFunction:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)animationWithEndingFloatValue:(float)arg1 duration:(double)arg2 timingFunction:(id)arg3 completion:(CDUnknownBlockType)arg4;

- (id)_startValue;
- (id)_endValue;
- (id)_currentValue;
- (void)_updateWithProgress:(float)arg1;
- (void)_setStartValue:(id)arg1;
- (void)_setCurrentValue:(id)arg1;
- (id)valueByAddingCurrentValueToValue:(id)arg1;
- (void)_setEndValue:(id)arg1;

@end
