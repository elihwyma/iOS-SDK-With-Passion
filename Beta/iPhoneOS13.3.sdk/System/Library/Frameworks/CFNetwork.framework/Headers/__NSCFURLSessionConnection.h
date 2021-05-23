/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSURLResponse, NSURLSessionTask;

@protocol OS_dispatch_data, OS_dispatch_queue, SessionConnectionDelegate;

@interface __NSCFURLSessionConnection : NSObject <Swift>

{
    NSURLSessionTask *_task;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <SessionConnectionDelegate> _delegate;
    NSURLResponse *_cacheResponse;
    NSObject<OS_dispatch_data> *_cacheData;
    unsigned long long _cacheDataMax;
    long long _maxCacheEntrySize;
}

@property (copy) NSURLSessionTask *task;
@property (retain) id <SessionConnectionDelegate> delegate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)expectedProgressTargetChanged;
- (void)setBytesPerSecondLimit:(long long)arg1;
- (void)setPriorityHint:(float)arg1;
- (void)setPoolPriority:(long long)arg1;
- (void)setIsDownload:(_Bool)arg1;
- (id)_cachedResponse;
- (void)withWorkQueueAsync:(CDUnknownBlockType)arg1;
- (void)_setupForCache:(_Bool)arg1 expectedLength:(long long)arg2 response:(id)arg3;
- (void)_appendDataToCache:(id)arg1;
- (void)_tossCache;
- (void)_storeCachedResponse:(id)arg1;

@end
