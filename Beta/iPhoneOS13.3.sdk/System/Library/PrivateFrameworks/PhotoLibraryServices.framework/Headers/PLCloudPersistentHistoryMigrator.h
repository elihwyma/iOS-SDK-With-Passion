/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, PLCloudBatchUploader, PLCloudPhotoLibraryUploadTracker;

@protocol PLCloudPersistentHistoryMigratorContext;

@interface PLCloudPersistentHistoryMigrator : NSObject

{
    PLCloudBatchUploader *_uploader;
    PLCloudPhotoLibraryUploadTracker *_uploadTracker;
    NSManagedObjectContext *_managedObjectContext;
    id <PLCloudPersistentHistoryMigratorContext> _migratorContext;
}

+ (void)migrateToPersistentHistoryIfNecessaryWithUploader:(id)arg1 uploadTracker:(id)arg2 managedObjectContext:(id)arg3 migratorContext:(id)arg4;

- (id)initWithUploader:(id)arg1 uploadTracker:(id)arg2 managedObjectContext:(id)arg3 migratorContext:(id)arg4;
- (void)migrateToPersistentHistoryIfNecessary;
- (long long)migrate;
- (_Bool)checkForExistingMigrationMarker;
- (_Bool)readLastKnownChangeHubIndex:(unsigned long long *)arg1;
- (id)fetchChangeHubEventsSinceLastKnownIndex:(unsigned long long)arg1;
- (id)fetchAllPersistentHistoryTransactions;
- (void)uploadEventResults:(id)arg1;
- (void)updateSavedTokenFromPersistentHistoryResult:(id)arg1;

@end
