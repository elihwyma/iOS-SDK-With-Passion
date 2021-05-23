/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class FBSSceneClientSettingsDiffInspector, FBSceneClientProviderInvalidationAction, NSMutableArray, NSMutableDictionary, NSString;

@protocol NSCopying;

@interface FBLocalSynchronousSceneClientProvider : NSObject

{
    _Bool _workspaceInitialized;
    NSMutableArray *_pendingSceneCreatesBeforeFBSWorkspaceInitialization;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    NSMutableDictionary *_localSceneInfoByIdentifier;
    NSMutableDictionary *_hostsByIdentifier;
    FBSSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<NSCopying> *identifier;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (id)endpoint;
- (id)hostProcess;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (id)sceneWithIdentifier:(id)arg1;
- (id)scenes;
- (id)_newSceneForWindow:(id)arg1 oldDisplay:(id)arg2 newDisplay:(id)arg3;
- (id)callOutQueue;
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (id)fbsSceneWithIdentifier:(id)arg1;
- (void)registerInvalidationAction:(id)arg1;
- (id)registerHost:(id)arg1 withInitialParameters:(id)arg2;
- (void)unregisterHost:(id)arg1;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)_sendSceneCreateFBSWorkspaceDelegateForSceneInfo:(id)arg1 transitionContext:(id)arg2;
- (void)_updateLevelForScene:(id)arg1;

@end
