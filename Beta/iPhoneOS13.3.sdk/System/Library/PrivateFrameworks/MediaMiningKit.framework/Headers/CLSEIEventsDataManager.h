/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSMutableDictionary, NSPersistentStoreCoordinator, NSURL;

@protocol OS_dispatch_queue;

@interface CLSEIEventsDataManager : NSObject

{
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSURL *_diskCacheURL;
    NSMutableDictionary *_venueCache;
    NSMutableDictionary *_artistCache;
    NSMutableDictionary *_categoryCache;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

@property (nonatomic, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, readonly) NSURL *diskCacheURL;
@property (nonatomic, readonly) NSMutableDictionary *venueCache;
@property (nonatomic, readonly) NSMutableDictionary *artistCache;
@property (nonatomic, readonly) NSMutableDictionary *categoryCache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cacheQueue;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;

- (void)clear;
- (_Bool)save;
- (_Bool)_save;
- (id)initWithDiskCacheURL:(id)arg1;
- (void)clearFastAccessCache;
- (void)_resetCoreDataStack;
- (id)insertVenueWithUUID:(long long)arg1 name:(id)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;
- (id)insertEventWithUUID:(long long)arg1 name:(id)arg2;
- (id)insertCategoryWithName:(id)arg1;
- (id)insertArtistWithUUID:(long long)arg1 name:(id)arg2;
- (id)fetchEventForUUID:(long long)arg1;
- (id)fetchVenueForUUID:(long long)arg1;
- (id)fetchArtistForUUID:(long long)arg1;
- (id)fetchCategoryForName:(id)arg1;
- (id)_fetchManagedObjectWithEntityName:(id)arg1 uuid:(long long)arg2;
- (id)_fetchManagedObjectWithEntityName:(id)arg1 name:(id)arg2;

@end
