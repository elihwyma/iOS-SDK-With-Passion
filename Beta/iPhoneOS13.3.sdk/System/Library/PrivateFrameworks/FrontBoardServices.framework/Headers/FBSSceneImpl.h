/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSScene.h>

@class FBSSceneClientSettings, FBSSceneIdentityToken, FBSSceneSettings, FBSSceneSpecification, FBSSerialQueue, NSMutableArray, NSOrderedSet, NSString;

@protocol FBSSceneClientAgent, FBSSceneDelegate, FBSSceneUpdater;

@interface FBSSceneImpl : FBSScene

{
    FBSSerialQueue *_callOutQueue;
    NSString *_identifier;
    FBSSceneSpecification *_specification;
    _Bool _hasAgent;
    id <FBSSceneClientAgent> _callOutQueue_agent;
    NSMutableArray *_callOutQueue_agentSessions;
    CDUnknownBlockType _callOutQueue_agentMessageHandler;
    _Bool _callOutQueue_agentInvalidateCalled;
    struct os_unfair_lock_s _lock;
    id <FBSSceneUpdater> _lock_updater;
    FBSSceneSettings *_lock_settings;
    FBSSceneClientSettings *_lock_clientSettings;
    NSOrderedSet *_lock_layers;
    id <FBSSceneDelegate> _lock_delegate;
    FBSSceneIdentityToken *_identityToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)identifier;
- (id)parameters;
- (id)layers;
- (id)settings;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)hostProcess;
- (id)identityToken;
- (id)specification;
- (id)clientSettings;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (id)clientProcess;
- (void)sendActions:(id)arg1;
- (_Bool)invalidateSnapshotWithContext:(id)arg1;
- (_Bool)performSnapshotWithContext:(id)arg1;
- (_Bool)snapshotRequestAllowSnapshot:(id)arg1;
- (_Bool)snapshotRequest:(id)arg1 performWithContext:(id)arg2;
- (id)initWithCallOutQueue:(id)arg1 identifier:(id)arg2 parameters:(id)arg3;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2;
- (void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)attachSceneContext:(id)arg1;
- (void)detachSceneContext:(id)arg1;
- (id)snapshotRequest;
- (_Bool)_hasAgent;
- (void)_callOutQueue_agent_didCreateWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_callOutQueue_agent_willDestroyWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_initWithCallOutQueue:(id)arg1 identifier:(id)arg2 specification:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (id)callOutQueue;
- (void)_callOutQueue_invalidateAgent;
- (void)_calloutQueue_comsumeLock_updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)_configureReceivedActions:(id)arg1;
- (id)counterpartAgent;
- (id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
- (id)sessionForIdentifier:(id)arg1;
- (void)closeSession:(id)arg1;
- (void)agent:(id)arg1 registerMessageHandler:(CDUnknownBlockType)arg2;
- (void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (id)_initWithUpdater:(id)arg1 identifier:(id)arg2 specification:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (void)_callOutQueue_invalidate;

@end
