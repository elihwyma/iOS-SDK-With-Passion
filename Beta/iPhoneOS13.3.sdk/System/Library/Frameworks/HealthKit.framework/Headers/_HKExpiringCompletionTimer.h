/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _HKExpiringCompletionTimer : NSObject

{
    NSObject<OS_dispatch_source> *_timerSource;
    double _expirationTime;
    double _timeout;
    CDUnknownBlockType _timeoutHandler;
    _Bool _invalidated;
    CDUnknownBlockType _completion;
    NSDate *_startDate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly, getter=isExpired) _Bool expired;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (void)invalidate;
- (void)_start;
- (void)_cancelTimer;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (void)restart;
- (id)initWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invalidateAndInvokeCompletion:(_Bool)arg1 error:(id)arg2;
- (void)startWithTimeoutInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)invalidateAndInvokeCompletionWithError:(id)arg1;

@end
