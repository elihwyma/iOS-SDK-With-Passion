/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSArray, _CDMutablePerfMetric, _DKSync2Policy, _DKSyncType;

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncDownOperation : _DKSyncCompositeOperation

{
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transport;
    NSArray *_peers;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent _perfEvent;
}

- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peers:(id)arg4 policy:(id)arg5 type:(id)arg6;
- (void)endOperation;
- (void)startPerfMetrics;
- (void)endPerfMetrics;
- (void)performSyncDown;
- (void)performSyncDown2;

@end
