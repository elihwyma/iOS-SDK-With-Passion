/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADSourceOperationGroup : CADOperationGroup <Swift>

+ (_Bool)requiresEventAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventOrReminderAccess;

- (void)CADDatabaseGetSourcesWithFaultedProperties:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetLocalSource:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetLocalBirthdaySource:(CDUnknownBlockType)arg1;
- (void)CADSourceGetConstraints:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADSourceGetNotificationCollection:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADSourceRefresh:(id)arg1 isUserRequested:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADCountCalendarItemsOfType:(int)arg1 inSource:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADRemoveCalendarItemsOlderThanDate:(id)arg1 ofType:(int)arg2 inSource:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADSourceGetGrantedDelegatesList:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADSourceUpdateGrantedDelegatePermission:(id)arg1 sourceID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADSourceGetManagedConfigurationAccountAccess:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (int)_tryPerformBlockWithSourceID:(id)arg1 forAction:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (int)_tryPerformBlockWithSourceID:(id)arg1 forAction:(unsigned long long)arg2 entityType:(int)arg3 withBlock:(CDUnknownBlockType)arg4;

@end
