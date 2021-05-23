/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKFilter.h>

@class NSString;

@interface _HKDiagnosticTestResultCategoryFilter : _HKFilter

{
    NSString *_comparisonValue;
    unsigned long long _operatorType;
}

@property (nonatomic, readonly) NSString *comparisonValue;
@property (nonatomic, readonly) unsigned long long operatorType;

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (_Bool)_supportsOperatorType:(unsigned long long)arg1;
+ (id)filterWithOperatorType:(unsigned long long)arg1 comparisonValue:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end
