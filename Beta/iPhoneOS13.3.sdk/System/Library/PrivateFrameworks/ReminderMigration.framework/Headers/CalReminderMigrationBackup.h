/*
 Image: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CalReminderMigrationBackup : NSObject

+ (_Bool)removeExistingBackupInCalendarDirectory:(id)arg1 error:(id *)arg2;
+ (id)_backupFileInCalendarDirectory:(id)arg1;
+ (_Bool)backupCalendarDirectory:(id)arg1 error:(id *)arg2;
+ (_Bool)shouldBackupCalendarDirectory:(id)arg1 withPrivacySafePathProvider:(id)arg2 reminderMigrationDefaultsProvider:(id)arg3;

@end
