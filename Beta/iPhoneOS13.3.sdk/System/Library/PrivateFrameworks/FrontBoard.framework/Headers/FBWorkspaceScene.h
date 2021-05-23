/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class FBProcess, FBSSceneClientSettings, FBSSceneSettings, FBSSceneSpecification, FBSSerialQueue, FBWorkspace, NSMutableArray, NSString;

@protocol FBSSceneHostAgent, FBSceneHost, OS_dispatch_queue;

@interface FBWorkspaceScene : NSObject <Swift>

{
    id <FBSceneHost> _host;
    FBWorkspace *_workspace;
    NSObject<OS_dispatch_queue> *_workspaceQueue;
    NSString *_identifier;
    FBSSceneSpecification *_specification;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    NSMutableArray *_workspaceQueue_initializationCompletedBlocks;
    unsigned char _workspaceQueue_creationState;
    _Bool _workspaceQueue_invalidated;
    id <FBSSceneHostAgent> _hostAgent;
    FBSSerialQueue *_agentQueue;
    CDUnknownBlockType _agentMessageHandler;
    unsigned long long _agentEventSequenceNumber;
    NSMutableArray *_agentOutstandingEventSequence;
    NSMutableArray *_agentSessions;
    FBProcess *_process;
}

@property (nonatomic, readonly, getter=_workspaceQueue_handledInitialSettingsDiff) _Bool handledInitialSettingsDiff;
@property (copy, nonatomic, getter=_workspaceQueue_sceneSettings, setter=_workspaceQueue_setSceneSettings:) FBSSceneSettings *sceneSettings;
@property (weak, nonatomic, readonly) FBWorkspace *parentWorkspace;
@property (weak, nonatomic, readonly) id <FBSceneHost> host;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) FBSSceneSettings *settings;
@property (copy, nonatomic, readonly) FBSSceneSpecification *specification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)parameters;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)hostProcess;
- (id)clientProcess;
- (id)callOutQueue;
- (id)counterpartAgent;
- (id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
- (id)sessionForIdentifier:(id)arg1;
- (void)closeSession:(id)arg1;
- (void)agent:(id)arg1 registerMessageHandler:(CDUnknownBlockType)arg2;
- (void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)queue_invalidate;
- (id)initWithParentWorkspace:(id)arg1 host:(id)arg2;
- (void)queue_configureWithInitialParameters:(id)arg1;
- (void)_workspaceQueue_addInitializationCompletedBlockToWorkspaceQueue:(CDUnknownBlockType)arg1;
- (void)_workspaceQueue_invalidate;
- (void)_workspaceQueue_invalidateSceneAgentWithEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_workspaceQueue;
- (void)_workspaceQueue_sendSettingsDiff:(id)arg1 transitionContext:(id)arg2 responseEventHandler:(CDUnknownBlockType)arg3;
- (void)_workspaceQueue_sendDestroyWithTransitionContext:(id)arg1 responseEventHandler:(CDUnknownBlockType)arg2;
- (void)_workspaceQueue_dispatchClientBlockIfNecessary:(CDUnknownBlockType)arg1 success:(_Bool)arg2;
- (void)_handleDidUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleInvalidationWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sceneDidUpdateClientSettings:(id)arg1 transitionContext:(id)arg2;
- (void)sceneDidReceiveActions:(id)arg1;
- (void)sceneDidReceiveMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (id)_workspaceQueue_process;
- (void)_dispatchBlockAfterProcessLaunch:(CDUnknownBlockType)arg1;

@end
