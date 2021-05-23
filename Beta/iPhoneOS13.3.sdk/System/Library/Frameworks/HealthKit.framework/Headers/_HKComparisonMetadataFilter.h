/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKMetadataFilter.h>

@interface _HKComparisonMetadataFilter : _HKMetadataFilter

{
    id _value;
}

@property (nonatomic, readonly) id value;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_acceptsOperatorType:(unsigned long long)arg1;
+ (id)filterWithKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;
- (id)_initWithKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;

@end
