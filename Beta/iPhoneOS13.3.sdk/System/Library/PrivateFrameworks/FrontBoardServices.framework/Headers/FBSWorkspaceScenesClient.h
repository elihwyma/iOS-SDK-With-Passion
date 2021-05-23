/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, BSServiceConnectionEndpoint, FBSSerialQueue, FBSWorkspace, NSMutableArray, NSMutableDictionary, NSString;

@protocol FBSWorkspaceDelegate, NSCopying, OS_dispatch_queue;

@interface FBSWorkspaceScenesClient : NSObject

{
    FBSWorkspace *_workspace;
    id <FBSWorkspaceDelegate> _workspaceDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_callOutQueue;
    BSServiceConnection *_connection;
    BSServiceConnectionEndpoint *_endpoint;
    NSMutableDictionary *_scenesByIdentifier;
    NSMutableArray *_pendedSendBlocks;
    struct os_unfair_lock_s _reportingLock;
    NSMutableDictionary *_reportingLock_scenesByIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<NSCopying> *identifier;

+ (id)serviceQuality;

- (id)init;
- (id)endpoint;
- (id)hostProcess;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)activate;
- (id)sceneWithIdentifier:(id)arg1;
- (id)scenes;
- (id)callOutQueue;
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)requestSceneWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithEndpoint:(id)arg1 queue:(id)arg2 calloutQueue:(id)arg3 workspace:(id)arg4;
- (id)_remoteTarget;
- (void)_queue_invalidateScene:(id)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)willTerminateWithTransitionContext:(id)arg1 withAcknowledgement:(CDUnknownBlockType)arg2;
- (oneway void)sceneID:(id)arg1 createWithParameters:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (oneway void)sceneID:(id)arg1 updateWithSettingsDiff:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (oneway void)sceneID:(id)arg1 destroyWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)sendActions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)sceneID:(id)arg1 sendActions:(id)arg2;
- (oneway void)sceneID:(id)arg1 sendMessage:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
