/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class BSAuditToken, FBProcess, FBSceneClientProviderInvalidationAction, FBWorkspaceServer, NSMapTable, NSMutableSet, NSString, RBSAssertion, RBSProcessIdentity, RBSTarget;

@protocol FBWorkspaceDelegate, OS_dispatch_queue;

@interface FBWorkspace : NSObject

{
    id <FBWorkspaceDelegate> _weak_delegate;
    FBProcess *_weak_process;
    RBSProcessIdentity *_processIdentity;
    RBSTarget *_assertionTarget;
    FBWorkspaceServer *_server;
    NSMapTable *_hostToClientMap;
    NSMutableSet *_invalidatingScenes;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    RBSAssertion *_subordinateProcessAssertion;
    _Bool _invalidated;
}

@property (weak, nonatomic) id <FBWorkspaceDelegate> delegate;
@property (weak, nonatomic, readonly) FBProcess *process;
@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_queue;
- (id)_server;
- (void)sendActions:(id)arg1;
- (void)registerInvalidationAction:(id)arg1;
- (id)registerHost:(id)arg1 withInitialParameters:(id)arg2;
- (void)unregisterHost:(id)arg1;
- (void)_invalidateSubordinateProcessAssertionIfNecessary;
- (void)_queue_fireInvalidationAction;
- (void)_acquireSubordinateProcessAssertionIfNecessary;
- (id)processForServer:(id)arg1;
- (id)injectionTargetForServer:(id)arg1;
- (void)server:(id)arg1 didReceiveSceneRequestWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)serverDidInvalidateConnection:(id)arg1;
- (id)initWithParentProcess:(id)arg1 queue:(id)arg2 callOutQueue:(id)arg3;
- (void)_queue_invalidateAllScenes;
- (void)_queue_enumerateScenes:(CDUnknownBlockType)arg1;
- (void)_queue_sceneDidInvalidate:(id)arg1;

@end
