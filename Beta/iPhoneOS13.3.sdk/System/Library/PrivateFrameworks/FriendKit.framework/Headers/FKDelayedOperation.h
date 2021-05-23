/*
 Image: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FKDelayedOperation : NSObject

{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    int _blockEnqueued;
    double _lastExecution;
    NSObject<OS_dispatch_source> *_timerSource;
    double _delay;
}

- (void)invalidate;
- (void)execute;
- (id)initWithQueue:(id)arg1 delay:(double)arg2 block:(CDUnknownBlockType)arg3;
- (void)_queue_executeBlock;
- (void)_queue_updateLastExecution;

@end
