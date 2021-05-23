/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBLayoutStateManager.h>

@class SBMainDisplaySceneManager, SBMainWorkspace, SBPlatformController, SBRecentAppLayouts;

@interface SBMainDisplayLayoutStateManager : SBLayoutStateManager

@property (nonatomic, readonly) SBPlatformController *_platformController;
@property (nonatomic, readonly) SBMainWorkspace *_mainWorkspace;
@property (nonatomic, readonly) SBMainDisplaySceneManager *_mainDisplaySceneManager;
@property (nonatomic, readonly) SBRecentAppLayouts *_recentAppLayouts;

+ (Class)_layoutStateClass;

- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (_Bool)_hasAppLayoutBeenUserKilledWithinThresholdToCreateNewScene:(id)arg1;
- (id)_sceneIDIfAppLayoutContainsPrimarySceneIDForBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
- (_Bool)_doesSceneIDSpecifyPrimaryScene:(id)arg1 forApplicationIdentifier:(id)arg2;
- (id)_mostRecentAppLayoutMatchingWorkspaceUniqueIdentifiers:(id)arg1;
- (id)_applicationSceneEntityFromApplicationBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)defaultSceneIdentifierForBundleIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(_Bool)arg3 preferNewScene:(_Bool)arg4 visibleSceneIdentifiers:(id)arg5 excludingSceneIdentifiers:(id)arg6;
- (id)primarySceneIdentifierForBundleIdentifier:(id)arg1;
- (id)_layoutStateForApplicationTransitionContext:(id)arg1;

@end
