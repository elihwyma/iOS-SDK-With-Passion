/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/CHLogger.h>

@class NSPersistentStoreCoordinator;

@interface DBManager : CHLogger

{
    NSPersistentStoreCoordinator *fPersistentStoreCoordinator;
}

@property (retain, nonatomic) NSPersistentStoreCoordinator *fPersistentStoreCoordinator;

+ (long long)versionForDBAtLocation:(id)arg1;
+ (long long)isDataStoreAtURLInitialized:(id)arg1 withModelAtURL:(id)arg2;
+ (id)instanceWithModelURL:(id)arg1;
+ (id)entityDescriptionHavingName:(id)arg1 forContext:(id)arg2;
+ (id)getPropertyValueForKey:(id)arg1 forContext:(id)arg2;
+ (void)setPropertyValue:(id)arg1 forKey:(id)arg2 forContext:(id)arg3;
+ (long long)versionForManagedObjectModel:(id)arg1;
+ (id)getPersistentCoordinator:(id)arg1;
+ (id)modelForDBAtLocation:(id)arg1;
+ (id)persistentStoreOptions:(_Bool)arg1;
+ (long long)mapToDBMErrorCode:(id)arg1;
+ (id)migrateDataStoreAtLocation:(id)arg1 withGetDestinationModel:(CDUnknownBlockType)arg2 isEncrypted:(_Bool)arg3;
+ (_Bool)destroyDBAtLocation:(id)arg1 withModelAtLocation:(id)arg2;
+ (_Bool)moveDBAtLocation:(id)arg1 toLocation:(id)arg2 withModelAtLocation:(id)arg3;
+ (id)getStoreURLforContext:(id)arg1;
+ (id)mangedObjectWithURI:(id)arg1 inContext:(id)arg2;
+ (_Bool)makeDatabaseAtURLClassCDataProtected:(id)arg1;
+ (_Bool)replacePersistentStore:(id)arg1 withURL:(id)arg2;

- (id)init;
- (id)createManagedObjectContext;
- (_Bool)addDataStoreAtLocation:(id)arg1 isEncrypted:(_Bool)arg2;
- (void)removeDataStoreAtLocation:(id)arg1;

@end
