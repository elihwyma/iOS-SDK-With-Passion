/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CADNotificationUtilities : NSObject

+ (void)CADDatabaseGetEventNotificationItemsWithDatabase:(struct CalDatabase *)arg1 forSourceWithExternalIdentifier:(id)arg2 excludingDelegateSources:(_Bool)arg3 filteredByShowsNotificationsFlag:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;
+ (_Bool)storeIsReadOnlyDelegate:(const void *)arg1;
+ (_Bool)_shouldSkipNotificationForStore:(const void *)arg1 forSourceWithExternalIdentifier:(id)arg2 excludingDelegateSources:(_Bool)arg3 filteredByShowsNotificationsFlag:(_Bool)arg4;
+ (_Bool)_event:(const void *)arg1 hasOccurrenceEndingAfterDate:(double)arg2 database:(struct CalDatabase *)arg3;
+ (void)_logNotificationCountsForNotificationTypes:(id)arg1;
+ (_Bool)_storeIsDelegate:(const void *)arg1;
+ (id)_stringForNotificationType:(int)arg1;

@end
