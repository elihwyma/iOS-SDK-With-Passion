/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADCalendarItemOperationGroup : CADOperationGroup <Swift>

+ (_Bool)requiresEventAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventOrReminderAccess;

- (void)CADDatabaseGetCalendarItemWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(id)arg1 inCalendar:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(id)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;
- (void)CADDatabaseExportCalendarItemAsICS:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetContactIdentifierForCalendarItem:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseAddContactWithIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseRemoveContactIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseCountEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseFetchEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (id)_resultsFilteredForTCCAccess:(id)arg1;
- (id)_resultsFilteredForJunkEvents:(id)arg1;

@end
