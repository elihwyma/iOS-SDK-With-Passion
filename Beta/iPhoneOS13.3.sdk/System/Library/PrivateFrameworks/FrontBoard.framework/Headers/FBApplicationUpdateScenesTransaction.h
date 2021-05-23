/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/FBSynchronizedTransactionGroup.h>

@class FBApplicationProcess, FBApplicationProcessLaunchTransaction, NSMutableArray, NSString, RBSProcessIdentity;

@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup

{
    RBSProcessIdentity *_identity;
    FBApplicationProcessLaunchTransaction *_processLaunchTransaction;
    _Bool _processLaunched;
    _Bool _waitsForSceneCommits;
    NSMutableArray *_updateSceneTransactions;
    NSMutableArray *_pendingUpdateSceneBlocks;
}

@property (nonatomic, readonly) FBApplicationProcess *process;
@property (nonatomic) _Bool waitsForSceneCommits;
@property (nonatomic, readonly) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)_canBeInterrupted;
- (_Bool)_shouldFailForChildTransaction:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_willAddChildTransaction:(id)arg1;
- (void)_didRemoveChildTransaction:(id)arg1;
- (void)_willFailWithReason:(id)arg1;
- (void)_didComplete;
- (void)_willInterruptWithReason:(id)arg1;
- (id)initWithProcessIdentity:(id)arg1 executionContextProvider:(CDUnknownBlockType)arg2;
- (void)_updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (void)_executeSceneUpdatesIfAppropriate;
- (void)_performSynchronizedCommit:(id)arg1;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (void)_noteWillCommitUpdateForScene:(id)arg1;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (void)updateSceneTransactionDidCreateScene:(id)arg1;
- (void)updateSceneTransactionWillUpdateScene:(id)arg1;
- (void)updateSceneTransactionWillCommitUpdate:(id)arg1;
- (void)updateSceneTransactionDidCommitUpdate:(id)arg1;
- (id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(CDUnknownBlockType)arg2;
- (void)updateSceneWithIdentifier:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (void)updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;

@end
