/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <CoreTelephony/CTEnhancedLinkQualityMetric.h>

@interface CTEnhancedDataLinkQualityMetric : CTEnhancedLinkQualityMetric

{
    long long _metricType;
}

@property (nonatomic) long long metricType;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 enhancedLinkQuality:(id)arg2;

@end
