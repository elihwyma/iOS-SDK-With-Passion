/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <Foundation/NSOperation.h>

@class HMFActivity, HMFTimer, HMFUnfairLock, NSDate, NSError, NSObject, NSString, NSUUID;

@protocol OS_dispatch_queue, OS_voucher;

@interface HMFOperation : NSOperation

{
    _Bool _executing;
    _Bool _finished;
    NSError *_error;
    HMFUnfairLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_voucher> *_voucher;
    HMFActivity *_activity;
    NSUUID *_identifier;
    HMFTimer *_timer;
}

@property (readonly) NSUUID *identifier;
@property (retain) HMFTimer *timer;
@property (readonly) NSObject<OS_dispatch_queue> *underlyingQueue;
@property (retain) HMFActivity *activity;
@property (copy, readonly) NSDate *timeoutDate;
@property (copy, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;

- (id)init;
- (void)cancel;
- (void)start;
- (void)main;
- (void)setQualityOfService:(long long)arg1;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)finish;
- (void)cancelWithError:(id)arg1;
- (id)initWithTimeout:(double)arg1;
- (id)logIdentifier;
- (void)timerDidFire:(id)arg1;

@end
