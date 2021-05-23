/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCSyncDownOperation.h>

@class CKQueryCursor, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCMigrationQueryOperation : BRCSyncDownOperation

{
    NSString *_migrationKey;
    CKQueryCursor *_continuationCursor;
    NSMutableArray *_shareIDsToFetch;
}

+ (id)documentSharesMigrationKey;
+ (id)folderSharesMigrationKey;
+ (id)allMigrationKeysOrdered;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)initWithServerZone:(id)arg1 migrationKey:(id)arg2 continuationCursor:(id)arg3;
- (_Bool)_updatedContinuationCursor:(id)arg1 error:(id *)arg2;
- (void)_performQuery:(id)arg1 recordFetchedBlock:(CDUnknownBlockType)arg2 cursorUpdatedBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_performAfterQueryingForShareIDsOfFolders:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end
