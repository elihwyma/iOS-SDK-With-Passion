/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3ImportOperation.h>

@class ML3DatabaseConnection, NSMutableSet, NSObject;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ML3ProtoSyncImportOperation : ML3ImportOperation

{
    unsigned int _totalSyncPackageCount;
    unsigned int _syncPackageNum;
    _Bool _syncSessionStarted;
    int _syncType;
    ML3DatabaseConnection *_connection;
    _Bool _isServerImport;
    long long _readSourceState;
    _Bool _isReadSourceCancelled;
    _Bool _importFinished;
    NSMutableSet *_syncIdsToUnlink;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_source> *_readSource;
}

- (void)cancel;
- (void)main;
- (unsigned long long)importSource;
- (id)initWithDatabaseImport:(id)arg1;
- (_Bool)_performImportWithTransaction:(id)arg1;
- (_Bool)_processSyncPackage:(id)arg1 withImportSession:(struct ML3ImportSession *)arg2;
- (void)_unlinkUnavailableMediaItems;
- (_Bool)_processSyncHeader:(id)arg1;
- (_Bool)_processSyncError:(id)arg1;
- (_Bool)_processSyncOperation:(id)arg1 withImportSession:(struct ML3ImportSession *)arg2;
- (_Bool)_processMediaItemOperation:(id)arg1 withImportSession:(struct ML3ImportSession *)arg2;
- (_Bool)_processPlaylistOperation:(id)arg1 withImportSession:(struct ML3ImportSession *)arg2;

@end
