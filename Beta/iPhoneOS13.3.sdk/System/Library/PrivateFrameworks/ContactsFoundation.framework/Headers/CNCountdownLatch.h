/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNUnfairLock;

@protocol OS_dispatch_semaphore;

@interface CNCountdownLatch : NSObject

{
    unsigned long long _count;
    CNUnfairLock *_lock;
    NSObject<OS_dispatch_semaphore> *_latchedSemaphore;
}

- (id)init;
- (id)description;
- (id)initWithStartingCount:(unsigned long long)arg1;
- (_Bool)awaitWithTimeout:(double)arg1;
- (_Bool)awaitWithTimeout:(double)arg1 strategy:(unsigned long long)arg2;
- (_Bool)awaitImmediate;
- (_Bool)awaitOnSemaphoreWithTimeout:(double)arg1;
- (_Bool)awaitWhileSpinningRunloopWithTimeout:(double)arg1;
- (_Bool)hasLatched;
- (void)countDown;
- (void)await;

@end
