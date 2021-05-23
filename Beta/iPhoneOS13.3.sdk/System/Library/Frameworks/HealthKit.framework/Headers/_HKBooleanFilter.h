/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKFilter.h>

@interface _HKBooleanFilter : _HKFilter

{
    _Bool _boolValue;
}

@property (nonatomic, readonly) _Bool boolValue;

+ (_Bool)supportsSecureCoding;
+ (id)filterWithBoolValue:(_Bool)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end
