/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDecimalNumber, NSString, PKCurrencyAmount;

@interface PKPaymentTransactionRewardsItem : NSObject <Swift>

{
    NSString *_identifier;
    unsigned long long _type;
    unsigned long long _state;
    PKCurrencyAmount *_currencyAmount;
    NSDecimalNumber *_eligibleValue;
    unsigned long long _eligibleValueUnit;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (retain, nonatomic) NSDecimalNumber *eligibleValue;
@property (nonatomic) unsigned long long eligibleValueUnit;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (void)_initWithRewardsDictionary:(id)arg1;
- (_Bool)isEqualToRewardsItem:(id)arg1;

@end
