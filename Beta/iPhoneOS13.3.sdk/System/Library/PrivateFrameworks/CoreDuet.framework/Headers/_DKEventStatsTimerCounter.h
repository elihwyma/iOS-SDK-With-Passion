/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventStatsTimerCounter : NSObject

{
    _DKEventStatsCounterInternal *_internal;
}

@property (retain) _DKEventStatsCounterInternal *internal;

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2;

- (unsigned long long)count;
- (id)eventName;
- (void)addTimingWithTimeInterval:(double)arg1;
- (void)addTimingWithStartDate:(id)arg1 endDate:(id)arg2;

@end
