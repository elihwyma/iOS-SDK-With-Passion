/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, PKCurrencyAmount;

@interface PKPaymentTransactionFeeItem : NSObject <Swift>

{
    NSString *_identifier;
    unsigned long long _type;
    PKCurrencyAmount *_currencyAmount;
    NSString *_localizedDisplayName;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *localizedDisplayName;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (void)_initWithFeeDictionary:(id)arg1;
- (_Bool)isEqualToFeeItem:(id)arg1;
- (id)initWithFeeDictionary:(id)arg1;

@end
