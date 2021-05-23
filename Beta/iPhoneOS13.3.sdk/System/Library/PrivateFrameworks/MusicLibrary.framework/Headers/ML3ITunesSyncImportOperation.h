/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3ImportOperation.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface ML3ITunesSyncImportOperation : ML3ImportOperation

{
    _Bool _sagaIsEnabled;
    _Bool _resetSync;
    NSMutableDictionary *_cachedPIDToFilePathMap;
    NSMutableDictionary *_cachedPIDToLocationPropertyMap;
    NSMutableDictionary *_cachedSyncIDsToPIDsMap;
    NSMutableSet *_importedPlaylists;
    long long _devicePrimaryContainer;
}

- (void)main;
- (unsigned long long)importSource;
- (_Bool)_performImportWithTransaction:(id)arg1;
- (_Bool)_processSyncOperation:(id)arg1 withImportSession:(struct ML3ImportSession *)arg2;
- (_Bool)_performImportOfTrackData:(id)arg1 WithTransaction:(id)arg2;
- (void)_archiveSyncPlistFiles;
- (id)_syncPlistFilesFromDirectory:(id)arg1;
- (_Bool)_performImportFromPlistFiles:(id)arg1 withTransaction:(id)arg2;
- (id)_syncOperationsFromPlistFile:(id)arg1;
- (void)_recoverExistingAsset:(id)arg1 forTrackId:(long long)arg2;
- (_Bool)_processInsertTrackOperation:(id)arg1 withImportSession:(struct ML3ImportSession *)arg2;
- (_Bool)_processUpdateTrackOperation:(id)arg1 withImportSession:(struct ML3ImportSession *)arg2;
- (_Bool)_processDeleteTrackOperation:(id)arg1 withImportSession:(struct ML3ImportSession *)arg2;
- (_Bool)_processInsertPlaylistOperation:(id)arg1 withImportSession:(struct ML3ImportSession *)arg2;
- (_Bool)_processUpdatePlaylistOperation:(id)arg1 withImportSession:(struct ML3ImportSession *)arg2;
- (_Bool)_processDeletePlaylistOperation:(id)arg1 withImportSession:(struct ML3ImportSession *)arg2;
- (_Bool)_processUpdateDBInfoOperation:(id)arg1 withImportSession:(struct ML3ImportSession *)arg2;
- (id)_dbInfoValuesForStep:(id)arg1;
- (void)_processGeniusConfigPlist:(id)arg1;

@end
