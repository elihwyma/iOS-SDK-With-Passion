/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSURL;

@interface CLSDBCache : NSObject

{
    _Bool _supportsVersioning;
    NSURL *_diskCacheURL;
    NSString *_dataModelName;
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

@property (nonatomic, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (copy, nonatomic, readonly) NSURL *diskCacheURL;
@property (copy, nonatomic, readonly) NSString *dataModelName;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) _Bool supportsVersioning;

+ (void)initialize;
+ (id)defaultCache;
+ (id)applicationDataUrlQueueWithURL:(id)arg1;
+ (id)defaultCacheName;
+ (_Bool)locationIsValidForDatabaseAtURL:(id)arg1;
+ (id)urlForGraphApplicationData;
+ (id)currentApplicationDataUrlQueue;
+ (id)diskCacheWithName:(id)arg1;

- (_Bool)save;
- (_Bool)_save;
- (id)formatVersion;
- (void)invalidateDiskCaches;
- (void)_resetCoreDataStack;
- (void)invalidateMemoryCaches;
- (id)initWithDiskCacheName:(id)arg1;
- (id)initWithDiskCacheName:(id)arg1 dataModelName:(id)arg2;
- (id)initAtURL:(id)arg1;
- (void)_saveAsync;

@end
