/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADNotificationMonitorOperationGroup : CADOperationGroup <Swift>

+ (_Bool)requiresEventAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventOrReminderAccess;
+ (id)whitelistedBundles;

- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(CDUnknownBlockType)arg1;
- (void)CADCalendarSetClearedFromNotificationCenter:(id)arg1 error:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetResourceChanges:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetInviteReplyNotifications:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetEventNotificationItemsFilteredByShowsNotificationsFlag:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:(id)arg1 excludingDelegateSources:(_Bool)arg2 filteredByShowsNotificationsFlag:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADDatabaseGetInboxRepliedSectionItems:(CDUnknownBlockType)arg1;
- (void)CADEvent:(id)arg1 setAlertedWithError:(CDUnknownBlockType)arg2;
- (void)CADCalendar:(id)arg1 setAlertedWithError:(CDUnknownBlockType)arg2;
- (void)CADResourceChange:(id)arg1 setAlertedWithError:(CDUnknownBlockType)arg2;
- (void)CADInviteReplyNotification:(id)arg1 setAlertedWithError:(CDUnknownBlockType)arg2;
- (void)CADEventSetInvitationStatus:(int)arg1 forEvent:(id)arg2 error:(CDUnknownBlockType)arg3;

@end
