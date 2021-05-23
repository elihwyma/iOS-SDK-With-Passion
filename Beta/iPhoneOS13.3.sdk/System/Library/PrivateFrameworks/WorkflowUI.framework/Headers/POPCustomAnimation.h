/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/POPAnimation.h>

@interface POPCustomAnimation : POPAnimation

{
    double _currentTime;
    double _elapsedTime;
    CDUnknownBlockType _animate;
}

@property (copy, nonatomic) CDUnknownBlockType animate;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic, readonly) double elapsedTime;

+ (id)animationWithBlock:(CDUnknownBlockType)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (double)beginTime;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (_Bool)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3;

@end
