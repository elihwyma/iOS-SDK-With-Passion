/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSDictionary, NSManagedObjectModel, NSMutableDictionary, NSString, NSURL, _DPDataProtectionStateMonitor;

@protocol OS_dispatch_queue;

@interface _DPCoreDataStorage : NSObject

{
    _Bool _readOnly;
    NSString *_databaseDirectory;
    NSString *_databaseName;
    NSURL *_modelURL;
    NSDictionary *_paths;
    NSManagedObjectModel *_managedObjectModel;
    NSMutableDictionary *_managedObjectContexts;
    NSMutableDictionary *_persistentStoreCoordinators;
    NSObject<OS_dispatch_queue> *_queueMOC;
    NSObject<OS_dispatch_queue> *_queuePSC;
    _DPDataProtectionStateMonitor *_dataProtectionMonitor;
}

@property (nonatomic, readonly) NSDictionary *paths;
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, readonly) NSMutableDictionary *managedObjectContexts;
@property (nonatomic, readonly) NSMutableDictionary *persistentStoreCoordinators;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queueMOC;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queuePSC;
@property (nonatomic, readonly) _DPDataProtectionStateMonitor *dataProtectionMonitor;
@property (copy, nonatomic, readonly) NSString *databaseDirectory;
@property (copy, nonatomic, readonly) NSString *databaseName;
@property (nonatomic, readonly) NSURL *modelURL;
@property (nonatomic, readonly) _Bool readOnly;

+ (_Bool)createDatabaseDirectory:(id)arg1 error:(id *)arg2;
+ (id)persistentStoreOptionsFor:(id)arg1 readOnly:(_Bool)arg2;
+ (unsigned long long)deleteObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchOffset:(unsigned long long)arg5 fetchLimit:(unsigned long long)arg6;
+ (unsigned long long)countObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3;
+ (id)storageWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(_Bool)arg4;

- (id)init;
- (void)handleDataProtectionChangeFor:(id)arg1 willBeAvailable:(_Bool)arg2;
- (id)persistentStoreCoordinatorFor:(id)arg1;
- (id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(_Bool)arg4;
- (void)invalidateManagedObjectContextFor:(id)arg1;
- (void)invalidatePersistentStoreCoordinatorFor:(id)arg1;
- (void)handleDatabaseErrors:(id)arg1 forPSC:(id)arg2 protectionClass:(id)arg3;
- (_Bool)deleteDatabaseForPSC:(id)arg1 protectionClass:(id)arg2 obliterate:(_Bool)arg3;
- (id)mocForProtectionClass:(id)arg1;
- (unsigned long long)deleteVersionMismatchRecords:(unsigned long long)arg1 entities:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)deleteSubmittedRecords:(unsigned long long)arg1 entities:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)deleteOldObjectsToLimitTotalNumber:(unsigned long long)arg1 entities:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)deleteObjectsOlderThanDate:(id)arg1 entities:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)countObjectsForEntities:(id)arg1 predicate:(id)arg2;
- (_Bool)deleteStorageFor:(id)arg1 obliterate:(_Bool)arg2;

@end
