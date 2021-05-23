/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIDragItem, UITargetedDragPreview, UIView, UIViewPropertyAnimator, UIWindow, _DUIVisibleDroppedItem, _UIPlatterContainerView, _UIPlatterView, _UIPortalView;

@protocol _UIDragSetDownAnimationTarget, _UIDragSetDownItemAnimationDelegate;

__attribute__((visibility("hidden")))
@interface _UIDragSetDownItemAnimation : NSObject

{
    _Bool _reachedTarget;
    _Bool _done;
    _Bool _defaultAnimation;
    _Bool _sourceAnimation;
    _Bool _hasStartedSpringAnimation;
    _Bool _midwayToTarget;
    _Bool _almostToTarget;
    _Bool _reparentingCrossfadeComplete;
    _Bool _updatedPreviewWasAdded;
    int _animationCount;
    UIDragItem *_item;
    _DUIVisibleDroppedItem *_droppedItem;
    id <_UIDragSetDownItemAnimationDelegate> _delegate;
    UIWindow *_window;
    id <_UIDragSetDownAnimationTarget> _visualTarget;
    UITargetedDragPreview *_targetedDropPreview;
    UITargetedDragPreview *_updatedTargetedDropPreview;
    double _initialDistanceFromTargetFrame;
    UIViewPropertyAnimator *_propertyAnimator;
    CDUnknownBlockType _completionHandler;
    UIView *_retargetingContainerView;
    _UIPortalView *_retargetingContainerPortalView;
    _UIPlatterView *_appPlatterView;
    _UIPlatterView *_updatedAppPlatterView;
    _UIPlatterView *_druidPlatterView;
    _UIPlatterContainerView *_platterContainerView;
    CDUnknownBlockType _positionHandler;
    CDUnknownBlockType _morphHandler;
    CDUnknownBlockType _midpointHandler;
    CDUnknownBlockType _nonAnimatedMidpointHandler;
    CDUnknownBlockType _nearCompletionHandler;
    struct CGPoint _center;
    struct CGPoint _initialVelocity;
    struct CGPoint _initialTargetVelocity;
    struct CGRect _targetFrame;
}

@property (weak, nonatomic) id <_UIDragSetDownItemAnimationDelegate> delegate;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) id <_UIDragSetDownAnimationTarget> visualTarget;
@property (retain, nonatomic) UITargetedDragPreview *targetedDropPreview;
@property (retain, nonatomic) UITargetedDragPreview *updatedTargetedDropPreview;
@property (nonatomic) struct CGPoint center;
@property (nonatomic) double initialDistanceFromTargetFrame;
@property (nonatomic) struct CGRect targetFrame;
@property (nonatomic) _Bool defaultAnimation;
@property (nonatomic) _Bool sourceAnimation;
@property (retain, nonatomic) UIViewPropertyAnimator *propertyAnimator;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool hasStartedSpringAnimation;
@property (nonatomic) _Bool midwayToTarget;
@property (nonatomic) _Bool almostToTarget;
@property (nonatomic) _Bool reparentingCrossfadeComplete;
@property (nonatomic) _Bool updatedPreviewWasAdded;
@property (nonatomic) int animationCount;
@property (nonatomic, readonly) long long previewMode;
@property (nonatomic) struct CGPoint initialVelocity;
@property (nonatomic) struct CGPoint initialTargetVelocity;
@property (retain, nonatomic) UIView *retargetingContainerView;
@property (retain, nonatomic) _UIPortalView *retargetingContainerPortalView;
@property (retain, nonatomic) _UIPlatterView *appPlatterView;
@property (retain, nonatomic) _UIPlatterView *updatedAppPlatterView;
@property (retain, nonatomic) _UIPlatterView *druidPlatterView;
@property (retain, nonatomic) _UIPlatterContainerView *platterContainerView;
@property (copy, nonatomic) CDUnknownBlockType positionHandler;
@property (copy, nonatomic) CDUnknownBlockType morphHandler;
@property (copy, nonatomic) CDUnknownBlockType midpointHandler;
@property (copy, nonatomic) CDUnknownBlockType nonAnimatedMidpointHandler;
@property (copy, nonatomic) CDUnknownBlockType nearCompletionHandler;
@property (nonatomic, readonly) UIDragItem *item;
@property (nonatomic, readonly) _DUIVisibleDroppedItem *droppedItem;
@property (nonatomic, readonly) _Bool reachedTarget;
@property (nonatomic, readonly) _Bool done;

- (id)initWithDragItem:(id)arg1 droppedItem:(id)arg2 window:(id)arg3 defaultAnimation:(_Bool)arg4 sourceAnimation:(_Bool)arg5 delegate:(id)arg6;
- (void)prepareToBeginAnimation;
- (void)updateDroppedItem:(id)arg1;
- (void)updateTargetedDropPreview:(id)arg1;
- (void)beginAnimation;
- (void)updateAnimationTargeting;
- (void)animationCompleted;
- (void)prepareAnimationInWindow;
- (void)configureAnimation;
- (void)_setCenterAndVelocityFromDroppedItem:(id)arg1;
- (void)configureSystemDefaultAnimation;
- (void)configureCrossfadingAnimationToTargetedPreview;
- (void)animationReachedTarget;
- (_Bool)needsReparenting;
- (void)reparentRetargetingContainerViewInTargetContainer;
- (CDUnknownBlockType)animationCompletionHandler;
- (void)performTrackingAnimations:(CDUnknownBlockType)arg1;
- (void)performSpringAnimations:(CDUnknownBlockType)arg1;
- (struct CGRect)getCurrentTargetFrame;
- (double)estimatedFractionCompleteOfAnimation;

@end
