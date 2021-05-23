/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSArray, NSDate, _CDMutablePerfMetric, _DKSync2Policy, _DKSyncHistory, _DKSyncPeer, _DKSyncType;

@protocol _DKKeyValueStore, _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncDownPeerAdditionsOperation : _DKSyncCompositeOperation

{
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_peer;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent _perfEvent;
    NSArray *_streamNames;
    _Bool _highPriority;
    _DKSyncHistory *_history;
    id <_DKKeyValueStore> _keyValueStore;
    NSDate *_startDate;
    NSDate *_highWaterMark;
    unsigned long long _batchNumber;
    NSArray *_overlappingWindows;
    _Bool _foundAdditions;
}

+ (void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2;
+ (void)_updateEventStatsWithTotal:(unsigned long long)arg1 streamNameCounts:(id)arg2 transportType:(long long)arg3;
+ (void)_updateEventStatsWithIsNewestMissingWindow:(_Bool)arg1;
+ (void)_updateEventStatsWithSyncLatencyOfEvent:(id)arg1 ingressDate:(id)arg2 transportType:(long long)arg3;

- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;
- (void)endOperation;
- (void)startPerfMetrics;
- (void)endPerfMetrics;
- (void)performSyncDownPeerAdditions;
- (void)performSyncDownPeerAdditionsWithDidPrewarm:(_Bool)arg1 orError:(id)arg2;
- (void)performSyncDownPeerAdditionsWithHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncDownPeerAdditionsWithCompletedWindows:(id)arg1;
- (void)handleFetchedEvents:(id)arg1 completedWindows:(id)arg2 missingWindows:(id)arg3;
- (void)coalesceRedundantOverlappingWindows;
- (void)updateEvents:(id)arg1 withSourceDeviceID:(id)arg2;

@end
