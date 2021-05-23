/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/POPPropertyAnimation.h>

@interface POPDecayAnimation : POPPropertyAnimation

@property (copy, nonatomic) id velocity;
@property (copy, nonatomic, readonly) id originalVelocity;
@property (nonatomic) double deceleration;
@property (nonatomic, readonly) double duration;

+ (id)animation;
+ (id)animationWithPropertyNamed:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setFromValue:(id)arg1;
- (id)toValue;
- (void)setToValue:(id)arg1;
- (void)_initState;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (id)reversedVelocity;
- (void)_ensureComputedProperties;
- (void)_invalidateComputedProperties;

@end
