/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFTimer, HMFUnfairLock, NSString;

@interface HMFOperationBudget

{
    HMFUnfairLock *_lock;
    HMFTimer *_timer;
    unsigned long long _value;
    unsigned long long _limit;
    struct _HMFRate _rate;
}

@property (nonatomic, readonly) unsigned long long limit;
@property (nonatomic, readonly) struct _HMFRate rate;
@property (readonly) unsigned long long value;
@property (readonly, getter=isFull) _Bool full;
@property (readonly, getter=isEmpty) _Bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;

- (id)init;
- (void)reset;
- (_Bool)decrement;
- (void)timerDidFire:(id)arg1;
- (_Bool)decrementByCount:(unsigned long long)arg1;
- (id)initWithLimit:(unsigned long long)arg1 rate:(struct _HMFRate)arg2;

@end
