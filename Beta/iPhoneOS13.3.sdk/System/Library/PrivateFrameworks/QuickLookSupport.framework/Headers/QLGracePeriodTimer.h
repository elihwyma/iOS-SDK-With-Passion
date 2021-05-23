/*
 Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface QLGracePeriodTimer : NSObject

{
    CDUnknownBlockType _action;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    double _delay;
    NSObject<OS_dispatch_source> *_timer;
}

@property (copy) CDUnknownBlockType action;

- (void)_suppress;
- (void)suppress;
- (void)_createTimer;
- (id)initWithAction:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2 delay:(double)arg3;
- (void)arm;

@end
