/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSReportItem.h>

@interface CLSAggregatedValue : CLSReportItem

{
    int _aggregateType;
    double _value;
    long long _totalSampleCount;
}

@property (nonatomic) double value;
@property (nonatomic) long long totalSampleCount;
@property (nonatomic, readonly) double normalized;
@property (nonatomic) int aggregateType;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)add:(id)arg1;
- (void)scalarMultiply:(double)arg1;

@end
