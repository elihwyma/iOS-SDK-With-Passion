/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventTypeStatsTimerCounter : NSObject

{
    _DKEventStatsCounterInternal *_internal;
}

@property (retain) _DKEventStatsCounterInternal *internal;

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4;

- (id)eventName;
- (void)addTimingWithStartDate:(id)arg1 endDate:(id)arg2 typeValue:(id)arg3;
- (unsigned long long)countWithTypeValue:(id)arg1;
- (void)addTimingWithTimeInterval:(double)arg1 typeValue:(id)arg2;

@end
