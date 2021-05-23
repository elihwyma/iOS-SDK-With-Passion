/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKFilter.h>

@class NSDate;

@interface _HKMedicalRecordSortDateFilter : _HKFilter

{
    NSDate *_comparisonDate;
    unsigned long long _operatorType;
}

@property (nonatomic, readonly) NSDate *comparisonDate;
@property (nonatomic, readonly) unsigned long long operatorType;

+ (_Bool)supportsSecureCoding;
+ (id)filterWithOperatorType:(unsigned long long)arg1 comparisonDate:(id)arg2;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end
