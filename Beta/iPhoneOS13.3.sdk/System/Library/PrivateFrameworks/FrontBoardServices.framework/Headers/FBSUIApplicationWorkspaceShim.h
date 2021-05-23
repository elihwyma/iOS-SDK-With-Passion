/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class FBSSerialQueue, FBSUIApplicationWorkspace, FBSWorkspace, NSString;

@protocol BSInvalidatable, FBSUIApplicationWorkspaceDelegate;

@interface FBSUIApplicationWorkspaceShim : NSObject

{
    FBSSerialQueue *_queue;
    FBSUIApplicationWorkspace *_original;
    FBSWorkspace *_workspace;
    id <FBSUIApplicationWorkspaceDelegate> _delegate;
    id <BSInvalidatable> _processExpirationObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)workspace:(id)arg1 didReceiveActions:(id)arg2;
- (id)sceneWithIdentifier:(id)arg1;
- (id)scenes;
- (void)workspace:(id)arg1 didCreateScene:(id)arg2 withTransitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)workspace:(id)arg1 willDestroyScene:(id)arg2 withTransitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)trackSystemAnimationFence:(id)arg1;
- (id)requestSystemAnimationFence;
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(CDUnknownBlockType)arg1;
- (_Bool)isTrackingAnySystemAnimationFence;
- (void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)workspaceShouldExit:(id)arg1 withTransitionContext:(id)arg2;
- (void)requestSceneFromEndpoint:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)defaultShellEndpoint;
- (void)enumerateScenesWithBlock:(CDUnknownBlockType)arg1;
- (void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_initWithSerialQueue:(id)arg1 original:(id)arg2;

@end
