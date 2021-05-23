/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@protocol CADCalendarItemInterface

- (unsigned short)CADDatabaseGetCalendarItemWithUUID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetCalendarItemsWithUniqueIdentifier:inCalendar:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseFetchCalendarItemsWithPredicate:entityType:fetchIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseCancelFetchRequestWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseExportCalendarItemAsICS:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetContactIdentifierForCalendarItem:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseAddContactWithIdentifier:forCalendarItem:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseRemoveContactIdentifier:forCalendarItem:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseCountEntitiesOfType:withContactIdentifier:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseFetchEntitiesOfType:withContactIdentifier:withReply: /* Error: Ran out of types for this method. */;

@end
