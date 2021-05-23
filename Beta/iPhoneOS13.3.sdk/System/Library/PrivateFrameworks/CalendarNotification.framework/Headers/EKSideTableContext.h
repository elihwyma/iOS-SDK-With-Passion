/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <CoreData/NSManagedObjectContext.h>

@class NSString;

@interface EKSideTableContext : NSManagedObjectContext

{
    NSString *_path;
}

+ (id)sideTableContext;

- (id)initWithConcurrencyType:(unsigned long long)arg1;
- (id)_managedObjectModel;
- (id)_persistentStoreCoordinator;
- (id)settingForKey:(id)arg1;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)delayedProximityAlarms;
- (id)refiringAlarms;
- (void)deleteAllAlarms;
- (id)insertNewAlarm;
- (id)nextAlarmFireTime;
- (id)alarmsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (_Bool)refiringAlarmAlreadyExists:(int)arg1;
- (id)_alarmsMatchingPredicate:(id)arg1;
- (id)_settingForKey:(id)arg1;
- (id)rootDirectory;
- (id)_pathForPersistentStore;
- (id)_urlForPersistentStore;
- (_Bool)_removeSqliteFiles;

@end
