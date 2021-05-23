/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSPredicate, NSString;

@interface OFLocationCache : NSObject

{
    NSString *_diskCacheFilepath;
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectContext *_parentManagedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPredicate *_predicateEntryTemplate;
    NSPredicate *_predicateEntryWithLocalRegionTemplate;
}

@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (id)defaultCache;

- (id)init;
- (void)dealloc;
- (_Bool)save;
- (_Bool)_save;
- (void)invalidateDiskCaches;
- (void)invalidateMemoryCaches;
- (void)invalidateCacheForLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)setPlacemarks:(id)arg1 forLocationCoordinate:(struct CLLocationCoordinate2D)arg2;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D)arg1 andAccuracy:(double)arg2;
- (void)_didEnterBackgroundNotification;
- (void)_willTerminateNotification;
- (id)initWithDiskCacheFilepath:(id)arg1;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D)arg1 andAccuracy:(double)arg2 closestResultDistance:(double *)arg3 numberOfResults:(unsigned long long *)arg4;

@end
