/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSMutableArray, _CDMutablePerfMetric, _DKSync2Policy, _DKSyncPeer, _DKSyncType;

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncDownPeerOperation : _DKSyncCompositeOperation

{
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_peer;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent _perfEvent;
    NSMutableArray *_operations;
}

+ (void)_updateEventStatsWithTransportType:(long long)arg1;

- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;
- (void)endOperation;
- (void)startPerfMetrics;
- (void)performSyncDownPeer;
- (void)addSyncDownPeerAdditionsOperation;
- (void)addSyncDownPeerDeletionsOperation;
- (void)endPerfMetrics;

@end
