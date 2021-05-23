/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSTransaction, FBSystemService, NSMutableSet, SBInitialRestartState, SBRestartTransitionRequest, SBStartupTransitionController;

@protocol SBRestartManagerDelegate, SBRestartManagerWorkspaceDataSource, SBStartupTransition;

@interface SBRestartManager : NSObject

{
    id <SBRestartManagerDelegate> _delegate;
    SBInitialRestartState *_initialRestartState;
    SBStartupTransitionController *_startupController;
    SBRestartTransitionRequest *_pendingRestartTransitionRequest;
    id <SBRestartManagerWorkspaceDataSource> _workspaceDataSource;
    _Bool _isShuttingDown;
    _Bool _isRestartImminent;
    NSMutableSet *_pendingExternallyControlledRestartReasons;
    FBSystemService *_systemService;
}

@property (weak, nonatomic) id <SBRestartManagerDelegate> delegate;
@property (nonatomic, readonly) BSTransaction<SBStartupTransition> *startupTransition;
@property (nonatomic, readonly) SBRestartTransitionRequest *pendingRestartTransitionRequest;
@property (nonatomic, readonly, getter=isPendingExit) _Bool pendingExit;

- (id)init;
- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)initializeAndRunStartupTransition:(CDUnknownBlockType)arg1;
- (void)rebootForReason:(id)arg1;
- (id)initWithWorkspaceDataSource:(id)arg1 initialRestartState:(id)arg2;
- (void)restartWithTransitionRequest:(id)arg1;
- (void)shutdownForReason:(id)arg1;
- (void)shutdownWithContext:(id)arg1;
- (void)_exitIsImminent;
- (void)_addPendingExternallyControlledRestartReason:(id)arg1;
- (void)_removePendingExternallyControlledRestartReason:(id)arg1;
- (void)rebootWithContext:(id)arg1;
- (id)_initWithWorkspaceDataSource:(id)arg1 initialRestartState:(id)arg2 startupController:(id)arg3 systemService:(id)arg4;
- (_Bool)_isPendingExitIncludingExternallyControlledReasons:(_Bool)arg1;
- (void)_persistStartupTransitionContextFromShutdownContext:(id)arg1;
- (void)_shutdownWithOptions:(unsigned long long)arg1 byUser:(_Bool)arg2 description:(id)arg3;
- (void)_persistStartupTransitionContextFromRebootContext:(id)arg1;
- (void)_restartWithTransitionRequest:(id)arg1;
- (void)_postShutdownNotification;
- (void)_killAllAppsForPendingExitWithReason:(long long)arg1 description:(id)arg2 expiration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_reallyRestartWithTransitionRequest:(id)arg1;
- (void)_persistStartupTransitionContextFromRestartRequest:(id)arg1;
- (void)_doRestartForTransition:(int)arg1;
- (void)___waitForeverForRunningBoardKill;

@end
