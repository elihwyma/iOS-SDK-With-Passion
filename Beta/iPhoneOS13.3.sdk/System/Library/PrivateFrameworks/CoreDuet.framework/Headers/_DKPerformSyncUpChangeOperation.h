/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSArray, _CDMutablePerfMetric, _DKSync2Policy, _DKSyncType;

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncUpChangeOperation : _DKSyncCompositeOperation

{
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    NSArray *_insertedEvents;
    NSArray *_deletedEventIDs;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent _perfEvent;
}

- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 policy:(id)arg4 type:(id)arg5 insertedEvents:(id)arg6 deletedEvents:(id)arg7;
- (void)endOperation;
- (void)startPerfMetrics;
- (void)endPerfMetrics;
- (void)performSyncUpChange;

@end
