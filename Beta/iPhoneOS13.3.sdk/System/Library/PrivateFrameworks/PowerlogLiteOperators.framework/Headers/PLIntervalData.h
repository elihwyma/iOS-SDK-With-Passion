/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDateFormatter, NSMutableDictionary;

@interface PLIntervalData : NSObject

{
    int _intervalDuration;
    NSMutableDictionary *_metrics;
    NSDate *_currentInterval;
    unsigned long long _aggdValue;
    NSDateFormatter *_dateFormat;
}

@property (retain) NSMutableDictionary *metrics;
@property (retain) NSDate *currentInterval;
@property unsigned long long aggdValue;
@property (retain) NSDateFormatter *dateFormat;
@property int intervalDuration;

- (id)init;
- (void)addMetric:(id)arg1;
- (void)updateMetric:(id)arg1 withTimestamp:(id)arg2 forEvent:(short)arg3 withValue:(int)arg4;
- (void)resetMetrics;
- (void)submitIntervalData;

@end
