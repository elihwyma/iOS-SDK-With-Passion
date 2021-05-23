/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransaction.h>

@class FBSDisplayConfiguration, FBSDisplayIdentity, SBLayoutStateTransitionCoordinator, SBSceneLayoutViewController, SBSceneManager, SBUIAnimationController, SBWorkspaceTransitionRequest;

@interface SBWorkspaceTransaction : SBTransaction

{
    SBUIAnimationController *_suggestedAnimationController;
    SBWorkspaceTransitionRequest *_transitionRequestForPendingInterruption;
    SBSceneManager *_sceneManager;
    _Bool _clearsCompletionAsynchronously;
    SBWorkspaceTransitionRequest *_transitionRequest;
    SBSceneLayoutViewController *_layoutController;
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
}

@property (nonatomic, readonly) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (nonatomic, readonly) SBSceneManager *sceneManager;
@property (nonatomic) _Bool clearsCompletionAsynchronously;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, readonly) SBWorkspaceTransitionRequest *transitionRequest;
@property (nonatomic, readonly) SBSceneLayoutViewController *layoutController;
@property (retain, nonatomic) SBUIAnimationController *suggestedAnimationController;

- (id)init;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (id)initWithTransitionRequest:(id)arg1;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (void)interruptForTransitionRequest:(id)arg1;
- (_Bool)_isInterruptingForTransitionRequest;
- (id)_transitionRequestForInterruption;
- (void)_willInterruptForTransitionRequest:(id)arg1;
- (void)_didInterruptForTransitionRequest:(id)arg1;
- (void)_performDeviceCoherencyCheck;
- (id)_childWorkspaceTransactions;
- (void)keepAliveForAsyncBlock:(CDUnknownBlockType)arg1;

@end
