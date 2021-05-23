/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSDeliveryObject.h>

@class NSNumber, NSString;

@interface TPSDeliveryDuetEventValue : TPSDeliveryObject

{
    NSNumber *_boolValue;
    NSNumber *_integerValue;
    NSNumber *_doubleValue;
    NSString *_stringValue;
    unsigned long long _valueType;
}

@property (copy, nonatomic) NSNumber *boolValue;
@property (copy, nonatomic) NSNumber *integerValue;
@property (copy, nonatomic) NSNumber *doubleValue;
@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic) unsigned long long valueType;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
