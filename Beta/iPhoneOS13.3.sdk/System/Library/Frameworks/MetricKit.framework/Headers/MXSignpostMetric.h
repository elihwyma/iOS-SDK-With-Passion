/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <MetricKit/MXMetric.h>

@class MXSignpostIntervalData, NSString;

@interface MXSignpostMetric : MXMetric

{
    NSString *_signpostName;
    NSString *_signpostCategory;
    MXSignpostIntervalData *_signpostIntervalData;
    unsigned long long _totalCount;
}

@property (readonly) NSString *signpostName;
@property (readonly) NSString *signpostCategory;
@property (readonly) MXSignpostIntervalData *signpostIntervalData;
@property (readonly) unsigned long long totalCount;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithSignpostName:(id)arg1 withSignpostCategory:(id)arg2 withTotalCount:(unsigned long long)arg3 withSignpostIntervalData:(id)arg4;

@end
