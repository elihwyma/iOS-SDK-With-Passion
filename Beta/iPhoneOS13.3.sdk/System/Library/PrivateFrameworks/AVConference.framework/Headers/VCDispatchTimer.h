/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSObject;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCDispatchTimer

{
    CDUnknownBlockType _callbackBlock;
    NSObject<OS_dispatch_source> *_timer;
    int _intervalSeconds;
    _Bool _running;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (nonatomic, readonly) CDUnknownBlockType callbackBlock;
@property (nonatomic, readonly) _Bool isRunning;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithIntervalSeconds:(int)arg1 callbackBlock:(CDUnknownBlockType)arg2 clientQueue:(id)arg3;
- (id)initWithIntervalSeconds:(int)arg1 callbackBlock:(CDUnknownBlockType)arg2;

@end
