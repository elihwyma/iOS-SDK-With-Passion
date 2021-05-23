/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewControllerTransition.h>

@class NSString;

@interface PUModalTransition : PUViewControllerTransition

{
    long long __operation;
}

@property (nonatomic, setter=_setOperation:) long long _operation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)presentingViewController;
- (void)animateTransition:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)transitionWillPresentInteractively:(_Bool)arg1;
- (void)transitionWillDismissInteractively:(_Bool)arg1;
- (void)completeInteractivePresentTransitionFinished:(_Bool)arg1;
- (void)completeInteractiveDismissTransitionFinished:(_Bool)arg1;
- (void)imageModulationIntensityDidChange;

@end
