/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCThrottleBase;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCThrottler : NSObject

{
    BRCThrottleBase *_throttle;
    long long _latestRetry;
    unsigned int _retryCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)reset;
- (void)scheduleNextEvent;
- (id)initWithName:(id)arg1 throttleParameters:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end
