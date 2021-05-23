/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSIndexingQueue : NSObject

{
    long long _mode;
    double _idleTime;
    double _idleTimeLeeway;
    unsigned long long _maximumBatchSize;
    NSMutableDictionary *_queuedItems;
    NSObject<OS_dispatch_queue> *_coalescingQueue;
    NSObject<OS_dispatch_source> *_coalescingTimer;
    CDUnknownBlockType _notifyBlock;
}

@property double idleTime;
@property double idleTimeLeeway;
@property unsigned long long maximumBatchSize;
@property (retain) NSMutableDictionary *queuedItems;
@property (retain) NSObject<OS_dispatch_queue> *coalescingQueue;
@property (retain) NSObject<OS_dispatch_source> *coalescingTimer;
@property long long mode;
@property (copy) CDUnknownBlockType notifyBlock;

- (void)dealloc;
- (void)flush;
- (id)initWithIdleTime:(double)arg1 idleTimeLeeway:(double)arg2 maximumBatchSize:(unsigned long long)arg3 mode:(long long)arg4 notifyBlock:(CDUnknownBlockType)arg5;
- (void)_applicationWillResign:(id)arg1;
- (void)_flushWithAppResigned:(_Bool)arg1 forced:(_Bool)arg2;
- (void)_queueItems:(id)arg1;
- (void)queueItems:(id)arg1;
- (id)initWithMode:(long long)arg1 notifyBlock:(CDUnknownBlockType)arg2;
- (void)queueItem:(id)arg1;

@end
