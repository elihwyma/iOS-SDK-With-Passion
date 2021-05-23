/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSThread.h>

@class NSConditionLock, NSRunLoop;

@interface _SYStreamerThread : NSThread

{
    NSRunLoop *_threadRunLoop;
    struct __CFRunLoopSource *_stopRLS;
    NSConditionLock *_startupLock;
}

@property (nonatomic, readonly) NSRunLoop *runLoop;

+ (id)streamerThread;

- (id)init;
- (void)main;
- (void)_waitForStartup;

@end
