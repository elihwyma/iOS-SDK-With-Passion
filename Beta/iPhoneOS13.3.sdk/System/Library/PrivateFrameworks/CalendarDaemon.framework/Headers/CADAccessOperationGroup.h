/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADAccessOperationGroup : CADOperationGroup <Swift>

+ (_Bool)requiresEventAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventOrReminderAccess;

- (void)CADDatabaseSetInitializationOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetAccess:(CDUnknownBlockType)arg1;

@end
