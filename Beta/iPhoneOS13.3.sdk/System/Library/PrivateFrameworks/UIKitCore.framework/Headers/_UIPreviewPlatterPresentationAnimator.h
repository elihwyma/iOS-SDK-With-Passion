/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UITargetedPreview, UIViewFloatAnimatableProperty, UIViewPropertyAnimator, _UIContextMenuAnimator, _UIContextMenuLayoutArbiterOutput, _UIPortalView, _UIPreviewPlatterPresentationController;

@protocol _UIPreviewPlatterPresentationAnimatorDelegate;

__attribute__((visibility("hidden")))
@interface _UIPreviewPlatterPresentationAnimator : NSObject

{
    _Bool _isDismissTransition;
    _Bool _reparentsInDestinationContainer;
    UITargetedPreview *_sourcePreview;
    id <_UIPreviewPlatterPresentationAnimatorDelegate> _delegate;
    _UIPreviewPlatterPresentationController *_presentationController;
    _UIContextMenuAnimator *_alongsideAnimator;
    unsigned long long _dismissalStyle;
    NSArray *_preferredBackgroundEffects;
    UIViewPropertyAnimator *_backgroundEffectAnimator;
    _UIPortalView *_reparentingPortalView;
    UITargetedPreview *_trackedPreviewForReparenting;
    UIViewFloatAnimatableProperty *_animationProgress;
    CDUnknownBlockType _reparentingAnimationBlock;
    CDUnknownBlockType _backgroundAnimationBlock;
    CDUnknownBlockType _accessoryAnimationBlock;
    _UIContextMenuLayoutArbiterOutput *_expandedLayout;
    struct UIEdgeInsets _preferredBackgroundInsets;
}

@property (weak, nonatomic) _UIPreviewPlatterPresentationController *presentationController;
@property (nonatomic) _Bool isDismissTransition;
@property (retain, nonatomic) UIViewPropertyAnimator *backgroundEffectAnimator;
@property (nonatomic) _Bool reparentsInDestinationContainer;
@property (retain, nonatomic) _UIPortalView *reparentingPortalView;
@property (retain, nonatomic) UITargetedPreview *trackedPreviewForReparenting;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *animationProgress;
@property (copy, nonatomic) CDUnknownBlockType reparentingAnimationBlock;
@property (copy, nonatomic) CDUnknownBlockType backgroundAnimationBlock;
@property (copy, nonatomic) CDUnknownBlockType accessoryAnimationBlock;
@property (retain, nonatomic) _UIContextMenuLayoutArbiterOutput *expandedLayout;
@property (weak, nonatomic) id <_UIPreviewPlatterPresentationAnimatorDelegate> delegate;
@property (retain, nonatomic) _UIContextMenuAnimator *alongsideAnimator;
@property (nonatomic) unsigned long long dismissalStyle;
@property (retain, nonatomic) NSArray *preferredBackgroundEffects;
@property (nonatomic) struct UIEdgeInsets preferredBackgroundInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;

- (void)dealloc;
- (id)_containerView;
- (id)_backgroundView;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)transitionDidEnd:(_Bool)arg1;
- (id)_platterView;
- (id)_actionsView;
- (void)_prepareAnimatablePropertyBasedAnimations;
- (id)_platterTransitionView;
- (void)_installAccessories;
- (_Bool)_isDismissingToDrag;
- (id)_targetedPreviewForDismissalAnimation;
- (void)_prepareReparentingAnimationWithDismissalTarget:(id)arg1;
- (void)_anchorTransitionViewToTargetedPreview:(id)arg1;
- (void)_setBackgroundVisible:(_Bool)arg1;
- (void)_updateAccessoryAttachment:(id)arg1;
- (void)_actuallyPerformTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)_performReduceMotionDisappearanceTransition;
- (void)_performReduceMotionAppearanceTransition;
- (id)initWithPresentationController:(id)arg1 asDismissal:(_Bool)arg2;
- (void)animateForDragSetDown;

@end
