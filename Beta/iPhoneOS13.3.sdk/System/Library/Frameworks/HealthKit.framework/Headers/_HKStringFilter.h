/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKFilter.h>

@class NSString;

@interface _HKStringFilter : _HKFilter

{
    NSString *_value;
    unsigned long long _operatorType;
}

@property (copy, nonatomic, readonly) NSString *value;
@property (nonatomic, readonly) unsigned long long operatorType;

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (_Bool)_supportsOperatorType:(unsigned long long)arg1;
+ (id)_acceptedKeyPath;
+ (_Bool)_acceptsDataType:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 value:(id)arg2;

@end
