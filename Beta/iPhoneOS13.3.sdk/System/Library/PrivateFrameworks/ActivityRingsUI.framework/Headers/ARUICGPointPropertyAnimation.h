/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <ActivityRingsUI/ARUIAnimatableObjectPropertyAnimation.h>

@interface ARUICGPointPropertyAnimation : ARUIAnimatableObjectPropertyAnimation

{
    struct CGPoint _startValue;
    struct CGPoint _endValue;
    struct CGPoint _currentValue;
}

@property (nonatomic, readonly) struct CGPoint startValue;
@property (nonatomic, readonly) struct CGPoint endValue;
@property (nonatomic, readonly) struct CGPoint currentValue;

+ (id)animationWithEndingCGPointValue:(struct CGPoint)arg1 duration:(double)arg2 timingFunction:(id)arg3 completion:(CDUnknownBlockType)arg4;

- (id)_startValue;
- (id)_endValue;
- (id)_currentValue;
- (void)_updateWithProgress:(float)arg1;
- (void)_setStartValue:(id)arg1;
- (void)_setCurrentValue:(id)arg1;
- (id)valueByAddingCurrentValueToValue:(id)arg1;
- (void)_setEndValue:(id)arg1;

@end
