/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class BSAtomicSignal, BSServiceConnectionEndpoint, BSServiceConnectionEndpointMonitor, FBSSerialQueue, FBSWorkspaceFencingImpl, NSArray, NSMutableDictionary, NSString;

@protocol FBSWorkspaceDelegate, OS_dispatch_queue;

@interface FBSWorkspace : NSObject <Swift>

{
    FBSSerialQueue *_callOutQueue;
    id <FBSWorkspaceDelegate> _delegate;
    BSAtomicSignal *_activateSignal;
    FBSWorkspaceFencingImpl *_fencingImpl;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queue_identifierToScenesSource;
    BSServiceConnectionEndpointMonitor *_connectionEndpointMonitor;
    BSServiceConnectionEndpoint *_defaultShellEndpoint;
}

@property (nonatomic, readonly) id <FBSWorkspaceDelegate> delegate;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *defaultShellEndpoint;
@property (copy, nonatomic, readonly) NSArray *scenes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_sharedWorkspaceIfExists;
+ (void)_registerBlockForWorkspaceCreation:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (void)_activate;
- (void)setDelegate:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)sceneWithIdentifier:(id)arg1;
- (_Bool)trackSystemAnimationFence:(id)arg1;
- (id)requestSystemAnimationFence;
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(CDUnknownBlockType)arg1;
- (_Bool)isTrackingAnySystemAnimationFence;
- (void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestSceneFromEndpoint:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithSerialQueue:(id)arg1;
- (void)monitor:(id)arg1 willLoseEndpoint:(id)arg2;
- (void)monitor:(id)arg1 didReceiveEndpoint:(id)arg2;
- (void)enumerateScenesWithBlock:(CDUnknownBlockType)arg1;
- (void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_initWithOptions:(id)arg1;
- (id)_queue_scenesClientForEndpoint:(id)arg1 creatingIfNecessary:(_Bool)arg2;
- (void)_queue_registerSource:(id)arg1;
- (void)_queue_unregisterSource:(id)arg1;
- (id)_initWithSerialQueue:(id)arg1;
- (void)requestDestructionOfScene:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_registerSource:(id)arg1;
- (void)_unregisterSource:(id)arg1;
- (void)_calloutQueue_executeCalloutFromSource:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
