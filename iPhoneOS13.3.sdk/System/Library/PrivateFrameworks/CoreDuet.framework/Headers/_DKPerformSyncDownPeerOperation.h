//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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
// - (void).cxx_destruct;
- (void)endPerfMetrics;
- (void)startPerfMetrics;
- (void)endOperation;
- (void)addSyncDownPeerDeletionsOperation;
- (void)addSyncDownPeerAdditionsOperation;
- (void)performSyncDownPeer;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;

@end

