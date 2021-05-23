/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <Foundation/NSObject.h>

@class NSMeasurement, NSMeasurementFormatter;

@interface MXAverage : NSObject

{
    NSMeasurementFormatter *_averageMeasurementFormatter;
    NSMeasurement *_averageMeasurement;
    long long _sampleCount;
    double _standardDeviation;
}

@property (readonly) NSMeasurement *averageMeasurement;
@property (readonly) long long sampleCount;
@property (readonly) double standardDeviation;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithDoubleValue:(double)arg1 sampleCount:(long long)arg2 standardDeviation:(double)arg3 unit:(id)arg4;
- (id)initWithMeasurement:(id)arg1 sampleCount:(long long)arg2 standardDeviation:(double)arg3;

@end
