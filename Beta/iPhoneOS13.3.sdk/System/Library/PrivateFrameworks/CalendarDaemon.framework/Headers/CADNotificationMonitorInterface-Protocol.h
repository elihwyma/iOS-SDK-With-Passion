/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@protocol CADNotificationMonitorInterface

- (unsigned short)CADDatabaseGetSharedCalendarInvitationsWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADCalendarSetClearedFromNotificationCenter:error: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetResourceChanges: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetInviteReplyNotifications: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetEventNotificationItemsFilteredByShowsNotificationsFlag:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:excludingDelegateSources:filteredByShowsNotificationsFlag:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetInboxRepliedSectionItems: /* Error: Ran out of types for this method. */;
- (unsigned short)CADEvent:setAlertedWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)CADCalendar:setAlertedWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)CADResourceChange:setAlertedWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)CADInviteReplyNotification:setAlertedWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)CADEventSetInvitationStatus:forEvent:error: /* Error: Ran out of types for this method. */;

@end
