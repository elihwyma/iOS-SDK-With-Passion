/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSPredicate, NSString;

@interface OFMediaMetadataCache : NSObject

{
    NSString *_diskCacheFilepath;
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectContext *_parentManagedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPredicate *_predicateEntryIdentifierTemplate;
}

@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (id)init;
- (void)dealloc;
- (_Bool)save;
- (_Bool)_save;
- (void)invalidateDiskCaches;
- (void)invalidateMemoryCaches;
- (void)_didEnterBackgroundNotification;
- (void)_willTerminateNotification;
- (id)initWithDiskCacheFilepath:(id)arg1;
- (id)managedObjectForIdentifier:(id)arg1;

@end
