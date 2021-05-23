/*
 Image: /System/Library/PrivateFrameworks/EmergencyAlerts.framework/EmergencyAlerts
 */

#import <UserNotifications/UNMutableNotificationContent.h>

@interface UNMutableNotificationContent (EmergencyAlerts)

- (void)ea_setPropertiesForCellBroadcastMessage:(id)arg1 withActivePhoneCall:(_Bool)arg2;
- (id)ea_timestampSubtitleForDate:(id)arg1 locale:(id)arg2;
- (id)ea_operatorPreferences;
- (id)ea_defaultTitle;
- (id)ea_timestampSubtitleForNow;
- (id)ea_bundleForBundleIdentifier:(id)arg1;
- (id)ea_externalToneFileURLForTone:(id)arg1 inBundle:(id)arg2;
- (id)ea_externalVibrationPatternFileURLForVibration:(id)arg1 inBundle:(id)arg2;
- (id)ea_operatorPreferenceForSoundIsMutableInRelayMode;

@end
