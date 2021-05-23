/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStaticSyncTask.h>

@class NSMutableSet, NSObject, NSProgress, NSString, NSURL, _HKArchiveCreator;

@protocol OS_dispatch_queue;

@interface HDStaticSyncExportTask : HDStaticSyncTask

{
    NSObject<OS_dispatch_queue> *_exportQueue;
    _Bool _exportToDisk;
    unsigned long long _batchSize;
    NSProgress *_exportProgress;
    NSProgress *_syncSessionProgress;
    NSMutableSet *_syncEntityIdentifiersWithProcessedChanges;
    _HKArchiveCreator *_archiveCreator;
    unsigned long long _changesetCount;
    unsigned long long _archiveCount;
    NSURL *_exportDirectoryURL;
}

@property (copy, nonatomic, readonly) NSURL *exportDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_createEmptyExportDirectoryForStoreIdentifier:(id)arg1 location:(id)arg2 error:(id *)arg3;
+ (id)_archiveCreatorInDirectory:(id)arg1 session:(id)arg2 count:(unsigned long long)arg3;
+ (id)_dataForChanges:(id)arg1;
+ (id)_chagesetFilePathForCount:(unsigned long long)arg1;
+ (long long)nextSyncAnchorForEntity:(Class)arg1 session:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id *)arg5;
+ (id)_estimateSyncEntityClassesWithChangesForSession:(id)arg1 profile:(id)arg2;
+ (_Bool)_updateAnchorRangeMap:(id)arg1 withChange:(id)arg2 outError:(id *)arg3;

- (id)runWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncSessionWillBegin:(id)arg1;
- (void)syncSession:(id)arg1 sendChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncSession:(id)arg1 didFinishSuccessfully:(_Bool)arg2 error:(id)arg3;
- (_Bool)syncSession:(id)arg1 didEndTransactionWithError:(id *)arg2;
- (id)initWithProfile:(id)arg1 options:(unsigned long long)arg2 storeIdentifier:(id)arg3 URL:(id)arg4 batchSize:(unsigned long long)arg5;
- (long long)_exportQueue_archiveChanges:(id)arg1 session:(id)arg2 error:(id *)arg3;

@end
