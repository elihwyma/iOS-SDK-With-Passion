/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>

@class BRCAsyncDirectoryEnumerator, BRCCountedSet, BRCFairSource, NSMutableSet, NSObject, NSString, brc_task_tracker;

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface BRCFSReader : BRCFSSchedulerBase

{
    BRCCountedSet *_coordinatedReaders;
    _Bool _readerCountReachedMax;
    BRCAsyncDirectoryEnumerator *_currentScan;
    NSMutableSet *_lostSet;
    NSObject<OS_dispatch_queue> *_lostScanQueue;
    BRCFairSource *_lostScanSource;
    NSObject<OS_dispatch_source> *_lostScanDelay;
    unsigned long long _lostScanDelaySection;
    brc_task_tracker *_taskTracker;
    _Bool _resumed;
    NSObject<OS_dispatch_group> *_lostScanGroup;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_group> *lostScanGroup;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) brc_task_tracker *taskTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCancelled;

- (void)dealloc;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)reset;
- (void)schedule;
- (void)_close;
- (void)_cancelScan;
- (id)initWithAccountSession:(id)arg1;
- (_Bool)canScheduleMoreJobs;
- (_Bool)canRetryJobWithID:(id)arg1;
- (void)fseventAtPath:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 unresolvedLastPathComponent:(id)arg4;
- (void)unscheduleAppLibraryForLostScan:(id)arg1;
- (void)scheduleAppLibraryForLostScan:(id)arg1;
- (_Bool)startReadCoordinationInAppLibrary:(id)arg1;
- (void)endReadCoordinationInAppLibrary:(id)arg1;
- (void)scanContainerDocumentsIfNeeded:(id)arg1;
- (void)fseventAtPath:(id)arg1 flags:(unsigned int)arg2;
- (_Bool)thumbnailChangedForItem:(id)arg1 relpath:(id)arg2 url:(id)arg3 error:(id *)arg4;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (void)deleteReadingJobForItem:(id)arg1;
- (void)setState:(int)arg1 forItem:(id)arg2;
- (void)createReadingJobForItem:(id)arg1 state:(int)arg2;
- (unsigned long long)_readCoordinationCount;
- (void)_scheduleCoordinatedReadForItem:(id)arg1 path:(id)arg2;
- (void)readUnderCoordinationAtURL:(id)arg1;
- (void)_scheduleReadJobWithID:(id)arg1;
- (_Bool)readUnderCoordinationWithLookup:(id)arg1;
- (id)lookupAndReadItemUnderCoordinationAtURL:(id)arg1;
- (void)fseventAtPath:(id)arg1 flags:(unsigned int)arg2 unresolvedLastPathComponent:(id)arg3;
- (void)fseventOnRoot:(id)arg1 flags:(unsigned int)arg2;
- (void)fseventOnContainer:(id)arg1 flags:(unsigned int)arg2;
- (void)fseventOnDeadPath:(id)arg1 item:(id)arg2;
- (_Bool)updateLookupAfterHandlingPathMatchWithFSRoot:(id *)arg1 relpath:(id *)arg2;
- (void)fseventOnSymlink:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)fseventOnAlias:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 lookup:(id)arg4 unresolvedLastPathComponent:(id)arg5;
- (void)fseventOnDirectory:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)fseventRecursiveAtRoot:(id)arg1 withReason:(id)arg2;
- (BOOL)needsLookupReloadAfterHandlingCrossZoneMoveWithItem:(id)arg1 relpath:(id)arg2;
- (_Bool)_createSharedZoneIfNecessaryWithLookup:(id)arg1;
- (id)itemForCreatedDocumentsDirectory:(id)arg1 appLibrary:(id)arg2 path:(id)arg3;
- (void)_refaultItem:(id)arg1 withFaultPath:(id)arg2;
- (void)_delayJobID:(id)arg1 by:(double)arg2;
- (void)_attemptSchedulingCoordinatedReadForItem:(id)arg1 path:(id)arg2;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 lookup:(id)arg4;
- (void)_fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 item:(id)arg4 lookup:(id)arg5 unresolvedLastPathComponent:(id)arg6;
- (unsigned long long)_backoffBeforeProcessingLostItemWithStamp:(unsigned long long)arg1 appLibrary:(id)arg2;
- (_Bool)_fetchNextLostItemID:(id *)arg1 parentID:(id *)arg2 appLibraryRowID:(id *)arg3 tooManyScans:(_Bool *)arg4 stamp:(long long *)arg5;
- (void)_resolveDocumentID:(unsigned int)arg1 zone:(id)arg2;
- (void)_processDeadItem:(id)arg1;
- (void)_processLostItem:(id)arg1 resolvedToPath:(id)arg2;
- (void)_scanDirectory:(id)arg1 atPath:(id)arg2 lookup:(id)arg3;
- (void)_didResolvedDocumentID:(unsigned int)arg1 fileID:(unsigned long long)arg2 zone:(id)arg3;
- (void)_scanDone:(id)arg1 atPath:(id)arg2 lookup:(id)arg3;
- (_Bool)_slowScanDirectoryAtPath:(id)arg1;
- (void)_startScanOfRelpath:(id)arg1;
- (void)_finishCurrentRelpathScan;
- (void)_finishedScanWithError:(int)arg1;
- (id)_nextLostItemIDWithBackoff:(long long *)arg1 appLibrary:(id *)arg2 now:(long long)arg3;
- (void)_processLostItem:(id)arg1;
- (void)_startScanOfRegularAppLibrary:(id)arg1;
- (void)_lostScanSchedule;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)fseventOnURL:(id)arg1 dbFlags:(unsigned int)arg2;

@end
