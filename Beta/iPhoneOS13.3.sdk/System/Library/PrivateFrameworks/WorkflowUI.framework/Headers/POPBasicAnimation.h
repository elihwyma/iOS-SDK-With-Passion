/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/POPPropertyAnimation.h>

@class CAMediaTimingFunction;

@interface POPBasicAnimation : POPPropertyAnimation

@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

+ (id)animation;
+ (id)defaultAnimation;
+ (id)animationWithPropertyNamed:(id)arg1;
+ (id)linearAnimation;
+ (id)easeInAnimation;
+ (id)easeOutAnimation;
+ (id)easeInEaseOutAnimation;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_initState;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;

@end
