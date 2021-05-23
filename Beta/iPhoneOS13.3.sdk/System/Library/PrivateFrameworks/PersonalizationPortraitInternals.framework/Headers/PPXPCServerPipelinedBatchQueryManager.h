/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_semaphore;

@interface PPXPCServerPipelinedBatchQueryManager : NSObject

{
    long long _pipelineDepth;
    unsigned long long _pipelinedCallTimeoutNsec;
    NSObject<OS_dispatch_semaphore> *_concurrentRequestSem;
    NSMutableDictionary *_queryReplyThrottleSemaphores;
    _Atomic _Bool _isInterrupted;
}

- (void)unblockPendingQueries;
- (id)initWithPipelineDepth:(long long)arg1 pipelinedCallTimeoutNsec:(unsigned long long)arg2 maxConcurrentRequestsPerConnection:(unsigned long long)arg3;
- (void)_unblockQueryReplyThrottleSemaphore:(id)arg1;
- (void)runConcurrentlyWithRequestThrottle:(CDUnknownBlockType)arg1;
- (void)sendBatchedResultForQueryWithName:(id)arg1 queryId:(unsigned long long)arg2 batchGenerator:(CDUnknownBlockType)arg3 sendError:(CDUnknownBlockType)arg4 sendBatch:(CDUnknownBlockType)arg5;

@end
