/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableSet, NSString, PXVerticalSwipeGestureRecognizerHelper;

@interface PXUIViewControllerTransitionManager : NSObject

{
    NSMapTable *__pinchGestureRecognizers;
    NSMapTable *_panGestureRecognizers;
    NSMapTable *__lastViewControllerTransitions;
    NSMutableSet *__pinchTransitions;
    NSMutableSet *_swipeDownTransitions;
    PXVerticalSwipeGestureRecognizerHelper *_swipeDownGestureRecognizerHelper;
}

@property (nonatomic, readonly) NSMapTable *_pinchGestureRecognizers;
@property (nonatomic, readonly) NSMapTable *panGestureRecognizers;
@property (nonatomic, readonly) NSMapTable *_lastViewControllerTransitions;
@property (nonatomic, readonly) NSMutableSet *_pinchTransitions;
@property (nonatomic, readonly) NSMutableSet *swipeDownTransitions;
@property (nonatomic, readonly) PXVerticalSwipeGestureRecognizerHelper *swipeDownGestureRecognizerHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (_Bool)verticalSwipeGestureRecognizerHelper:(id)arg1 shouldRecognizeSwipeDownGestureRecognizer:(id)arg2;
- (id)lastTransitionForViewController:(id)arg1;
- (void)setLastTransition:(id)arg1 forViewController:(id)arg2;
- (id)_pinchGestureRecognizerForViewController:(id)arg1;
- (id)_panGestureRecognizerForViewController:(id)arg1;
- (id)_windowForViewController:(id)arg1;
- (void)_handlePinchGestureRecognizer:(id)arg1;
- (id)_navigationControllerAtLocationOfGestureRecognizer:(id)arg1;
- (_Bool)_getMasterViewController:(out id *)arg1 detailViewController:(out id *)arg2 forPopAtLocationOfGestureRecognizer:(id)arg3;
- (id)_deepestDescendantOfViewController:(id)arg1 atLocationOfGestureRecognizer:(id)arg2;
- (id)_pinchTransitionForGestureRecognizer:(id)arg1;
- (id)_swipeDownTransitionForGestureRecognizer:(id)arg1;
- (id)navigationControllerShouldUseBuiltinInteractionController:(id)arg1;

@end
