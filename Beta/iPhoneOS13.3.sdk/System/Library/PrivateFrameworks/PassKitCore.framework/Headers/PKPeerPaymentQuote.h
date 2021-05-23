/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSData, NSDate, NSDecimalNumber, NSString, NSURL, PKCurrencyAmount, PKPeerPaymentRecipient;

@interface PKPeerPaymentQuote : NSObject <Swift>

{
    NSString *_identifier;
    NSArray *_items;
    NSString *_disclosureText;
    NSURL *_disclosureURL;
    NSDecimalNumber *_currentBalance;
    NSString *_currentBalanceCurrency;
    NSData *_appleHash;
    NSData *_externalHash;
    NSDecimalNumber *_totalReceiveAmount;
    NSString *_totalReceiveAmountCurrency;
    NSDecimalNumber *_totalFees;
    NSString *_totalFeesCurrency;
    NSDate *_validUntil;
    unsigned long long _riskLevel;
    PKPeerPaymentRecipient *_recipient;
    NSString *_bankName;
    NSString *_routingNumber;
    NSString *_accountNumber;
}

@property (nonatomic, readonly) PKCurrencyAmount *calculatedTotalAmount;
@property (nonatomic, readonly) double validityDuration;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *items;
@property (copy, nonatomic, readonly) NSString *disclosureText;
@property (copy, nonatomic, readonly) NSURL *disclosureURL;
@property (copy, nonatomic, readonly) NSDecimalNumber *currentBalance;
@property (copy, nonatomic, readonly) NSString *currentBalanceCurrency;
@property (copy, nonatomic, readonly) NSData *appleHash;
@property (copy, nonatomic, readonly) NSData *externalHash;
@property (copy, nonatomic, readonly) NSDecimalNumber *totalReceiveAmount;
@property (copy, nonatomic, readonly) NSString *totalReceiveAmountCurrency;
@property (copy, nonatomic, readonly) NSDecimalNumber *totalFees;
@property (copy, nonatomic, readonly) NSString *totalFeesCurrency;
@property (copy, nonatomic, readonly) NSDate *validUntil;
@property (nonatomic, readonly) unsigned long long riskLevel;
@property (retain, nonatomic) PKPeerPaymentRecipient *recipient;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *routingNumber;
@property (copy, nonatomic) NSString *accountNumber;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)hasExpired;
- (id)firstQuoteItemOfType:(unsigned long long)arg1;

@end
