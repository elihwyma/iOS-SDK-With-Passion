/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSTimer, SBApplicationController, SBFMobileKeyBag, SBMainWorkspace, SBRestartManager, SBSyncController;

@interface SBApplicationAutoLaunchService : NSObject <Swift>

{
    SBMainWorkspace *_mainWorkspace;
    SBApplicationController *_applicationController;
    SBRestartManager *_restartManager;
    SBSyncController *_syncController;
    SBFMobileKeyBag *_keybag;
    NSMutableArray *_queuedApplicationsThrottledForRelaunch;
    NSTimer *_queuedApplicationsThrottledForRelaunchTimer;
    _Bool _autoLaunchSynchronously;
}

@property (nonatomic, getter=_autoLaunchSynchronously, setter=_setAutoLaunchSynchronously:) _Bool autoLaunchSynchronously;
@property (nonatomic, readonly, getter=_queuedApplicationsThrottledForRelaunchTimer) NSTimer *queuedApplicationsThrottledForRelaunchTimer;
@property (nonatomic, readonly, getter=_queuedApplicationsThrottledForRelaunch) NSArray *queuedApplicationsThrottledForRelaunch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)keybagDidUnlockForTheFirstTime:(id)arg1;
- (id)_initWithWorkspace:(id)arg1 applicationController:(id)arg2 restartManager:(id)arg3 syncController:(id)arg4 keybag:(id)arg5;
- (void)autoLaunchApplicationsIfNecessaryForStartup;
- (void)_noteTerminationAssertionRemovedForApplication:(id)arg1;
- (void)_applicationProcessStateDidChange:(id)arg1;
- (void)_installedApplicationsDidChange:(id)arg1;
- (void)_memoryPressureRelieved:(id)arg1;
- (void)_memoryPressureWarn:(id)arg1;
- (void)_autoLaunchIfNecessary:(id)arg1 forReason:(unsigned long long)arg2;
- (_Bool)_shouldAutoLaunchApplication:(id)arg1 forReason:(unsigned long long)arg2;
- (void)_reallyDoAutoLaunchToBackground:(id)arg1;
- (void)_invalidateQueuedApplicationsThrottledForRelaunchTimer;
- (void)_launchNextQueuedApplicationThrottledForRelaunch;
- (void)_scheduleThrottledApplicationRelaunchTimerIfNecessary;
- (void)_recalculateVoIPBehaviorForApplication:(id)arg1 withExitContext:(id)arg2;
- (void)_scheduleAutoLaunchForApplicationExited:(id)arg1 withExitContext:(id)arg2;
- (void)_autoLaunchAppsIfNecessaryAfterFirstUnlock;
- (void)_noteKeybagDidUnlock;

@end
