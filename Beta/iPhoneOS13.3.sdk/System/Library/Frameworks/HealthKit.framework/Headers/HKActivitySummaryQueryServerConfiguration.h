/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

__attribute__((visibility("hidden")))
@interface HKActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration

{
    _Bool _shouldIncludeActivitySummaryPrivateProperties;
    _Bool _shouldIncludeActivitySummaryStatistics;
    _Bool _orderByDateAscending;
    unsigned long long _limit;
}

@property (nonatomic) _Bool shouldIncludeActivitySummaryPrivateProperties;
@property (nonatomic) _Bool shouldIncludeActivitySummaryStatistics;
@property (nonatomic) _Bool orderByDateAscending;
@property (nonatomic) unsigned long long limit;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
