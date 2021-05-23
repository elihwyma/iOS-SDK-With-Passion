/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SiriCoreConnectionQueueMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_watcher;
}

- (id)init;
- (void)dealloc;
- (void)_startWatcher;
- (void)_signalWatcher;
- (void)startWatcher;
- (void)signalWatcher;

@end
