/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSCloudKitMirroringDelegate, NSFileManager, NSManagedObjectModel, NSMapTable, NSMutableDictionary, NSString, NSURL, _DKDataProtectionStateMonitor;

@protocol _DKCoreDataStorageDelegate;

@interface _DKCoreDataStorage : NSObject

{
    NSManagedObjectModel *_managedObjectModel;
    NSMutableDictionary *_paths;
    NSMapTable *_managedObjectContexts;
    NSMutableDictionary *_persistentStoreCoordinators;
    _DKDataProtectionStateMonitor *_dataProtectionMonitor;
    NSFileManager *_fm;
    NSCloudKitMirroringDelegate *_mirroringDelegate;
    _Bool _isManagedDatabase;
    _Bool _isDatabaseManager;
    _Bool _maintenanceRunning;
    _Bool _readOnly;
    _Bool _localOnly;
    _Bool _sync;
    _Bool _requiresManualMigration;
    NSString *_directory;
    NSURL *_modelURL;
    NSString *_databaseName;
    id <_DKCoreDataStorageDelegate> _delegate;
    NSString *_containerIdentifier;
}

@property (readonly) NSString *directory;
@property (readonly) _Bool readOnly;
@property (readonly) _Bool localOnly;
@property (readonly) _Bool sync;
@property (readonly) NSURL *modelURL;
@property (readonly) NSString *databaseName;
@property (weak) id <_DKCoreDataStorageDelegate> delegate;
@property (readonly) NSCloudKitMirroringDelegate *mirroringDelegate;
@property (readonly) NSString *containerIdentifier;
@property (nonatomic) _Bool requiresManualMigration;

+ (unsigned long long)countObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 includeSubentities:(_Bool)arg4 includePendingChanges:(_Bool)arg5;
+ (unsigned long long)deleteObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchLimit:(unsigned long long)arg5 includeSubentities:(_Bool)arg6 includePendingChanges:(_Bool)arg7;
+ (unsigned long long)deleteObjectsIfNeededToLimitTotal:(unsigned long long)arg1 context:(id)arg2 entityName:(id)arg3 predicate:(id)arg4 sortDescriptors:(id)arg5 fetchLimit:(unsigned long long)arg6 includeSubentities:(_Bool)arg7 includePendingChanges:(_Bool)arg8;
+ (unsigned long long)anonymizeObjectStringsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 batchFetchLimit:(unsigned long long)arg5 totalFetchLimit:(unsigned long long)arg6 includeSubentities:(_Bool)arg7 salt:(id)arg8;
+ (id)anonymizeString:(id)arg1 withSalt:(id)arg2;
+ (unsigned long long)deleteOrphanedEntitiesInContext:(id)arg1;
+ (unsigned long long)deleteObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchOffset:(unsigned long long)arg5 fetchLimit:(unsigned long long)arg6 includeSubentities:(_Bool)arg7 includePendingChanges:(_Bool)arg8;
+ (_Bool)forceCopyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (unsigned long long)anonymizeStringAttributesOfManagedObject:(id)arg1 withSalt:(id)arg2;
+ (unsigned long long)updateObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 batchFetchLimit:(unsigned long long)arg5 totalFetchLimit:(unsigned long long)arg6 includeSubentities:(_Bool)arg7 updateBlock:(CDUnknownBlockType)arg8;

- (id)init;
- (void)dealloc;
- (void)handleDataProtectionChangeFor:(id)arg1 willBeAvailable:(_Bool)arg2;
- (id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(_Bool)arg4 localOnly:(_Bool)arg5;
- (id)managedObjectContextFor:(id)arg1;
- (id)privateManagedObjectContextFor:(id)arg1;
- (void)closeStorageForProtectionClass:(id)arg1;
- (_Bool)deleteStorageFor:(id)arg1;
- (id)copyStorageFor:(id)arg1 toDirectory:(id)arg2;
- (id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 sync:(_Bool)arg4;
- (_Bool)isManagedObjectContextFor:(id)arg1 equalToManagedObjectContext:(id)arg2;
- (id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(_Bool)arg4 localOnly:(_Bool)arg5 sync:(_Bool)arg6;
- (id)databaseManagerName;
- (void)_registerForClientHelpNotifications;
- (void)_unregisterForClientHelpNotifications;
- (struct __CFString *)clientNeedsHelpNotification;
- (void)handleDatabaseErrors:(id)arg1 forProtectionClass:(id)arg2;
- (void)invalidateManagedObjectContextAndPersistentStoreCoordinatorFor:(id)arg1;
- (id)managedObjectContextForKey:(id)arg1;
- (void)removePersistentStoreCoordinatorFor:(id)arg1;
- (void)removeManagedObjectContextForKey:(id)arg1;
- (void)removePersistentStoresInCoordinator:(id)arg1;
- (id)managedObjectModelForVersion:(unsigned long long)arg1;
- (_Bool)isManagedObjectModel:(id)arg1 compatibleWithPersistentStoreAtURL:(id)arg2 error:(id *)arg3;
- (id)managedObjectModelURLForVersion:(unsigned long long)arg1;
- (unsigned long long)managedObjectModelVersionCompatibleWithPersistentStoreAtURL:(id)arg1 error:(id *)arg2;
- (long long)modelVersionForStoreAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)migratePersistentStoreAtURL:(id)arg1 toManagedObjectModel:(id)arg2 protectionClass:(id)arg3 startVersion:(unsigned long long)arg4 endVersion:(unsigned long long)arg5 error:(id *)arg6;
- (id)autoMigratePersistentStoreAtURL:(id)arg1 toManagedObjectModel:(id)arg2 protectionClass:(id)arg3 error:(id *)arg4;
- (_Bool)willAutoMigrateStoreAtURL:(id)arg1 fromManagedObjectModel:(id)arg2 havingVersion:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)didAutoMigratePersistentStore:(id)arg1 toManagedObjectModel:(id)arg2 havingVersion:(unsigned long long)arg3 error:(id *)arg4;
- (id)_defaultOptionsForStoreWithProtectionClass:(id)arg1;
- (id)_descriptionForStoreWithURL:(id)arg1 protectionClass:(id)arg2 sync:(_Bool)arg3;
- (_Bool)isDataVaulted;
- (id)managedObjectModel;
- (_Bool)migratePersistentStoreAtURL:(id)arg1 toManagedObjectModel:(id)arg2 protectionClass:(id)arg3 error:(id *)arg4;
- (_Bool)_addStoresToCoordinator:(id)arg1 protectionClass:(id)arg2 error:(id *)arg3;
- (id)persistentStoreCoordinatorFor:(id)arg1;
- (void)setManagedObjectContext:(id)arg1 forKey:(id)arg2;
- (id)databasePathFor:(id)arg1;
- (_Bool)_deleteDatabaseFiles:(id)arg1;
- (void)handleClientCallForHelp;
- (void)setManagedObjectModel:(id)arg1;
- (_Bool)confirmDatabaseConnectionFor:(id)arg1;

@end
