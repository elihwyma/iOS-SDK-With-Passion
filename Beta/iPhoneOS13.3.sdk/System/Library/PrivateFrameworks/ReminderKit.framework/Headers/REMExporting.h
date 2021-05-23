/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@interface REMExporting : NSObject

+ (id)exportICSCalendarFromReminders:(id)arg1 exportingOption:(long long)arg2;
+ (id)_icsCalendarItemsFromReminders:(id)arg1 exportingOption:(long long)arg2;
+ (id)icsTodoFromReminder:(id)arg1 exportingOption:(long long)arg2;
+ (_Bool)_updateICSComponentWithReminder:(id)arg1 icsCalendarItem:(id)arg2;
+ (id)exportICSCalendarFromReminders:(id)arg1;
+ (id)icsTodoFromReminder:(id)arg1;

@end
