/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, NSString, br_pacer;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCDiskSpaceReclaimer : NSObject

{
    BRCAccountSession *_session;
    _Bool _isClosed;
    _Bool _computingPurgable;
    br_pacer *_purgePacer;
    struct CacheDeleteToken *_purgeRequest;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (int)simpleUrgencyForCacheDeleteUrgency:(int)arg1;
+ (int)urgencyForCacheDeleteUrgency:(int)arg1;
+ (double)accessTimeDeltaForUrgency:(int)arg1;
+ (double)onDiskAccessTimeDeltaForUrgency:(int)arg1;

- (void)close;
- (void)computePurgeableSpaceForAllUrgenciesWithReply:(CDUnknownBlockType)arg1;
- (id)initWithAccountSession:(id)arg1;
- (long long)cachedPurgeableSpaceForUrgency:(int)arg1;
- (long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2;
- (long long)periodicReclaimSpace;
- (id)accessTimestampForDocument:(id)arg1;
- (void)requestPurgeSpace;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (_Bool)renameAndUnlinkInBackgroundItemAtRelpath:(id)arg1;
- (_Bool)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2;
- (_Bool)documentWasCreated:(id)arg1;
- (_Bool)documentWasUpdated:(id)arg1 diffs:(unsigned long long)arg2;
- (_Bool)documentWasDeleted:(id)arg1;
- (void)didAccessDocument:(id)arg1;
- (long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(_Bool)arg2;
- (_Bool)performOptimizeStorageWithTimeDelta:(double)arg1 onDiskAccessTimeDelta:(double)arg2 error:(id *)arg3;
- (_Bool)overwriteDocumentAccessTime:(id)arg1 atime:(unsigned long long)arg2;
- (void)_requestPurgeSpace;
- (long long)_dbAutovacuumableSpaceInBytes:(id)arg1;
- (long long)_doIncrementalVacuum:(id)arg1 amount:(long long)arg2;
- (long long)_dbSizeInBytes:(id)arg1;
- (long long)_fullVacuumIfPossible:(id)arg1;
- (void)_asyncAutovacuumIfNeeds:(id)arg1;
- (void)_enumerateItemsForEvictSyncWithBlock:(CDUnknownBlockType)arg1 withUrgency:(int)arg2;
- (long long)_vacuumDB:(id)arg1 amount:(long long)arg2 withUrgency:(int)arg3;
- (void)_updateNonPurgeableCachedSizeForDocument:(id)arg1;
- (_Bool)documentUpdateEvictability:(id)arg1;
- (void)_updateNonPurgeableCachedSizeByAddingBytes:(long long)arg1;
- (void)_enumerateItemsForEvictSyncWithBlock:(CDUnknownBlockType)arg1 withTimeDelta:(double)arg2 onDiskAccessTimeDelta:(double)arg3;
- (void)cachedPurgeableSpaceForAllUrgencies:(id *)arg1 nonPurgeableSpace:(id *)arg2 error:(id *)arg3;
- (_Bool)documentWasAccessedRecently:(id)arg1;

@end
