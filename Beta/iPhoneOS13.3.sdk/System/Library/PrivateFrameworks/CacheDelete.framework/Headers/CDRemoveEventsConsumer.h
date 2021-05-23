/*
 Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CDRemoveEventsConsumer : NSObject

{
    _Bool _historyDone;
    NSString *_identifier;
    CDUnknownBlockType _consumer;
    struct __FSEventStream *_stream;
    NSObject<OS_dispatch_semaphore> *_sem;
    NSObject<OS_dispatch_queue> *_consumer_q;
    NSString *_volume;
    struct fsid _fsid;
    unsigned long long _since;
}

@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) CDUnknownBlockType consumer;
@property struct __FSEventStream *stream;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *consumer_q;
@property (retain, nonatomic) NSString *volume;
@property _Bool historyDone;
@property struct fsid fsid;
@property unsigned long long since;

- (void)dealloc;
- (id)initWithConsumer:(CDUnknownBlockType)arg1 identifier:(id)arg2;
- (void)callback:(id)arg1;
- (void)consumeStream:(struct __FSEventStream *)arg1 forVolume:(id)arg2;

@end
