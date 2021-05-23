/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface ARRunLoop : NSObject

{
    NSString *_name;
    struct __CFRunLoop *_runloop;
    struct __CFRunLoopObserver *_runLoopEnterObserver;
    struct __CFRunLoopObserver *_runLoopExitObserver;
    struct __CFArray *_autoreleasePoolStack;
    NSMutableArray *_earlyRunloopBlocks;
    struct os_unfair_lock_s _lock;
    _Bool _started;
    _Bool _cancelled;
}

@property _Bool cancelled;

- (id)init;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)cancel;
- (void)start;
- (void)_startThread;
- (void)_runloop_handleActivity:(unsigned long long)arg1;
- (void)runOnRunLoop:(CDUnknownBlockType)arg1;
- (void)_runloop_pushAutoreleasePool;
- (void)_runloop_popAutoreleasePool;

@end
