/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface SVVideoAccessoryBarItemTransitionContext : NSObject

{
    _Bool _transitionWasCancelled;
    UIView *_fromView;
    UIView *_toView;
    UIView *_containerView;
    CDUnknownBlockType _completionBlock;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType completionBlock;
@property (nonatomic) _Bool transitionWasCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *fromView;
@property (nonatomic, readonly) UIView *toView;
@property (nonatomic, readonly) UIView *containerView;

- (void)completeTransition:(_Bool)arg1;
- (id)initWithContainerView:(id)arg1 fromView:(id)arg2 toView:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
