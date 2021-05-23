/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/FBWorkspaceScene.h>

@class NSMutableArray, NSMutableSet, RBSAssertion;

@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene

{
    NSMutableSet *_allWatchdogs;
    NSMutableArray *_watchdogStack;
    unsigned long long _inFlightUpdateCount;
    RBSAssertion *_activeFGAssertion;
    RBSAssertion *_activeBGAssertion;
    RBSAssertion *_inactiveFGAssertion;
    unsigned char _lifecycleState;
    unsigned char _assertionState;
    _Bool _createResponseReceived;
}

- (void)dealloc;
- (id)initWithParentWorkspace:(id)arg1 host:(id)arg2;
- (void)_workspaceQueue_invalidate;
- (void)_handleDidUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleInvalidationWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_workspaceQueue_cancelAllWatchdogTimers;
- (unsigned char)_workspaceQueue_determineSceneActionFromSettings:(id)arg1 toSettings:(id)arg2;
- (void)_workspaceQueue_incrementInFlightUpdates;
- (id)_workspaceQueue_createWatchdogForSceneAction:(unsigned char)arg1 transitionContext:(id)arg2;
- (void)_workspaceQueue_cancelWatchdogTimer:(id)arg1;
- (void)_workspaceQueue_decrementInFlightUpdates;
- (id)_workspaceQueue_acquireAssertionWithAttributes:(id)arg1;
- (void)_workspaceQueue_updateAssertion;

@end
