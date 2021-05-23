/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSPersistentStoreCoordinator, NSURL, PLLazyObject;

@protocol PLXPCPhotoLibraryStorePolicy;

@interface PLPersistentContainer : NSObject

{
    PLLazyObject *_lazyAssetdClient;
    struct os_unfair_lock_s _sharedPersistentStoreCoordinatorLock;
    NSPersistentStoreCoordinator *_sharedPersistentStoreCoordinator;
    _Bool _sharedPersistentStoreCoordinatorRemoved;
    NSURL *_libraryURL;
    id <PLXPCPhotoLibraryStorePolicy> _xpcStorePolicy;
}

@property (readonly) NSURL *libraryURL;
@property (retain) id <PLXPCPhotoLibraryStorePolicy> xpcStorePolicy;
@property (readonly) NSPersistentStoreCoordinator *sharedPersistentStoreCoordinator;

+ (id)managedObjectModel;
+ (void)_getPersistentStoreURL:(id *)arg1 options:(id *)arg2 forDatabasePath:(id)arg3 enableOrderKeyNotifications:(_Bool)arg4;
+ (long long)_migrateOrRebuildDatabaseWithSharedPersistentStoreCoordinator:(id)arg1 modelMigrator:(id)arg2 migrationPolicy:(unsigned int)arg3 error:(id *)arg4;
+ (id)managedObjectModelURL;
+ (void)getConfigurationForDatabasePath:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (_Bool)_destroyPhotosDatabaseWithPath:(id)arg1 backupToPath:(id)arg2;
+ (void)removePhotosDatabaseWithPathManager:(id)arg1;
+ (long long)_openAndMigrateStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 modelMigrator:(id)arg4 migrationPolicy:(unsigned int)arg5 error:(id *)arg6;
+ (_Bool)hasConfiguredPhotoLibrary;
+ (void)getPersistentStoreURL:(id *)arg1 options:(id *)arg2 forDatabasePath:(id)arg3;

- (void)removeSharedPersistentStoreCoordinator;
- (id)initWithLibraryURL:(id)arg1 lazyAssetsdClient:(id)arg2;
- (id)newPersistentStoreCoordinatorForMigration:(id *)arg1;
- (id)newSharedPersistentStoreCoordinator;
- (long long)configureSharedPersistentStoreCoordinatorAndMigrateOrRebuildIfNecessaryWithModelMigrator:(id)arg1 migrationPolicy:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)shouldUseXPCPhotoLibraryStore;
- (_Bool)_configureXPCPersistentStoreCoordinator:(id)arg1 error:(id *)arg2;
- (_Bool)_configurePersistentStoreCoordinator:(id)arg1 overrideCurrentModelVersionInStore:(_Bool)arg2 error:(id *)arg3;

@end
