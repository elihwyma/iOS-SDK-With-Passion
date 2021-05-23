/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSDecimalNumber, NSString, PKCurrencyAmount;

@interface PKPaymentBalance : NSObject <Swift>

{
    _Bool _isPrimary;
    NSString *_identifier;
    NSDecimalNumber *_value;
    NSString *_currencyCode;
    long long _exponent;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
    NSDate *_lastUpdateDate;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDecimalNumber *value;
@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic, readonly) PKCurrencyAmount *currencyValue;
@property (nonatomic, readonly) _Bool isCurrency;
@property (nonatomic) long long exponent;
@property (nonatomic, readonly) NSString *formattedValue;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;
@property (nonatomic) _Bool isPrimary;
@property (copy, nonatomic) NSDate *lastUpdateDate;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)_setValueWithRounding:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forCurrencyAmount:(id)arg2;
- (id)initWithIdentifier:(id)arg1 forValue:(id)arg2 roundingToExponent:(long long)arg3;

@end
