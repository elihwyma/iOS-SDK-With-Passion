/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSArray, NSDate, _CDMutablePerfMetric, _DKPerformSyncUpHistoryAdditionsOperation, _DKSync2Policy, _DKSyncHistory, _DKSyncPeer, _DKSyncType;

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncUpHistoryDeletionsOperation : _DKSyncCompositeOperation

{
    _DKPerformSyncUpHistoryAdditionsOperation *_sibling;
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_me;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent _perfEvent;
    NSArray *_streamNames;
    NSDate *_now;
    _DKSyncHistory *_history;
    unsigned long long _batchNumber;
}

+ (void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2;
+ (void)_updateEventStatsWithTotal:(unsigned long long)arg1 transportType:(long long)arg2;

- (void)main;
- (_Bool)isAsynchronous;
- (void)endOperation;
- (void)startPerfMetrics;
- (void)endPerfMetrics;
- (void)performSyncUpHistoryDeletions;
- (_Bool)existsAdditionsSyncHistory;
- (void)performSyncUpHistoryDeletionsWithDeletionsHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncUpHistoryDeletionsWithPreviousHighWaterMark:(id)arg1;
- (void)handleUpdateStorageWithStartDate:(id)arg1 endDate:(id)arg2 deletedEventIDsCount:(unsigned long long)arg3 orError:(id)arg4;
- (id)initWithParent:(id)arg1 sibling:(id)arg2 localStorage:(id)arg3 transport:(id)arg4 peer:(id)arg5 policy:(id)arg6 type:(id)arg7;

@end
