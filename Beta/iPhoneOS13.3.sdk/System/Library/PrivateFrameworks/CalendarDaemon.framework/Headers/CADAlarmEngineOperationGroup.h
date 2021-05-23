/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADAlarmEngineOperationGroup : CADOperationGroup <Swift>

+ (_Bool)requiresEventAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventOrReminderAccess;
+ (id)whitelistedBundles;

- (void)CADDatabaseGetAlarmWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(id)arg1 toEnd:(id)arg2 inCalendars:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADDatabaseGetLocationBasedAlarmsWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetVehicleTriggerAlarmsWithReply:(CDUnknownBlockType)arg1;
- (_Bool)_hasAccessToAlarmsOnCalendar:(void *)arg1;

@end
