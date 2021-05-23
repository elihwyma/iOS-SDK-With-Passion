/*
 Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

#import <Foundation/NSObject.h>

@class AWAttentionAwarenessClient;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWClientPollWaiter : NSObject

{
    AWAttentionAwarenessClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    CDUnknownBlockType _clientBlock;
    NSObject<OS_dispatch_source> *_timer;
    int _pollState;
}

- (void)invalidate;
- (void)cancel;
- (void)notifyPollEventType:(unsigned long long)arg1 event:(id)arg2;
- (id)initWithClient:(id)arg1 timeout:(unsigned long long)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)invokeClientBlock:(unsigned long long)arg1 event:(id)arg2;

@end
