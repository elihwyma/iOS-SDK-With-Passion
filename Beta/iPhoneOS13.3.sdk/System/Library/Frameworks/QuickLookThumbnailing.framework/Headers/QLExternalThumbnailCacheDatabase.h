/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSURL, PQLConnection;

@interface QLExternalThumbnailCacheDatabase : NSObject

{
    NSURL *_databaseURL;
    PQLConnection *_db;
}

@property (nonatomic, readonly) NSURL *databaseURL;
@property (nonatomic, readonly) PQLConnection *db;

- (id)initWithURL:(id)arg1;
- (_Bool)open;
- (void)close;
- (id)pathExtensionForItem:(id)arg1 error:(id *)arg2;
- (_Bool)removeAllThumbnails:(id *)arg1;
- (unsigned long long)totalThumbnailsSize;
- (id)deleteOldestThumbnailsToFreeAtLeastSpace:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)insertOrReplaceThumbnailRepresentingFPItem:(id)arg1 size:(unsigned long long)arg2 modificationDate:(id)arg3 fileExtension:(id)arg4 error:(id *)arg5;
- (id)_openDatabaseAtURL:(id)arg1;
- (id)_createDatabaseIfNeededAtURL:(id)arg1 error:(id *)arg2;
- (id)_setupDatabaseTablesIfNeeded:(id)arg1 error:(id *)arg2;
- (void)logError:(id)arg1 onDB:(id)arg2 statement:(id)arg3;
- (void)_closeDatabaseOnItsQueue:(id)arg1;
- (id)oldestThumbnailsToFreeAtLeastSpace:(unsigned long long)arg1 error:(id *)arg2;
- (struct NSObject *)whereClauseForItem:(id)arg1;
- (unsigned long long)totalThumbnailCount;
- (_Bool)deleteOldestThumbnail;

@end
