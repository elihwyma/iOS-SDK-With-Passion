/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <Foundation/NSObject.h>

@class CUTWeakReference, NSDate;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface PCDispatchTimer : NSObject

{
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _fireTime;
    NSDate *_fireDate;
    CUTWeakReference *_target;
    SEL _selector;
    _Bool _isValid;
}

@property (nonatomic, readonly) _Bool isValid;
@property (retain, nonatomic) NSDate *fireDate;

- (void)dealloc;
- (void)invalidate;
- (void)start;
- (void)_cleanupTimer;
- (id)initWithQueue:(id)arg1 target:(id)arg2 selector:(SEL)arg3 fireTime:(unsigned long long)arg4;
- (void)_callTarget;

@end
