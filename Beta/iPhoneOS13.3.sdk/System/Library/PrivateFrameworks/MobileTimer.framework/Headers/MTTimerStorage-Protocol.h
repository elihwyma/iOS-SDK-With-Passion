/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/Swift-Protocol.h>

@class MTTimer, NSArray, NSDate;

@protocol MTTimerStorage <Swift>

@property (nonatomic, readonly) NSArray *timers;
@property (nonatomic, readonly) MTTimer *nextTimer;
@property (nonatomic, readonly) NSDate *lastModifiedDate;

- (unsigned short)registerObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)getTimersWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)addTimer:withCompletion:source: /* Error: Ran out of types for this method. */;
- (unsigned short)updateTimer:withCompletion:source: /* Error: Ran out of types for this method. */;
- (unsigned short)removeTimer:withCompletion:source: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissTimerWithIdentifier:withCompletion:source: /* Error: Ran out of types for this method. */;
- (unsigned short)repeatTimerWithIdentifier:withCompletion:source: /* Error: Ran out of types for this method. */;
- (unsigned short)setAllTimers:source: /* Error: Ran out of types for this method. */;

@end
