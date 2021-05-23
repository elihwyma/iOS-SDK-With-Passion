/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransaction.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSAnimationSettings, BSBlockTransaction, BSTransaction, NSMutableArray, NSSet, NSString, SBAnimationStepper, SBApplicationSceneEntity, SBViewControllerTransitionContext, UIView, UIWindow;

@protocol SBUIAnimationControllerTransitionContextProvider, SBViewControllerTransitionCoordinator;

@interface SBUIAnimationController : SBTransaction <Swift>

{
    id <SBUIAnimationControllerTransitionContextProvider> _transitionContextProvider;
    BSBlockTransaction *_animationTransaction;
    BSBlockTransaction *_notifyObserversTransaction;
    BSBlockTransaction *_cleanupTransaction;
    NSSet *_sceneHandlesBeingObserved;
    NSSet *_entitiesToObserve;
    NSSet *_startTransactionDependencies;
    NSMutableArray *_coordinatingChildRelationships;
    NSMutableArray *_steppedCoordinatingChildAnimations;
    SBAnimationStepper *_stepper;
    UIWindow *_transitionWindow;
    UIView *_transitionContainer;
    int _animationState;
    _Bool _didPostBeginAnimationNotification;
    _Bool _didNotifyObserversOfCompletion;
    _Bool _needsCATransactionActivate;
    SBViewControllerTransitionContext *_transition;
    CDUnknownBlockType _animationTransactionCompletion;
}

@property (retain, nonatomic) SBViewControllerTransitionContext *transition;
@property (retain, nonatomic) id <SBUIAnimationControllerTransitionContextProvider> transitionContextProvider;
@property (copy, nonatomic) CDUnknownBlockType animationTransactionCompletion;
@property (nonatomic, readonly) BSTransaction *animationTransaction;
@property (nonatomic, readonly) BSTransaction *notifyObserversTransaction;
@property (nonatomic, readonly) BSTransaction *cleanupTransaction;
@property (nonatomic) _Bool needsCATransactionActivate;
@property (nonatomic, readonly) UIView *containerView;
@property (copy, nonatomic, readonly) NSSet *toApplicationSceneEntities;
@property (nonatomic, readonly) SBApplicationSceneEntity *toApplicationSceneEntity;
@property (copy, nonatomic, readonly) NSSet *fromApplicationSceneEntities;
@property (nonatomic, readonly) SBApplicationSceneEntity *fromApplicationSceneEntity;
@property (nonatomic, readonly) _Bool transitionSupportsCancelling;
@property (nonatomic, readonly) _Bool transitionSupportsRestarting;
@property (nonatomic, readonly) _Bool transitionWasCancelled;
@property (nonatomic, readonly) _Bool transitionWasRestarted;
@property (nonatomic, readonly, getter=isInteractive) _Bool interactive;
@property (nonatomic, readonly) id <SBViewControllerTransitionCoordinator> transitionCoordinator;
@property (nonatomic, readonly) BSAnimationSettings *animationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) _Bool wantsInteractiveStart;
@property (nonatomic, readonly, getter=isStepped) _Bool stepped;
@property (nonatomic) double stepPercentage;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_addDebugLogCategory:(id)arg1;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (void)_willComplete;
- (void)_didInterruptWithReason:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)_setHidden:(_Bool)arg1;
- (void)_setAnimationState:(int)arg1;
- (int)_animationState;
- (void)transitionDidFinish:(id)arg1;
- (_Bool)animating;
- (id)_animationIdentifier;
- (void)cancelTransition;
- (id)_transitionAnimator;
- (void)_startAnimation;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (id)_displayIdentity;
- (void)_prepareAnimation;
- (void)_cleanupAnimation;
- (void)restartTransition;
- (_Bool)isFinishedAnimating;
- (_Bool)_willAnimate;
- (_Bool)isReasonableMomentToInterrupt;
- (void)_enumerateCoordinatingAnimationsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)_getTransitionWindow;
- (void)_noteAnimationDidFinish;
- (_Bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (_Bool)_shouldDismissBanner;
- (_Bool)isFluidSwitcherAnimationController;
- (void)addCoordinatingChildTransaction:(id)arg1 withSchedulingPolicy:(unsigned long long)arg2;
- (_Bool)shouldResignActiveForAnimation;
- (void)_noteAnimationDidFail;
- (_Bool)__animationShouldStart;
- (void)__startAnimation;
- (void)__reportAnimationCompletion;
- (void)__cleanupAnimation;
- (void)_cleanupEntityObservers;
- (void)_enumerateCoordinatingAnimationsWithSchedulingPolicy:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)_abortAnimation;
- (id)coordinatingAnimationControllers;
- (void)_enumerateCoordinatingChildRelationshipsWithBlock:(CDUnknownBlockType)arg1;
- (id)__alertItemsController;
- (id)_viewsForAnimationStepping;
- (void)_willSetupStartDependencies;
- (id)_progressDependencies;
- (id)__startTransactionDependencyForEntity:(id)arg1;
- (_Bool)__wantsInitialProgressStateChange;
- (void)_application:(id)arg1 processStateDidChange:(id)arg2;
- (void)_sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)_willBeginWaitingForStartDependencies;
- (void)_registerEntityObserversIfNecessary;
- (void)__abortAnimation;
- (void)_notifyObserversOfAnimationCompletion;
- (_Bool)_isNullAnimation;
- (void)_entityObserverProgressDidChange:(CDUnknownBlockType)arg1 waitForSceneContentAvailableTransactionBlock:(CDUnknownBlockType)arg2;
- (void)__noteAnimationDidTerminate;
- (void)_processStateDidChange:(id)arg1;
- (void)finishSteppingForwardToEnd;
- (void)finishSteppingBackwardToStart;
- (void)addSteppedCoordinatingChildAnimation:(id)arg1;
- (void)delayCleanupUntilTransactionFinishes:(id)arg1;
- (void)stopDelayingCleanupForTransaction:(id)arg1;
- (void)delayAnimationUntilTransactionFinishes:(id)arg1;
- (void)stopDelayingAnimationForTransaction:(id)arg1;
- (_Bool)waitingToStart;
- (void)enableSteppingWithAnimationSettings:(id)arg1;
- (void)_noteAnimationDidRevealApplication;

@end
