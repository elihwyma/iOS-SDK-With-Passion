/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_CDPerfMetric.h>

@class NSObject, _DKEventStatsTimerCounter;

@protocol OS_os_activity;

@interface _CDMutablePerfMetric : _CDPerfMetric

{
    NSObject<OS_os_activity> *_os_activity;
    struct os_activity_scope_state_s _os_activity_scope_state;
    _DKEventStatsTimerCounter *_eventStatsTimerCounter;
}

- (id)description;
- (id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3;
- (void)startTelemetryWithOSActivity:(id)arg1;
- (void)endTimingWithEvent:(struct _CDPerfEvent *)arg1 resultCount:(unsigned long long)arg2 incrementErrorCount:(_Bool)arg3;

@end
