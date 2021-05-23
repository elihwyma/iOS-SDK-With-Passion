/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, PUImportOneUpTransitionItem, PUPhotoPinchGestureRecognizer, PXPinchTracker, PXSwipeDownTracker, UIPanGestureRecognizer, UIViewPropertyAnimator;

@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface PUImportOneUpModalTransition : NSObject

{
    UIViewPropertyAnimator *_transitionAnimator;
    PUPhotoPinchGestureRecognizer *_pinchGestureRecognizer;
    PXPinchTracker *_pinchTracker;
    UIPanGestureRecognizer *_panGestureRecognizer;
    PXSwipeDownTracker *_swipeDownTracker;
    long long _activeGesture;
    long long _operation;
    UIViewPropertyAnimator *_floatingItemsAnimator;
    id <UIViewControllerContextTransitioning> _context;
    NSArray *_floatingItems;
    PUImportOneUpTransitionItem *_manipulatedFloatingItem;
    double _startingAnimationProgress;
}

@property (nonatomic, readonly) PUPhotoPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, readonly) PXPinchTracker *pinchTracker;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, readonly) PXSwipeDownTracker *swipeDownTracker;
@property (nonatomic) long long activeGesture;
@property (nonatomic, readonly) long long operation;
@property (retain, nonatomic) UIViewPropertyAnimator *transitionAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *floatingItemsAnimator;
@property (retain, nonatomic) id <UIViewControllerContextTransitioning> context;
@property (retain, nonatomic) NSArray *floatingItems;
@property (retain, nonatomic) PUImportOneUpTransitionItem *manipulatedFloatingItem;
@property (nonatomic) double startingAnimationProgress;

+ (struct CGSize)scaledSizeForTargetSize:(struct CGSize)arg1 aspectFillingIntoSize:(struct CGSize)arg2;
+ (id)propertyAnimatorWithInitialVelocity:(struct CGVector)arg1 forOperation:(long long)arg2 inDirection:(long long)arg3;
+ (id)transitioningObjectInViewController:(id)arg1;
+ (double)defaultAnimationDurationForOperation:(long long)arg1;

- (void)pauseAnimation;
- (void)startTransition;
- (id)initWithOperation:(long long)arg1 transitionContext:(id)arg2 pinchGestureRecognizer:(id)arg3 panGestureRecognizer:(id)arg4 startsInteractive:(_Bool)arg5;
- (void)handleTransitionComplete:(long long)arg1;
- (void)prepareFloatingItemsForAnimation;
- (void)animateToPosition:(long long)arg1;
- (void)configureFloatingItemForInteractiveTracking;
- (void)updateTransitionWithPinchGestureRecognizer:(id)arg1;
- (void)updateTransitionWithPanGestureRecognizer:(id)arg1;
- (void)handleTapHoldGesture:(id)arg1;
- (double)currentProgressForFloatingItem:(id)arg1 atSize:(struct CGSize)arg2 inDirection:(long long)arg3;
- (struct CGVector)unitVelocityForDisplayVelocity:(struct PXDisplayVelocity)arg1;
- (void)endInteraction;
- (long long)animatingPositionForPinchTracker:(id)arg1;
- (long long)animatingPositionForSwipeDownTracker:(id)arg1;
- (_Bool)continuousGestureRecognizerIsActive:(id)arg1;

@end
