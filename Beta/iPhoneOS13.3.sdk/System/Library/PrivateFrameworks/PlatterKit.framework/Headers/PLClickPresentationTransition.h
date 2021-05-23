/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <Foundation/NSObject.h>

@class MTMaterialView, NSString, PLViewControllerAnimator, UITargetedPreview, UIViewPropertyAnimator, _PLViewControllerOneToOneTransitionContext;

@protocol UIViewControllerTransitioningDelegate;

@interface PLClickPresentationTransition : NSObject

{
    id <UIViewControllerTransitioningDelegate> _transitionDelegate;
    _PLViewControllerOneToOneTransitionContext *_transitionContext;
    PLViewControllerAnimator *_animator;
    CDUnknownBlockType _completion;
    _Bool _propagatesPresentingViewTransform;
    MTMaterialView *_backgroundView;
}

@property (weak, nonatomic) MTMaterialView *backgroundView;
@property (nonatomic) _Bool propagatesPresentingViewTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;

- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)transitionDidEnd:(_Bool)arg1;
- (id)_animator;
- (id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)updateBackgroundViewForTransition;
- (id)_newAnimator;

@end
