/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIPresentationController;

@interface PLExpandedPlatterTransitioningDelegate : NSObject

{
    UIPresentationController *_presentationController;
}

@property (retain, nonatomic, getter=_presentationController, setter=_setPresentationController:) UIPresentationController *presentationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2;
- (void)viewControllerAnimator:(id)arg1 willBeginDismissalAnimationWithTransitionContext:(id)arg2;

@end
