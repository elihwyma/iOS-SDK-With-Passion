/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSceneManager.h>

@class NSString;

@interface SBSecureMainDisplaySceneManager : SBSceneManager

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)_applicationSceneHandleClass;

- (id)window;
- (id)sceneIdentityForApplication:(id)arg1;
- (id)newSceneIdentityForApplication:(id)arg1;
- (id)_createRootWindowScenePresentationBinder;
- (id)sceneLayoutViewController;
- (void)_setupLayoutStateTransitionCoordinator:(id)arg1;
- (void)_noteDidChangeToVisibility:(unsigned long long)arg1 previouslyExisted:(_Bool)arg2 forScene:(id)arg3;
- (id)_sceneIdentifierForBundleIdentifier:(id)arg1;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2;
- (_Bool)_shouldAutoHostScene:(id)arg1;
- (id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3;
- (_Bool)_shouldTrackScenesForDeactivation;
- (struct CGRect)sceneEntityFrameForWorkspaceEntity:(id)arg1 inLayoutState:(id)arg2;

@end
