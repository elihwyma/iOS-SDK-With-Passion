/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIAttachmentBehavior, UICollisionBehavior, UIDynamicAnimator, UIDynamicItemBehavior, UIView, _UIDynamicItemObservingBehavior, _UIPlatterMenuPanningTransformer, _UIPlatterMenuSnapBehavior, _UIStatesFeedbackGenerator;

@protocol UIDynamicItem, _UIPlatterMenuDynamicsControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIPlatterMenuDynamicsController : NSObject

{
    _Bool _leadingSwipeActionViewSelected;
    _Bool _trailingSwipeActionViewSelected;
    _Bool _isCurrentlyUnderDirectManipulation;
    id <_UIPlatterMenuDynamicsControllerDelegate> _delegate;
    UIView *_containerView;
    UIView *_platterView;
    UIView *_menuView;
    id <UIDynamicItem> _platterItem;
    _UIPlatterMenuPanningTransformer *_panningLockTransformer;
    long long _state;
    double _leadingSwipeEdgeMultiplier;
    double _trailingSwipeEdgeMultiplier;
    UIDynamicAnimator *_animator;
    UIDynamicItemBehavior *_menuItemBehavior;
    UIDynamicItemBehavior *_platterItemBehavior;
    UIAttachmentBehavior *_platterMenuSlidingAttachmentBehavior;
    UIAttachmentBehavior *_platterMenuAttachmentBehavior;
    UIAttachmentBehavior *_gestureAttachmentBehavior;
    _UIPlatterMenuSnapBehavior *_platterSnapBehavior;
    _UIPlatterMenuSnapBehavior *_menuPresentedSnapBehavior;
    _UIPlatterMenuSnapBehavior *_menuDismissedSnapBehavior;
    UIDynamicItemBehavior *_noRotationBehavior;
    UIAttachmentBehavior *_menuVerticalLockAttachment;
    UICollisionBehavior *_platterMenuCollisionBounds;
    _UIDynamicItemObservingBehavior *_observingBehavior;
    long long _didPresentCount;
    _UIStatesFeedbackGenerator *_swipeFeedbackGenerator;
    struct CGPoint _initialTouchPoint;
}

