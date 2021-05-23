/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/POPPropertyAnimation.h>

@interface POPSpringAnimation : POPPropertyAnimation

@property (copy, nonatomic) id velocity;
@property (nonatomic) double springBounciness;
@property (nonatomic) double springSpeed;
@property (nonatomic) double dynamicsTension;
@property (nonatomic) double dynamicsFriction;
@property (nonatomic) double dynamicsMass;

+ (id)animation;
+ (id)animationWithPropertyNamed:(id)arg1;
+ (void)convertBounciness:(double)arg1 speed:(double)arg2 toTension:(double *)arg3 friction:(double *)arg4 mass:(double *)arg5;
+ (void)convertTension:(double)arg1 friction:(double)arg2 toBounciness:(double *)arg3 speed:(double *)arg4;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (SpringSolver_fe820e75 *)solver;
- (void)setSolver:(SpringSolver_fe820e75 *)arg1;
- (void)_initState;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (void)_updatedDynamicsTension;
- (void)_updatedDynamicsFriction;
- (void)_updatedDynamicsMass;

@end
