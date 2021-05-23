/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <MetricKit/MXMetric.h>

@interface MXResourceExceptionMetric : MXMetric

{
    unsigned long long _cumulativeMemoryResourceExceptionCount;
}

@property (readonly) unsigned long long cumulativeMemoryResourceExceptionCount;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithCumulativeMemoryResourceExceptionCount:(unsigned long long)arg1;

@end
