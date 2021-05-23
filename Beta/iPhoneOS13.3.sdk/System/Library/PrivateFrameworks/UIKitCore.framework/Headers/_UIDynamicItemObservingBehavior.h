/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicItemBehavior.h>

__attribute__((visibility("hidden")))
@interface _UIDynamicItemObservingBehavior : UIDynamicItemBehavior

{
    _Bool _enabled;
    double _completionHandlerInvocationDelay;
    CDUnknownBlockType _completionHandler;
    long long _frameCount;
    struct CGVector _targetVelocity;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) long long frameCount;
@property (nonatomic) struct CGVector targetVelocity;
@property (nonatomic) double completionHandlerInvocationDelay;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (void)cancel;
- (void)willMoveToAnimator:(id)arg1;

@end
