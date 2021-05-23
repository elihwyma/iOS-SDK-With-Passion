/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray;

@interface SCROBrailleEventDispatcher : NSObject

{
    NSLock *_queueLock;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_queueSource;
    NSMutableArray *_queue;
    NSMutableArray *_brailleEventQueue;
    id _target;
    _Bool _isValid;
}

- (void)dealloc;
- (void)invalidate;
- (_Bool)isValid;
- (void)start;
- (id)initWithTarget:(id)arg1;
- (void)_processQueue;
- (void)enqueueEvent:(id)arg1;

@end
