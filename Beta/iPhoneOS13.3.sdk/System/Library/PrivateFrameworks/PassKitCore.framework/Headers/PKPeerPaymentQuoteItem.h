/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSData, NSDecimalNumber, NSString;

@interface PKPeerPaymentQuoteItem : NSObject <Swift>

{
    unsigned long long _type;
    NSDecimalNumber *_exchangeRate;
    NSDecimalNumber *_sendAmount;
    NSString *_sendAmountCurrency;
    NSDecimalNumber *_receiveAmount;
    NSString *_receiveAmountCurrency;
    NSDecimalNumber *_totalAmount;
    NSString *_totalAmountCurrency;
    NSDecimalNumber *_fees;
    NSString *_feesCurrency;
    NSString *_dpanIdentifier;
    NSString *_countryCode;
    NSArray *_supportedNetworks;
    NSString *_merchantIdentifier;
    unsigned long long _merchantCapabilities;
    NSData *_nonce;
}

@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSDecimalNumber *exchangeRate;
@property (copy, nonatomic, readonly) NSDecimalNumber *sendAmount;
@property (copy, nonatomic, readonly) NSString *sendAmountCurrency;
@property (copy, nonatomic, readonly) NSDecimalNumber *receiveAmount;
@property (copy, nonatomic, readonly) NSString *receiveAmountCurrency;
@property (copy, nonatomic, readonly) NSDecimalNumber *totalAmount;
@property (copy, nonatomic, readonly) NSString *totalAmountCurrency;
@property (copy, nonatomic, readonly) NSDecimalNumber *fees;
@property (copy, nonatomic, readonly) NSString *feesCurrency;
@property (copy, nonatomic, readonly) NSString *dpanIdentifier;
@property (copy, nonatomic, readonly) NSString *countryCode;
@property (copy, nonatomic, readonly) NSArray *supportedNetworks;
@property (copy, nonatomic, readonly) NSString *merchantIdentifier;
@property (nonatomic, readonly) unsigned long long merchantCapabilities;
@property (copy, nonatomic, readonly) NSData *nonce;

+ (_Bool)supportsSecureCoding;
+ (id)quoteItemWithDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
