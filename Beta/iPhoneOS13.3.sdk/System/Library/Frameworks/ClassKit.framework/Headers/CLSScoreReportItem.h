/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSActivityReportItem.h>

@interface CLSScoreReportItem : CLSActivityReportItem

{
    double _value;
    double _maxValue;
}

@property (nonatomic) double value;
@property (nonatomic) double maxValue;
@property (nonatomic, readonly) double normalized;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)add:(id)arg1;
- (void)scalarMultiply:(double)arg1;
- (id)convertToItemCompatibleWithItem:(id)arg1;

@end
