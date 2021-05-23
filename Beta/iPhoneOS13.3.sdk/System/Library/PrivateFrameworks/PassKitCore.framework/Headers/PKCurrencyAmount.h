/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDecimalNumber, NSString;

@interface PKCurrencyAmount : NSObject <Swift>

{
    NSDecimalNumber *_amount;
    NSString *_currency;
}

@property (copy, nonatomic, readonly) NSDecimalNumber *amount;
@property (copy, nonatomic, readonly) NSString *currency;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)formattedStringValue;
- (id)initWithAmount:(id)arg1 currency:(id)arg2;
- (long long)compareToCurrencyCode:(id)arg1 amount:(id)arg2;
- (id)minimalFormattedStringValue;
- (_Bool)isEqualToCurrencyAmount:(id)arg1;
- (id)minimalFormattedStringValueInLocale:(id)arg1;
- (id)absoluteValue;
- (id)negativeValue;

@end
