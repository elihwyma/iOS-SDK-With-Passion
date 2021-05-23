/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFUnfairLock, NSDate, NSObject;

@protocol HMFTimerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HMFTimer

{
    HMFUnfairLock *_lock;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    double _timeInterval;
    long long _leeway;
    _Bool _running;
    NSDate *_fireDate;
    id <HMFTimerDelegate> _delegate;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _options;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, getter=isRunning) _Bool running;
@property (weak) id <HMFTimerDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) double timeInterval;
@property (nonatomic, readonly) unsigned long long leeway;
@property (copy, readonly) NSDate *fireDate;

+ (id)shortDescription;

- (id)init;
- (void)dealloc;
- (void)setFireDate:(id)arg1;
- (void)fire;
- (void)resume;
- (void)suspend;
- (void)__fire;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (id)attributeDescriptions;
- (void)kick;
- (void)__handleExpiration;

@end
