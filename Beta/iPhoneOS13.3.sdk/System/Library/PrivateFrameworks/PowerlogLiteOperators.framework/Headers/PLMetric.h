/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface PLMetric : NSObject

{
    short _metricType;
    int _metricValue;
    int _numBits;
    int _defaultValue;
    NSString *_metricKey;
    NSDate *_lastOnTimestamp;
    unsigned long long _bitPosition;
}

@property (retain) NSString *metricKey;
@property short metricType;
@property (retain) NSDate *lastOnTimestamp;
@property int metricValue;
@property unsigned long long bitPosition;
@property int numBits;
@property int defaultValue;

+ (unsigned long long)binDurationValue:(int)arg1;
+ (unsigned long long)binBatteryTemperature:(int)arg1;

- (void)resetMetric;
- (unsigned long long)getBinnedMetricValue;
- (id)initWithKey:(id)arg1 withPosition:(unsigned long long)arg2 withNumBits:(int)arg3 withDefault:(int)arg4 andType:(short)arg5;
- (void)updateMetricWithTimestamp:(id)arg1 forEvent:(short)arg2 withValue:(int)arg3;
- (unsigned long long)constructMetricValueForInterval:(id)arg1;

@end
