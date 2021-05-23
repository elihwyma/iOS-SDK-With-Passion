/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKFilter.h>

@class NSSet, NSString;

@interface _HKDevicePropertyFilter : _HKFilter

{
    NSString *_keyPath;
    NSString *_propertyKey;
    NSSet *_allowedValues;
}

@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) NSString *propertyKey;
@property (nonatomic, readonly) NSSet *allowedValues;

+ (_Bool)supportsSecureCoding;
+ (id)_keyPathForProperty:(id)arg1;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (_Bool)_acceptsOperatorType:(unsigned long long)arg1;
+ (id)filterWithDeviceProperty:(id)arg1 allowedValues:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;
- (id)_initWithKey:(id)arg1 allowedValues:(id)arg2;

@end
