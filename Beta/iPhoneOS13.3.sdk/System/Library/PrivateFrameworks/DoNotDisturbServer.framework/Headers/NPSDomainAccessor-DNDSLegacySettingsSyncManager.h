/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <NanoPreferencesSync/NPSDomainAccessor.h>

@interface NPSDomainAccessor (DNDSLegacySettingsSyncManager)

- (id)dnds_bypassSettings;
- (void)dnds_setBypassSettings:(id)arg1;
- (id)dnds_scheduleSettingsWithLastUpdated:(id)arg1;
- (void)dnds_setScheduleSettings:(id)arg1;

@end
