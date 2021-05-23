/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWorkspaceTransaction.h>

#import <SpringBoard/Swift-Protocol.h>

@class FBDisplayLayoutTransition, FBSynchronizedTransactionGroup, NSMutableSet, NSSet, NSString, SBSceneBackgroundedStatusAssertion, SBSceneLayoutSynchronizeTransitionTransaction, SBWorkspaceApplicationSceneTransitionContext, SBWorkspaceTransitionRequest;

@protocol FBSynchronizedTransactionDelegate, SBSceneLayoutWorkspaceTransactionDelegate;

@interface SBSceneLayoutWorkspaceTransaction : SBWorkspaceTransaction <Swift>

{
    id <SBSceneLayoutWorkspaceTransactionDelegate> _delegate;
    unsigned long long _options;
    FBDisplayLayoutTransition *_fbLayoutTransition;
    _Bool _isTransitioning;
    _Bool _transitionFailed;
    _Bool _delegateTransitionComplete;
    _Bool _performSceneUpdates;
    _Bool _waitForSceneUpdates;
    _Bool _waitingForSynchronizedCommit;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizePrepareTransitionTransaction;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizeSendActivationResultTransaction;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizeBeginTransitionTransaction;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizeAddSlavesTransaction;
    SBWorkspaceApplicationSceneTransitionContext *_transitionContext;
    FBSynchronizedTransactionGroup *_sceneUpdateTransactionGroup;
    SBSceneBackgroundedStatusAssertion *_scenesBackgroundedStatusAssertion;
    NSMutableSet *_updateTransactions;
    NSMutableSet *_fromAppSceneEntities;
    NSMutableSet *_foregroundingAppSceneEntities;
    NSMutableSet *_backgroundingAppSceneEntities;
    NSMutableSet *_scenesToBackground;
    SBWorkspaceTransitionRequest *_interruptingTransitionRequest;
    id <FBSynchronizedTransactionDelegate> _synchronizationDelegate;
}

@property (weak, nonatomic) id <SBSceneLayoutWorkspaceTransactionDelegate> delegate;
@property (nonatomic) unsigned long long options;
@property (nonatomic, readonly, getter=isTransitioning) _Bool transitioning;
@property (nonatomic, readonly) SBWorkspaceApplicationSceneTransitionContext *transitionContext;
@property (nonatomic, readonly) NSSet *sceneUpdateTransactions;
@property (nonatomic, readonly) NSSet *toApplicationSceneEntities;
@property (nonatomic, readonly) NSSet *fromApplicationSceneEntities;
@property (nonatomic, readonly) NSSet *foregroundingApplicationSceneEntities;
@property (nonatomic, readonly) NSSet *backgroundingApplicationSceneEntities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <FBSynchronizedTransactionDelegate> synchronizationDelegate;

- (void)dealloc;
- (void)_willBegin;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_willFailWithReason:(id)arg1;
- (void)_didComplete;
- (void)_willInterruptWithReason:(id)arg1;
- (void)_completeTransition;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (void)transaction:(id)arg1 didCreateScene:(id)arg2;
- (void)transaction:(id)arg1 willUpdateScene:(id)arg2;
- (void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2;
- (void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)performSynchronizedCommit;
- (_Bool)isReadyForSynchronizedCommit;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (_Bool)synchronizedTransactionGroup:(id)arg1 shouldFailForSynchronizedTransaction:(id)arg2;
- (id)sceneManager;
- (void)_performTransition;
- (id)initWithTransitionRequest:(id)arg1;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (void)_sendActivationResultWithSuccess:(_Bool)arg1;
- (void)_captureAppsForTransition;
- (void)_evaluateTransitionCompletion;
- (_Bool)_sceneEntities:(id)arg1 hasEntityRepresentingSceneID:(id)arg2;
- (void)_prepareScenesForSceneUpdates;
- (void)_prepareLayoutTransition;
- (void)_beginLayoutTransition;
- (void)_updateScenesForTransitionCompletion;
- (long long)_orientationForFollowOnRotationIfNeeded;
- (_Bool)_overrideInterfaceOrientationForOrientationMismatch:(long long *)arg1;
- (void)_prepareScenesForTransition;
- (void)_mainDisplayUpdateAggregateDictionaryForLayoutRoleWithApplication:(id)arg1;
- (void)_updateKeyboardContextMaskStyles:(_Bool)arg1;
- (void)_updateAggregateDictionary;

@end
