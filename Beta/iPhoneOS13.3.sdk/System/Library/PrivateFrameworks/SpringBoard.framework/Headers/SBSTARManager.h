/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class FBApplicationUpdateScenesTransaction, FBScene, NSMutableArray, NSString, SBHIDInterface, SBHIDUILockAssertion, SBIdleTimerGlobalCoordinator, SBLockScreenManager, SBMainDisplayRootWindowScenePresentationBinder, SBMainWorkspace, SBSTARScreenFadeController, SBSystemGestureManager, SRSSessionController, UIRootWindowScenePresentationBinder;

@protocol BSInvalidatable;

@interface SBSTARManager : NSObject <Swift>

{
    _Bool _shouldEnableSTARMode;
    SBMainWorkspace *_mainWorkspace;
    SBIdleTimerGlobalCoordinator *_idleTimerCoordinator;
    SBSystemGestureManager *_systemGestureManager;
    SBLockScreenManager *_lockScreenManager;
    SBMainDisplayRootWindowScenePresentationBinder *_springboardRootWindowBinder;
    SBHIDInterface *_HIDInterface;
    UIRootWindowScenePresentationBinder *_starRootWindowBinder;
    SBSTARScreenFadeController *_screenFadeController;
    id <BSInvalidatable> _disableIdleTimerAssertion;
    id <BSInvalidatable> _disableSystemGesturesAssertion;
    SBHIDUILockAssertion *_disableMultitouchAssertion;
    id <BSInvalidatable> _disconnectLayerTreeAssertion;
    id <BSInvalidatable> _suppressBacklightFeaturesAssertion;
    FBApplicationUpdateScenesTransaction *_transaction;
    FBScene *_externalShellScene;
    unsigned long long _transitionState;
    NSMutableArray *_disableAssertions;
    SRSSessionController *_starSessionController;
    NSMutableArray *_observers;
}

@property (retain, nonatomic) SBMainWorkspace *mainWorkspace;
@property (retain, nonatomic) SBIdleTimerGlobalCoordinator *idleTimerCoordinator;
@property (retain, nonatomic) SBSystemGestureManager *systemGestureManager;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBMainDisplayRootWindowScenePresentationBinder *springboardRootWindowBinder;
@property (retain, nonatomic) SBHIDInterface *HIDInterface;
@property (retain, nonatomic) UIRootWindowScenePresentationBinder *starRootWindowBinder;
@property (retain, nonatomic) SBSTARScreenFadeController *screenFadeController;
@property (retain, nonatomic) id <BSInvalidatable> disableIdleTimerAssertion;
@property (retain, nonatomic) id <BSInvalidatable> disableSystemGesturesAssertion;
@property (retain, nonatomic) SBHIDUILockAssertion *disableMultitouchAssertion;
@property (retain, nonatomic) id <BSInvalidatable> disconnectLayerTreeAssertion;
@property (retain, nonatomic) id <BSInvalidatable> suppressBacklightFeaturesAssertion;
@property (retain, nonatomic) FBApplicationUpdateScenesTransaction *transaction;
@property (retain, nonatomic) FBScene *externalShellScene;
@property (nonatomic) unsigned long long transitionState;
@property (retain, nonatomic) NSMutableArray *disableAssertions;
@property (retain, nonatomic) SRSSessionController *starSessionController;
@property (nonatomic) _Bool shouldEnableSTARMode;
@property (retain, nonatomic) NSMutableArray *observers;
@property (nonatomic, readonly) _Bool isInSTARMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (_Bool)isExternalSystemShellRootSceneIdentifier:(id)arg1;
+ (_Bool)isSTARSupported;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidInvalidate:(id)arg1;
- (void)transaction:(id)arg1 didCreateScene:(id)arg2;
- (void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2;
- (void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;
- (void)sessionControllerActivated:(id)arg1;
- (void)sessionControllerInvalidated:(id)arg1;
- (void)sessionControllerWillEnterSTARMode:(id)arg1;
- (void)sessionControllerDidExitSTARMode:(id)arg1;
- (void)forceSTARModeExitForReason:(id)arg1;
- (void)_populateAppLibraryWithSTARBoard;
- (void)_frontmostAppDidChange:(id)arg1;
- (void)reevaluateSTARMode;
- (id)_processIdentityForStarBoard;
- (void)_enterSTARMode;
- (void)_exitSTARMode;
- (void)_enterCADisplayModeForSTAR;
- (void)_executeSTARTransitionWithEventName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_exitCADisplayModeForSTAR;
- (id)_displayModeForSTAR;
- (void)_updateSTARSceneWithCompletion:(CDUnknownBlockType)arg1;
- (id)acquireSTARModeDisableAssertionForReason:(id)arg1;

@end
