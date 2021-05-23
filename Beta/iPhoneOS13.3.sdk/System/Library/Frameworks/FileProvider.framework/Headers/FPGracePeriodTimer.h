/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FPGracePeriodTimer : NSObject

{
    CDUnknownBlockType _action;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    double _delay;
    NSObject<OS_dispatch_source> *_timer;
    double _expectedFiringTimeSinceReferenceDate;
}

- (void)suppress;
- (void)_createTimer;
- (id)initWithAction:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2 delay:(double)arg3;
- (void)arm;
- (id)prettyDescription;

@end
