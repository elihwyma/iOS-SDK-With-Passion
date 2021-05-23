/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDecimalNumber, PKCurrencyAmount;

@interface PKPaymentTransactionForeignExchangeInformation : NSObject <Swift>

{
    PKCurrencyAmount *_destinationCurrencyAmount;
    NSDecimalNumber *_exchangeRate;
}

@property (copy, nonatomic) PKCurrencyAmount *destinationCurrencyAmount;
@property (copy, nonatomic) NSDecimalNumber *exchangeRate;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemType;
- (id)jsonDictionaryRepresentation;
- (id)jsonString;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)recordTypesAndNames;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (_Bool)isEqualToForeignExchangeInformation:(id)arg1;

@end
