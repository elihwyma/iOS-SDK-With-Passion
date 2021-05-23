/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSManagedObjectContext, NSPersistentStoreCoordinator, NSURL;

__attribute__((visibility("hidden")))
@interface ACDDatabaseMigrator : NSObject

{
    NSManagedObjectContext *_migrationContext;
    NSPersistentStoreCoordinator *_privateCoordinator;
    NSURL *_databaseURL;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSDictionary *_storeOptions;
}

@property (nonatomic, readonly) NSURL *databaseURL;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (copy, nonatomic, readonly) NSDictionary *storeOptions;

+ (id)new;

- (id)init;
- (id)initForDatabaseAtURL:(id)arg1 persistentStoreCoordinator:(id)arg2 storeOptions:(id)arg3;
- (_Bool)runReturningError:(id *)arg1;
- (id)_setUpContextForMigration;
- (long long)_versionForModel:(id)arg1;
- (void)_migrateAccessAuthorizationsToTCCFromModelVersion:(long long)arg1;
- (void)_migrateNameAttributeOfDataclassEntities;
- (void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(long long)arg1;
- (void)_postProcessMigrationFromVersion:(long long)arg1 migrationData:(id)arg2;
- (id)_fetchAllAuthorizationEntitiesForModelVersion:(long long)arg1;
- (id)_fetchAllDataclassEntitles;
- (id)_compatibleModelForStoreAtURL:(id)arg1;

@end
