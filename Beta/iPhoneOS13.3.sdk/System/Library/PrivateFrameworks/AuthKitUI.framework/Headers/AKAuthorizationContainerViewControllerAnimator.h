/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AKAuthorizationContainerViewControllerAnimator : NSObject

{
    _Bool _presenting;
}

@property (nonatomic, readonly, getter=isPresenting) _Bool presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithPresenting:(_Bool)arg1;
- (id)_viewControllerForTransitionContext:(id)arg1;

@end
