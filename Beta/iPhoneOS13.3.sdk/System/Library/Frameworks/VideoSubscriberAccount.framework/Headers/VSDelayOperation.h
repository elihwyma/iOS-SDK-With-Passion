/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSDate, NSObject;

@protocol OS_dispatch_source;

@interface VSDelayOperation : VSAsyncOperation

{
    NSObject<OS_dispatch_source> *_timerSource;
    _Bool _shouldIgnoreTolerance;
    double _delay;
    double _tolerance;
    NSDate *_fireDate;
}

@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) double tolerance;
@property (copy, nonatomic, readonly) NSDate *fireDate;
@property (nonatomic) _Bool shouldIgnoreTolerance;

+ (id)delayOperationWithDelay:(double)arg1;
+ (id)delayOperationWithFireDate:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)_cancelTimer;
- (void)executionDidBegin;
- (id)initWithDelay:(double)arg1 tolerance:(double)arg2;
- (id)initWithFireDate:(id)arg1 tolerance:(double)arg2;

@end
