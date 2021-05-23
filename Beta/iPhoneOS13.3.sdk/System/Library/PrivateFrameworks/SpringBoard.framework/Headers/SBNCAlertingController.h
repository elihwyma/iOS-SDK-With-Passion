/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NCNotificationRequest, NSMutableSet, NSString, SBCommunicationPolicyManager, SBLockScreenManager, SBNCScreenController, SBNCSoundController;

@protocol SBStarkNotificationsAgent;

@interface SBNCAlertingController : NSObject

{
    SBNCSoundController *_soundController;
    SBNCScreenController *_screenController;
    SBLockScreenManager *_lockScreenManager;
    id <SBStarkNotificationsAgent> _carNotificationsAgent;
    SBCommunicationPolicyManager *_communicationPolicyManager;
    NCNotificationRequest *_activeRequestWithRealerts;
    NSMutableSet *_realertTimers;
}

@property (retain, nonatomic) SBNCSoundController *soundController;
@property (retain, nonatomic) SBNCScreenController *screenController;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (weak, nonatomic) id <SBStarkNotificationsAgent> carNotificationsAgent;
@property (retain, nonatomic) SBCommunicationPolicyManager *communicationPolicyManager;
@property (retain, nonatomic) NCNotificationRequest *activeRequestWithRealerts;
@property (retain, nonatomic) NSMutableSet *realertTimers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1;
- (void)killRealerts;
- (void)_lockStateChanged;
- (void)alertOnPostForNotificationRequest:(id)arg1 forRequestDestinations:(id)arg2;
- (void)killAlertsForNotificationRequest:(id)arg1;
- (void)alertOnPresentationForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (void)resetAutomaticLockStateForNotificationRequest:(id)arg1;
- (void)_hardwareButtonPressed:(id)arg1;
- (_Bool)_activeAlertDestinationsInRequestDestinations:(id)arg1;
- (_Bool)_shouldScreenTimeSuppressNotificationRequest:(id)arg1;
- (void)_alertNowForNotificationRequest:(id)arg1;
- (void)_scheduleRealertsForNotificationRequest:(id)arg1;
- (void)_alertNowForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (void)_killRealertsForNotificationRequest:(id)arg1;
- (_Bool)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1;
- (_Bool)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg1;
- (_Bool)_shouldRealert;
- (void)_realertTimerFired:(id)arg1;
- (id)initWithSoundController:(id)arg1 screenController:(id)arg2 lockScreenManager:(id)arg3 carNotificationsAgent:(id)arg4 communicationPolicyManager:(id)arg5;
- (void)_notificationCenterDidPresent;

@end
