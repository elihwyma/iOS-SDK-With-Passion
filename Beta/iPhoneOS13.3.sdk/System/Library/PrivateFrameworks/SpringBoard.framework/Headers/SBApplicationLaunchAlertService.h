/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString, SBAlertItemsController, SBApplicationController;

@interface SBApplicationLaunchAlertService : NSObject <Swift>

{
    NSSet *_launchAlertEvaluators;
    SBApplicationController *_applicationController;
    SBAlertItemsController *_alertItemsController;
    NSSet *_sceneManagers;
    NSMutableSet *_foregroundingScenes;
    NSMutableDictionary *_mapBundleIDToLaunchAlertInfo;
    _Bool _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)sceneContentStateDidChange:(id)arg1;
- (id)initObservingSceneManagers:(id)arg1 launchAlertEvaluators:(id)arg2 applicationController:(id)arg3 alertItemsController:(id)arg4;
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)showLaunchAlertOfType:(unsigned long long)arg1 forApplication:(id)arg2;
- (void)_sceneWillBecomeForeground:(id)arg1;
- (void)_reallyShowLaunchAlertOfType:(unsigned long long)arg1 withLaunchAlertInfo:(id)arg2 application:(id)arg3;
- (void)_invalidateAndDismissLaunchAlertsForLaunchAlertInfo:(id)arg1;
- (void)_sceneDidResignForeground:(id)arg1;
- (void)_sceneDidBecomeForeground:(id)arg1;
- (void)_tryShowLaunchAlertsForLaunchAlertInfo:(id)arg1;

@end
