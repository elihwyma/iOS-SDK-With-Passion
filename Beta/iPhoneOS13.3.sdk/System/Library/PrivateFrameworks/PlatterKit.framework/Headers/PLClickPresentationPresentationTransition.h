/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <PlatterKit/PLClickPresentationTransition.h>

@interface PLClickPresentationPresentationTransition : PLClickPresentationTransition

@property (nonatomic, readonly) struct CGAffineTransform targetTransform;

- (id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)updateBackgroundViewForTransition;
- (id)_newAnimator;

@end
