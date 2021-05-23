/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class FBSceneManager, NSMutableDictionary, NSMutableSet, NSString, UIApplicationSceneDeactivationManager;

@interface SBSceneManagerCoordinator : NSObject <Swift>

{
    FBSceneManager *_sceneManager;
    NSMutableDictionary *_displayIdentityToReferenceMap;
    NSMutableSet *_workspaceIdentifiersToIgnore;
    UIApplicationSceneDeactivationManager *_sceneDeactivationManager;
}

@property (nonatomic, readonly) UIApplicationSceneDeactivationManager *sceneDeactivationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)mainDisplaySceneManager;
+ (id)secureMainDisplaySceneManager;

- (id)init;
- (void)dealloc;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (void)workspace:(id)arg1 didReceiveSceneRequestWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;
- (void)sceneManager:(id)arg1 interceptUpdateForScene:(id)arg2 withNewSettings:(id)arg3;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)registerSceneWorkspaceIdentifierToIgnore:(id)arg1;
- (id)sceneManagerForDisplayIdentity:(id)arg1;
- (void)enumerateSceneManagersWithBlock:(CDUnknownBlockType)arg1;
- (void)sceneManagerDidInvalidateForReference:(id)arg1;
- (id)_referenceForDisplayIdentity:(id)arg1 creatingIfNecessary:(_Bool)arg2;
- (id)_sceneManagerForDisplayIdentity:(id)arg1 creatingIfNecessary:(_Bool)arg2;

@end
