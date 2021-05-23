/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, NSString, brc_task_tracker;

@protocol OS_dispatch_queue;

@interface BRCFSWriter : NSObject

{
    BRCAccountSession *_session;
    _Atomic int _suspendCount;
    NSObject<OS_dispatch_queue> *_serialQueue;
    brc_task_tracker *_taskTracker;
    _Bool _isCancelled;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) brc_task_tracker *taskTracker;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCancelled;

- (void)close;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (id)initWithAccountSession:(id)arg1;
- (void)applyChangesForServerItem:(id)arg1 localItem:(id)arg2 rank:(long long)arg3 zone:(id)arg4 activity:(id)arg5 hasFinished:(_Bool *)arg6;
- (_Bool)applyLocalEditIfNecessaryToURL:(id)arg1 forItem:(id)arg2 forDelete:(_Bool)arg3 error:(id *)arg4;
- (_Bool)bouncePathMatchesForLookup:(id)arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3;
- (void)fixupItemsAtStartup;
- (id)bouncePath:(id)arg1 forItemConflictingWithAnFSRoot:(id)arg2;
- (_Bool)bouncePathMatch:(const CDStruct_177058d5 *)arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3;
- (id)_generateGentlePhysicalBounceNameForPathMatch:(const CDStruct_177058d5 *)arg1 dirfd:(int)arg2 lastBounceNo:(unsigned long long *)arg3;
- (void)_applyChangesForServerAlias:(id)arg1 localAlias:(id)arg2 jobID:(long long)arg3 zone:(id)arg4 diffs:(unsigned long long)arg5;
- (void)_stageCreationOfDirectory:(id)arg1;
- (void)_stageCreationOfSymlink:(id)arg1;
- (void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(_Bool)arg3;
- (void)_writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(_Bool)arg3;

@end
