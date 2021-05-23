/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, NSTimer, SBAppStatusBarSettingsAssertion, SBFAuthenticationAssertion;

@protocol SBIdleTimerCoordinating;

@interface SBSyncController : NSObject

{
    int _restoreState;
    int _resetState;
    int _restoreTimerState;
    NSTimer *_restoreTimer;
    NSTimer *_progressTimer;
    _Bool _appsChangedDuringSync;
    int _restoreStartedNotifyToken;
    int _restoreEndedNotifyToken;
    SBFAuthenticationAssertion *_disableDeviceLockAssertion;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    _Bool _isAppSyncing;
    _Bool _inExtendedAppSyncCoalescePeriod;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
}

@property (weak, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) id <SBIdleTimerCoordinating> idleTimerCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (void)startObserving;
- (void)stopObserving;
- (_Bool)isInUse;
- (int)restoreState;
- (int)resetState;
- (_Bool)isRestoring;
- (_Bool)isResetting;
- (void)resetService:(id)arg1 willBeginDataResetWithMode:(long long)arg2;
- (void)resetService:(id)arg1 didBeginDataResetWithMode:(long long)arg2;
- (void)resetService:(id)arg1 didCompleteDataResetMode:(long long)arg2 withError:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setRestoreState:(int)arg1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (void)beginRestoring;
- (void)_didEndRestoring:(int)arg1;
- (void)_wirelessSyncEnded:(id)arg1;
- (void)_wirelessSyncBegan:(id)arg1;
- (void)_appInstallationNotification;
- (void)finishedTerminatingApplications;
- (void)_notifyRestoreCanProceed;
- (void)_setupRestoreTimer;
- (void)_killApplicationsIfNecessary;
- (void)_syncSessionDidBegin;
- (void)_syncSessionDidEnd;
- (id)_idleTimerBehavior;
- (void)_invalidateRestoreTimer;
- (void)_rebootNow;
- (_Bool)_isBackupAgentRunning;
- (void)_restoreTimerFired:(id)arg1;
- (void)cancelRestoring;
- (void)_delayedQuitApplications;

@end
