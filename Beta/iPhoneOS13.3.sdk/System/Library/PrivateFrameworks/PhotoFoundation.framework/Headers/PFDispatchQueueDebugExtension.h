/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFDispatchQueueStatisticsExtension.h>

@class NSMutableDictionary, PFSerialQueue;

@interface PFDispatchQueueDebugExtension : PFDispatchQueueStatisticsExtension

{
    NSMutableDictionary *_allBlockInfoByCallSite;
    unsigned long long _count;
    PFSerialQueue *_serializer;
}

- (id)init;
- (id)description;
- (void)installOnQueue:(id)arg1;
- (id)queue:(id)arg1 receivedDispatchSync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierSync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchAsync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierAsync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchAfter:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 async:(CDUnknownBlockType)arg3;
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 notify:(CDUnknownBlockType)arg3;
- (id)recordBlockInfo:(id)arg1;
- (Class)blockInfoClass;
- (id)_queueUsageByExecutionTimeDescription;
- (void)showQueueUsageByExecutionTime;
- (id)_queueUsageByEnqueueSiteDescription;
- (void)showQueueUsageByEnqueueSite;

@end
