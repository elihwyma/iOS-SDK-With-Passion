/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>

@class NSString, SBAccessibilityHardwareButtonInteraction, SBApplication, SBHardwareButtonGestureParameters, SBHardwareButtonService, SBProximitySensorManager, SBSTARManager, SBSiriHardwareButtonInteraction, SBSleepWakeHardwareButtonInteraction, SBWalletPreArmController, SOSManager;

@protocol SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider;

@interface SBLockHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase

{
    long long _homeButtonType;
    SBApplication *_lastLockButtonEventRecipient;
    SBProximitySensorManager *_proximitySensorManager;
    SBHardwareButtonService *_hardwareButtonService;
    SBWalletPreArmController *_walletPreArmController;
    SOSManager *_sosManager;
    SBSTARManager *_STARManager;
    SBHardwareButtonGestureParameters *_accessibilityGestureParameters;
    SBHardwareButtonGestureParameters *_siriGestureParameters;
    SBHardwareButtonGestureParameters *_proximitySensorGestureParameters;
    long long _sosTriggerMechanism;
    _Bool _isButtonDown;
    SBSiriHardwareButtonInteraction *_siriButtonInteraction;
    SBAccessibilityHardwareButtonInteraction *_accessibilityButtonInteraction;
    SBSleepWakeHardwareButtonInteraction *_sleepWakeButtonInteraction;
    id <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _proximitySensorButtonInteraction;
}

@property (retain, nonatomic) SBSiriHardwareButtonInteraction *siriButtonInteraction;
@property (retain, nonatomic) SBAccessibilityHardwareButtonInteraction *accessibilityButtonInteraction;
@property (retain, nonatomic) SBSleepWakeHardwareButtonInteraction *sleepWakeButtonInteraction;
@property (retain, nonatomic) id <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> proximitySensorButtonInteraction;
@property (nonatomic, readonly) _Bool isButtonDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performSinglePressAction;
- (void)performInitialButtonDownActions;
- (_Bool)performButtonUpPreActions;
- (void)performFinalButtonUpActions;
- (id)hardwareButtonGestureParameters;
- (void)_registeredLockButtonAppsDidChange:(id)arg1;
- (_Bool)_sendButtonDownToRegisteredApp;
- (void)_showPowerDownTransientOverlayOnForceReset;
- (_Bool)_sendButtonUpToRegisteredApp;
- (_Bool)_isSOSActive;
- (void)_performSOSDidTriggerActions;
- (_Bool)disallowsSinglePressForReason:(id *)arg1;
- (_Bool)disallowsDoublePressForReason:(id *)arg1;
- (_Bool)_shouldWaitForDoublePress;
- (_Bool)disallowsTriplePressForReason:(id *)arg1;
- (_Bool)disallowsLongPressForReason:(id *)arg1;
- (id)_foregroundAppRegisteredForLockButtonEvents;
- (void)_sendButtonEventToApp:(id)arg1 down:(_Bool)arg2;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (void)didEnterSTARMode:(id)arg1;
- (void)didExitSTARMode:(id)arg1;
- (id)initWithHomeButtonType:(long long)arg1 proximitySensorManager:(id)arg2;
- (_Bool)reverseFadeOutIfNeeded;
- (void)performSOSGestureBeganActions;
- (void)performSOSGestureEndedActions;
- (void)performInitialButtonUpActions;
- (void)performSecondButtonDownActions;
- (void)performLongPressActions;
- (void)performForceResetSequenceBeganActions;
- (void)performSinglePressDidFailActions;
- (void)performDoublePressActions;
- (void)performTriplePressActions;
- (void)performSOSActionsWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performLongPressCancelledActions;
- (_Bool)shouldBeginDoublePressGestureWhileObjectWithinProximity;

@end
