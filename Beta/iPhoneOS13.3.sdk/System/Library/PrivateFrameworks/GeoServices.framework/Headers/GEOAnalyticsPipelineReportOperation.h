/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSOperation.h>

@class GEOAnalyticsPipelineRemoteProxy, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineReportOperation : NSOperation

{
    _Bool _finished;
    _Bool _executing;
    id _transaction;
    NSObject<OS_dispatch_queue> *_runQueue;
    GEOAnalyticsPipelineRemoteProxy *_remoteProxy;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completionBlock;
}

- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (id)initWithRemoteProxy:(id)arg1 runQueue:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_completeOperation;

@end
