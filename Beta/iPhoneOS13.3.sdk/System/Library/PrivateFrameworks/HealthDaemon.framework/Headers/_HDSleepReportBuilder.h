/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSCalendar, NSDateInterval, NSMutableDictionary;

@interface _HDSleepReportBuilder : NSObject

{
    NSDateInterval *_resultInterval;
    NSCalendar *_calendar;
    NSMutableDictionary *_inBedSamplesBySource;
}

- (id)_categorySampleBufferForSource:(id)arg1;
- (void)addSleepSamples:(id)arg1;
- (id)calculateResult;
- (id)initWithResultInterval:(id)arg1 calendar:(id)arg2;

@end
