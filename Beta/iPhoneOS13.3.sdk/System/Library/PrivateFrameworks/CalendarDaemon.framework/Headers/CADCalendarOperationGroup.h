/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADCalendarOperationGroup : CADOperationGroup <Swift>

+ (_Bool)requiresEventAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventOrReminderAccess;

- (void)CADDatabaseGetCalendarsWithFaultedProperties:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADCalendar:(id)arg1 hasEvents:(CDUnknownBlockType)arg2;
- (void)CADCalendar:(id)arg1 hasReminders:(CDUnknownBlockType)arg2;
- (void)CADCalendar:(id)arg1 removeAllCalendarItems:(CDUnknownBlockType)arg2;
- (int)_tryPerformBlockWithCalendarID:(id)arg1 forAction:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;

@end
