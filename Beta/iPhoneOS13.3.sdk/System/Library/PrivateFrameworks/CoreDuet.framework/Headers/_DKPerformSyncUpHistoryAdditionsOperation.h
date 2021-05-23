/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSArray, NSDate, _CDMutablePerfMetric, _DKSync2Policy, _DKSyncHistory, _DKSyncPeer, _DKSyncType;

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncUpHistoryAdditionsOperation : _DKSyncCompositeOperation

{
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_me;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent _perfEvent;
    NSArray *_streamNames;
    NSDate *_now;
    unsigned long long _batchNumber;
    _DKSyncHistory *_history;
}

@property (readonly) _DKSyncHistory *history;

+ (void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2;
+ (void)_updateEventStatsWithTotal:(unsigned long long)arg1 streamNameCounts:(id)arg2 transportType:(long long)arg3;

- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;
- (void)endOperation;
- (void)startPerfMetrics;
- (void)endPerfMetrics;
- (void)performSyncUpHistoryAdditions;
- (void)performSyncUpHistoryAdditionsWithAdditionsHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncUpHistoryAdditionsWithPreviousHighWaterMark:(id)arg1;
- (void)handleUpdateStorageWithFetchedWindow:(id)arg1 eventsCount:(unsigned long long)arg2 error:(id)arg3;

@end
