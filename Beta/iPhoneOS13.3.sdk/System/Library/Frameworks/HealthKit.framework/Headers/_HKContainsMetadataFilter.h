/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKMetadataFilter.h>

@class NSSet;

@interface _HKContainsMetadataFilter : _HKMetadataFilter

{
    NSSet *_allowedValues;
}

@property (nonatomic, readonly) NSSet *allowedValues;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_acceptsOperatorType:(unsigned long long)arg1;
+ (id)filterWithKey:(id)arg1 operatorType:(unsigned long long)arg2 values:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;
- (id)_initWithKey:(id)arg1 values:(id)arg2 operatorType:(unsigned long long)arg3;

@end
