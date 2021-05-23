/*
 Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

#import <Foundation/NSObject.h>

@interface SOSUtilities : NSObject

+ (long long)SOSTriggerClickCount;
+ (_Bool)canTriggerSOSWithVolumeLockHold;
+ (_Bool)isAutomaticCallCountdownEnabled;
+ (_Bool)deviceHasHomeButton;
+ (_Bool)isAllowedToMessageSOSContacts;
+ (id)_userFriendsDefaults;
+ (id)_userSOSDefaults;
+ (id)newtonTriggersEmergencySOSNumber;
+ (void)setNewtonTriggersEmergencySOSNumber:(id)arg1;
+ (_Bool)isIndiaSKU;
+ (_Bool)isD2xDevice;
+ (long long)currentSOSTriggerMechanism;
+ (_Bool)mustAllowThreeClickTrigger;
+ (long long)SOSTriggerMechanismForClickCount:(long long)arg1;
+ (long long)defaultSOSTriggerMechanism;
+ (_Bool)autoCallRequiresSIM;
+ (_Bool)hasActiveSIMForClient:(id)arg1;
+ (void)setAutomaticCallCountdownEnabled:(_Bool)arg1;
+ (_Bool)longPressTriggersEmergencySOS;
+ (void)setLongPressTriggersEmergencySOS:(_Bool)arg1;
+ (_Bool)newtonTriggersEmergencySOS;
+ (void)setNewtonTriggersEmergencySOS:(_Bool)arg1;
+ (_Bool)canTriggerSOSWithClicks;
+ (long long)SOSSelectableTriggerMechanismCapability;
+ (_Bool)shouldForceDisableAutoCallForClient:(id)arg1;
+ (_Bool)shouldPlayAudioDuringCountdown;
+ (void)setPlayAudioDuringCountdown:(_Bool)arg1;
+ (void)setAllowedToMessageSOSContacts:(_Bool)arg1;

@end
