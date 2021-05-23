/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
 */

#import <Foundation/NSObject.h>

@protocol AXSpringBoardServerSideAppManagerDelegate;

@interface AXSpringBoardServerSideAppManager : NSObject

{
    id <AXSpringBoardServerSideAppManagerDelegate> _delegate;
    unsigned long long _dockIconActivationMode;
}

@property (weak, nonatomic) id <AXSpringBoardServerSideAppManagerDelegate> delegate;
@property (nonatomic) unsigned long long dockIconActivationMode;

+ (id)sharedInstance;
+ (id)_mainDisplaySceneLayoutViewController;
+ (id)_mainDisplaySceneManager;

- (id)init;
- (id)allowedMedusaGestures;
- (_Bool)performMedusaGesture:(unsigned long long)arg1;
- (id)medusaApps;
- (id)_applicationController;
- (void)_performValidation;
- (_Bool)isDisplayingApp;
- (_Bool)canActivateMedusaForDock;
- (id)medusaAppBundleIdsToLayoutRoles;
- (void)launchApplication:(id)arg1;
- (void)launchApplicationWithFullConfiguration:(id)arg1;
- (void)launchPinnedApplication:(id)arg1 onLeadingSide:(_Bool)arg2;
- (void)launchFloatingApplication:(id)arg1;
- (_Bool)canLaunchAsPinnedApplicationForIconView:(id)arg1;
- (_Bool)canLaunchAsFloatingApplicationForIconView:(id)arg1;
- (id)sceneLayoutState;
- (id)appForLayoutRole:(long long)arg1;
- (_Bool)hasMultipleApps;
- (void)_performMedusaGesture:(unsigned long long)arg1;
- (void)_addFloatingApplicationGesturesIfAllowed:(id)arg1;
- (id)_mainDisplaySceneLayoutViewController;
- (_Bool)_hasPinnedApp;
- (void)_addResizeGestureRecognizerGesturesIfAllowed:(id)arg1;
- (id)_appForLayoutRole:(long long)arg1 layoutState:(id)arg2;
- (long long)_currentFloatingConfiguration;
- (id)_mainDisplaySceneManager;
- (void)_enumerateAppsAndLayoutRoles:(CDUnknownBlockType)arg1;
- (void)_performSwipeOnFloatingAppSwitcher:(unsigned long long)arg1;
- (_Bool)_isDockIconView:(id)arg1;
- (id)_bundleIdentifierForIconView:(id)arg1;
- (id)_appWithIdentifier:(id)arg1;
- (void)_endDockIconActivationModeAfterTimeout;
- (long long)_currentSpaceConfiguration;
- (id)_sbPreviousWorkspaceEntityClass;
- (id)_sbEmptyEntity;
- (id)_sbPreviousEntity;
- (void)_requestFloatingAppSwitcherVisible;
- (void)_requestTransactionWithPrimaryEntity:(id)arg1 sideEntity:(id)arg2 floatingEntity:(id)arg3 spaceConfiguration:(long long)arg4 floatingConfiguration:(long long)arg5;
- (id)_sbWorkspaceMainWorkspace;
- (id)_sbSwitcherTransitionRequestClass;
- (_Bool)_hasFloatingApp;
- (id)_activeApplicationBundleIdentifiers;
- (id)_floatingAppRootViewController;

@end
