/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, BSServiceConnectionEndpointInjector, NSMutableArray, NSMutableDictionary;

@protocol FBWorkspaceServerDelegate, OS_dispatch_queue;

@interface FBWorkspaceServer : NSObject

{
    id <FBWorkspaceServerDelegate> _weak_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnectionEndpointInjector *_workspaceServiceInjector;
    BSServiceConnection *_connection;
    _Bool _invalidated;
    NSMutableArray *_waitForConnectBlocks;
    NSMutableDictionary *_sceneIDToSceneHandlerMap;
}

@property (weak, nonatomic, readonly) id <FBWorkspaceServerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)setQueue:(id)arg1;
- (void)invalidate;
- (id)_queue;
- (void)setDelegate:(id)arg1;
- (id)initWithConfigurator:(CDUnknownBlockType)arg1;
- (oneway void)requestSceneWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)sceneID:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (oneway void)sceneID:(id)arg1 didReceiveActions:(id)arg2;
- (oneway void)sceneID:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)queue_enqueueConnectBlock:(CDUnknownBlockType)arg1;
- (void)registerSceneEventHandler:(id)arg1 forSceneID:(id)arg2;
- (void)unregisterSceneEventHandler:(id)arg1 forSceneID:(id)arg2;
- (id)_handlerForSceneID:(id)arg1;
- (void)_queue_setConnection:(id)arg1;

@end
