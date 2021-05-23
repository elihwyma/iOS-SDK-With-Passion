/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADReminderOperationGroup : CADOperationGroup <Swift>

+ (_Bool)requiresEventAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventOrReminderAccess;

- (void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseSetDefaultCalendarForNewReminders:(id)arg1;
- (void)CADDatabaseGetCountOfRemindersWithPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetProperties:(id)arg1 forReminders:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADScheduledTaskCacheGetDaysAndTaskCounts:(CDUnknownBlockType)arg1;

@end
