/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADSyncOperationGroup : CADOperationGroup <Swift>

+ (_Bool)requiresEventAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventOrReminderAccess;

- (void)CADDatabaseGetDeletableCalendars:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetDeletableSources:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetOrCreateSubscribedCalendarsSource:(CDUnknownBlockType)arg1;
- (_Bool)accessGrantedToPerformSelector:(SEL)arg1;

@end