@property (weak, nonatomic) id <_UIPlatterMenuDynamicsControllerDelegate> delegate;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *platterView;
@property (weak, nonatomic) UIView *menuView;
@property (weak, nonatomic) id <UIDynamicItem> platterItem;
@property (retain, nonatomic) _UIPlatterMenuPanningTransformer *panningLockTransformer;
@property (nonatomic) long long state;
@property (nonatomic) struct CGPoint initialTouchPoint;
@property (nonatomic) double leadingSwipeEdgeMultiplier;
@property (nonatomic) double trailingSwipeEdgeMultiplier;
@property (nonatomic) _Bool isCurrentlyUnderDirectManipulation;
@property (retain, nonatomic) UIDynamicAnimator *animator;
@property (retain, nonatomic) UIDynamicItemBehavior *menuItemBehavior;
@property (retain, nonatomic) UIDynamicItemBehavior *platterItemBehavior;
@property (retain, nonatomic) UIAttachmentBehavior *platterMenuSlidingAttachmentBehavior;
@property (retain, nonatomic) UIAttachmentBehavior *platterMenuAttachmentBehavior;
@property (retain, nonatomic) UIAttachmentBehavior *gestureAttachmentBehavior;
@property (retain, nonatomic) _UIPlatterMenuSnapBehavior *platterSnapBehavior;
@property (retain, nonatomic) _UIPlatterMenuSnapBehavior *menuPresentedSnapBehavior;
@property (retain, nonatomic) _UIPlatterMenuSnapBehavior *menuDismissedSnapBehavior;
@property (retain, nonatomic) UIDynamicItemBehavior *noRotationBehavior;
@property (retain, nonatomic) UIAttachmentBehavior *menuVerticalLockAttachment;
@property (retain, nonatomic) UICollisionBehavior *platterMenuCollisionBounds;
@property (retain, nonatomic) _UIDynamicItemObservingBehavior *observingBehavior;
@property (nonatomic) long long didPresentCount;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *swipeFeedbackGenerator;
@property (nonatomic, readonly) struct CGVector currentTranslation;
@property (nonatomic, readonly) struct CGVector currentVelocity;
@property (nonatomic) _Bool leadingSwipeActionViewSelected;
@property (nonatomic) _Bool trailingSwipeActionViewSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_configureAnimator;
- (void)_configureFeedbackGenerator;
- (void)_activateFeedbackIfNeeded;
- (void)_updateSwipeEdgeMultipliersIfNeededForTouchPosition:(struct CGPoint)arg1;
- (void)_deactivateFeedbackIfNeeded;
- (void)lockIntoYAxis;
- (void)performActionsAndEnterState:(long long)arg1 velocity:(struct CGVector)arg2 underDirectManipulation:(_Bool)arg3;
- (void)resetAnimator;
- (void)resetAnimatorToDefaultBehaviors;
- (void)addBehaviorIfNotPresent:(id)arg1;
- (void)performActionsAndEnterState:(long long)arg1;
- (struct CGVector)modifiedOffsetForPosition:(struct CGPoint)arg1 offset:(struct CGVector)arg2 touchPosition:(struct CGPoint)arg3 axisLock:(int)arg4;
- (struct CGPoint)centerForMenuPresentedRelativeToCurrentPlatter;
- (void)_positionSwipeActionViewsForCurrentPlatterViewPosition;
- (long long)_stateForPosition:(struct CGPoint)arg1 offset:(struct CGVector)arg2 velocity:(struct CGVector)arg3;
- (_Bool)_isPlatterInYLockedPosition;
- (struct CGPoint)menuCenter;
- (void)beginTransitionWithAnimatorUsingBehaviors:(id)arg1 observedItems:(id)arg2 stateIfCompleted:(long long)arg3;
- (void)stopObservingBehavior;
- (struct CGPoint)centerForCurrentPlatterPosition;
- (_Bool)isDefaultAnimatorBehavior:(id)arg1;
- (void)_fireConfirmFeedbackIfNeededForInitialSelectionState:(_Bool)arg1 finalSelectionState:(_Bool)arg2;
- (void)panningTransformer:(id)arg1 didBeginPanToTransformedPosition:(struct CGPoint)arg2;
- (void)panningTransformer:(id)arg1 didPanToTransformedPosition:(struct CGPoint)arg2 offsetFromPrevious:(struct CGVector)arg3 touchPosition:(struct CGPoint)arg4 velocity:(struct CGVector)arg5 didChangeAxis:(_Bool)arg6 axisLock:(int)arg7;
- (void)panningTransformer:(id)arg1 didEndPanToTransformedPosition:(struct CGPoint)arg2 offsetFromPrevious:(struct CGVector)arg3 velocity:(struct CGVector)arg4;
- (void)panningTransformer:(id)arg1 didEnterTransitionNotchForTransformedPosition:(struct CGPoint)arg2;
- (id)initWithContainerView:(id)arg1 platterView:(id)arg2 menuView:(id)arg3 delegate:(id)arg4;
- (void)didBeginPanningWithPoint:(struct CGPoint)arg1;
- (void)didPanWithPoint:(struct CGPoint)arg1;
- (void)didEndPanningWithPoint:(struct CGPoint)arg1;
- (void)toggleAnimatorDebugState;
- (_Bool)isMenuPresented;
- (_Bool)isMenuPresenting;
- (_Bool)isSelectingSwipeAction;
- (_Bool)platterPanned;
- (void)_beginInYLockedStatePresented;
- (void)_animateToPlatterPresentedWithVelocity:(struct CGVector)arg1;
- (void)_animateToPlatterDismissedWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasBeenPresented;
- (struct CGPoint)platterCenter;

@end
