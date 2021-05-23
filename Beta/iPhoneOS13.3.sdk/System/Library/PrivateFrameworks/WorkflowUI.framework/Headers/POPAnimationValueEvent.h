/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/POPAnimationEvent.h>

@interface POPAnimationValueEvent : POPAnimationEvent

{
    id _value;
    id _velocity;
}

@property (retain, nonatomic) id velocity;
@property (nonatomic, readonly) id value;

- (id)initWithType:(unsigned long long)arg1 time:(double)arg2 value:(id)arg3;
- (void)_appendDescription:(id)arg1;

@end
