/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class FBSSceneClientSettings, FBSSceneIdentityToken, FBSSceneSettings, FBSSceneSpecification, NSString;

@protocol FBSSceneDelegate;

@interface FBSScene : NSObject <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) FBSSceneIdentityToken *identityToken;
@property (nonatomic, readonly) FBSSceneSpecification *specification;
@property (weak, nonatomic) id <FBSSceneDelegate> delegate;
@property (nonatomic, readonly) FBSSceneSettings *settings;
@property (nonatomic, readonly) FBSSceneClientSettings *clientSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_init;
- (id)layers;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (id)fbsDisplay;
- (void)sendActions:(id)arg1;
- (_Bool)invalidateSnapshotWithContext:(id)arg1;
- (_Bool)performSnapshotWithContext:(id)arg1;
- (id)display;
- (id)contexts;
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

@end
