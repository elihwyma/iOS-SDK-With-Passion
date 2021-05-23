/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BKSHIDEventDeliveryManager, BSMutableIntegerMap, BSTimer, CMPocketStateManager, NSMutableIndexSet, NSString, RBSProcessMonitor, SBApplicationController, SBBacklightController, SBBacklightStudyLogger, SBCameraHardwareButtonDefaults, SBCameraHardwareButtonSettings, SBCameraHardwareButtonStudyLogger, SBCoverSheetPresentationManager, SBHIDButtonStateArbiter, SBLiftToWakeStudyLogger, SBLockScreenManager, SBProximitySensorManager, SBSceneManager, _SBCameraLaunchCondition;

@protocol BSInvalidatable;

@interface SBCameraHardwareButton : NSObject <Swift>

{
    _Bool _disableDeferringToApplications;
    _Bool _shouldUsePocketStateDetection;
    int _lastCameraApplicationPID;
    id <BSInvalidatable> _dispatchingRuleAssertion;
    id <BSInvalidatable> _deferringRuleAssertion;
    NSMutableIndexSet *_allCameraShutterButtonPIDs;
    NSMutableIndexSet *_foregroundCameraShutterButtonPIDs;
    NSMutableIndexSet *_foregroundPendingRemovalCameraShutterButtonPIDs;
    BSMutableIntegerMap *_deferringTokensPerPID;
    SBHIDButtonStateArbiter *_buttonArbiter;
    RBSProcessMonitor *_processMonitor;
    CMPocketStateManager *_pocketStateManager;
    _SBCameraLaunchCondition *_shouldLaunchCameraCondition;
    _SBCameraLaunchCondition *_longPressCondition;
    _SBCameraLaunchCondition *_outOfPocketCondition;
    BSTimer *_longPressCancellationTimer;
    double _longPressCancellationTimeout;
    BKSHIDEventDeliveryManager *_deliveryManager;
    SBApplicationController *_applicationController;
    SBLockScreenManager *_lockScreenManager;
    SBCoverSheetPresentationManager *_coverSheetPresentationManager;
    SBBacklightController *_backlightController;
    SBProximitySensorManager *_proximitySensorManager;
    SBSceneManager *_mainDisplaySceneManager;
    SBCameraHardwareButtonSettings *_settings;
    SBCameraHardwareButtonDefaults *_defaults;
    SBBacklightStudyLogger *_backlightStudyLogger;
    SBCameraHardwareButtonStudyLogger *_studyLogger;
    SBLiftToWakeStudyLogger *_liftToWakeStudyLogger;
}

@property (retain, nonatomic) id <BSInvalidatable> dispatchingRuleAssertion;
@property (retain, nonatomic) id <BSInvalidatable> deferringRuleAssertion;
@property (nonatomic) int lastCameraApplicationPID;
@property (retain, nonatomic) NSMutableIndexSet *allCameraShutterButtonPIDs;
@property (retain, nonatomic) NSMutableIndexSet *foregroundCameraShutterButtonPIDs;
@property (retain, nonatomic) NSMutableIndexSet *foregroundPendingRemovalCameraShutterButtonPIDs;
@property (retain, nonatomic) BSMutableIntegerMap *deferringTokensPerPID;
@property (retain, nonatomic) SBHIDButtonStateArbiter *buttonArbiter;
@property (retain, nonatomic) RBSProcessMonitor *processMonitor;
@property (retain, nonatomic) CMPocketStateManager *pocketStateManager;
@property (retain, nonatomic) _SBCameraLaunchCondition *shouldLaunchCameraCondition;
@property (retain, nonatomic) _SBCameraLaunchCondition *longPressCondition;
@property (retain, nonatomic) _SBCameraLaunchCondition *outOfPocketCondition;
@property (retain, nonatomic) BSTimer *longPressCancellationTimer;
@property (nonatomic) double longPressCancellationTimeout;
@property (nonatomic) _Bool shouldUsePocketStateDetection;
@property (retain, nonatomic) BKSHIDEventDeliveryManager *deliveryManager;
@property (retain, nonatomic) SBApplicationController *applicationController;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager;
@property (retain, nonatomic) SBBacklightController *backlightController;
@property (retain, nonatomic) SBProximitySensorManager *proximitySensorManager;
@property (retain, nonatomic) SBSceneManager *mainDisplaySceneManager;
@property (retain, nonatomic) SBCameraHardwareButtonSettings *settings;
@property (retain, nonatomic) SBCameraHardwareButtonDefaults *defaults;
@property (retain, nonatomic) SBBacklightStudyLogger *backlightStudyLogger;
@property (retain, nonatomic) SBCameraHardwareButtonStudyLogger *studyLogger;
@property (retain, nonatomic) SBLiftToWakeStudyLogger *liftToWakeStudyLogger;
@property (nonatomic) _Bool disableDeferringToApplications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)handleButtonEvent:(struct __IOHIDEvent *)arg1;
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)_updateSettingsForReason:(id)arg1;
- (void)_reconfigureProcessMonitor;
- (void)_updateCameraDeferringRule;
- (void)_reconfigureProcessMonitorForPredicates:(id)arg1;
- (void)_process:(id)arg1 stateDidUpdate:(id)arg2;
- (void)_deferCameraPressesToPID:(int)arg1;
- (void)_deferCameraPressesToApplication:(id)arg1;
- (_Bool)_isCoverSheetCameraVisible;
- (_Bool)_shouldDeferToNonSpringBoardProcess;
- (_Bool)_shouldDeferToCoverSheetCamera;
- (void)_deferCameraPressesToCameraApplication;
- (void)_deferCameraPressesToSpringBoard;
- (void)_launchToCoverSheetCamera;
- (void)_launchToUnlockedCamera;
- (void)_longPressDidCancel;
- (void)_stopWaitingForLongPressCancellation;
- (void)_startWaitingForLongPressCancellation;
- (void)_launchCameraIfReady;
- (void)performActionsForButtonLongPress:(id)arg1;
- (void)performActionsForButtonDown:(id)arg1;
- (void)performActionsForButtonUp:(id)arg1;
- (void)addProcessRequestingCameraButton:(int)arg1 token:(id)arg2;
- (void)removeProcessRequestingCameraButton:(int)arg1;

@end
