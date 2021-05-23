/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>

@class BRCCountedSet, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCApplyScheduler : BRCFSSchedulerBase

{
    BRCCountedSet *_coordinatedWriters;
    NSMutableSet *_clientZonesWatchingFaults;
    _Bool _applyCountReachedMax;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCancelled;

- (void)schedule;
- (void)_close;
- (void)didSyncDownZone:(id)arg1 requestID:(unsigned long long)arg2 upToRank:(long long)arg3 caughtUpWithServer:(_Bool)arg4;
- (id)initWithAccountSession:(id)arg1;
- (void)describeInBuffer:(id)arg1 aggregateOfJobsMatching:(id)arg2 context:(id)arg3;
- (_Bool)canScheduleMoreJobs;
- (void)deleteExpiredJobs;
- (void)_setState:(int)arg1 andApplyKind:(unsigned int)arg2 forJobID:(id)arg3;
- (void)_rescheduleRank:(long long)arg1 inState:(int)arg2 forZone:(id)arg3;
- (void)_fixupCZMAliasTargetWithAlias:(id)arg1 target:(id)arg2;
- (void)_scheduleApplyJobWithID:(id)arg1 zone:(id)arg2 applyKind:(unsigned int)arg3;
- (void)_handleWatchingFaults;
- (unsigned long long)_writeCoordinationCount;
- (id)descriptionForServerItem:(id)arg1 context:(id)arg2;
- (id)descriptionForRejectedItem:(id)arg1 context:(id)arg2;
- (void)setState:(int)arg1 forServerItem:(id)arg2 localItem:(id)arg3;
- (void)setState:(int)arg1 forRank:(long long)arg2 zoneRowID:(id)arg3;
- (void)setState:(int)arg1 andApplyKind:(unsigned int)arg2 forServerItem:(id)arg3 localItem:(id)arg4;
- (void)setState:(int)arg1 andApplyKind:(unsigned int)arg2 forRank:(long long)arg3 zoneRowID:(id)arg4;
- (void)resetBackoffForServerItem:(id)arg1;
- (void)createApplyJobFromServerItem:(id)arg1 localItem:(id)arg2 state:(int)arg3 kind:(unsigned int)arg4;
- (void)didCreateMissingParentID:(id)arg1 zone:(id)arg2;
- (void)didReparentOrKillItemID:(id)arg1 parentItemID:(id)arg2 zone:(id)arg3;
- (void)didCompleteCrossZoneMigrationForAppLibrary:(id)arg1;
- (void)didMarkSyncIdleForServerRank:(long long)arg1 zone:(id)arg2;
- (void)rescheduleMissingTargetAliasesWithTarget:(id)arg1;
- (void)repopulateJobsForZone:(id)arg1;
- (void)monitorFaultingForZone:(id)arg1;
- (void)stopMonitoringFaultingForZone:(id)arg1;
- (_Bool)startWriteCoordinationInAppLibrary:(id)arg1;
- (void)endWriteCoordinationInAppLibrary:(id)arg1 rowID:(long long)arg2;

@end
