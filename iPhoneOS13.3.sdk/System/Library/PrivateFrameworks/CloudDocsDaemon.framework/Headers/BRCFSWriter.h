//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCAccountSession, brc_task_tracker;
@protocol OS_dispatch_queue;

@interface BRCFSWriter : NSObject <BRCModule>
{
    BRCAccountSession *_session;
    _Atomic int _suspendCount;
    NSObject<OS_dispatch_queue> *_serialQueue;
    brc_task_tracker *_taskTracker;
    BOOL _isCancelled;
}

+ (BOOL)_isPathMatchIdle:(const CDStruct_177058d5 )arg1;
+ (BOOL)_shouldForceApplyForItem:(id)arg1;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) brc_task_tracker *taskTracker; // @synthesize taskTracker=_taskTracker;
@property(readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
// - (void).cxx_destruct;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)close;
- (id)initWithAccountSession:(id)arg1;
- (void)fixupItemsAtStartup;
- (void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3;
- (void)_writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3;
- (void)applyChangesForServerItem:(id)arg1 localItem:(id)arg2 rank:(long long)arg3 zone:(id)arg4 activity:(id)arg5 hasFinished:(BOOL )arg6;
- (void)_applyChangesForServerAlias:(id)arg1 localAlias:(id)arg2 jobID:(long long)arg3 zone:(id)arg4 diffs:(NSUInteger)arg5;
- (BOOL)applyLocalEditIfNecessaryToURL:(id)arg1 forItem:(id)arg2 forDelete:(BOOL)arg3 error:(id )arg4;
- (void)_stageCreationOfSymlink:(id)arg1;
- (void)_stageCreationOfDirectory:(id)arg1;
- (id)bouncePath:(id)arg1 forItemConflictingWithAnFSRoot:(id)arg2;
- (BOOL)bouncePathMatch:(const CDStruct_177058d5 )arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3;
- (BOOL)bouncePathMatchesForLookup:(id)arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3;
- (id)_generateGentlePhysicalBounceNameForPathMatch:(const CDStruct_177058d5 )arg1 dirfd:(int)arg2 lastBounceNo:(NSUInteger )arg3;

@end

