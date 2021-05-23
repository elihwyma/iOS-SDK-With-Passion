/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDecimalNumber, NSString;

@interface NFPeerPaymentTransferRequest : NSObject

{
    NSDecimalNumber *_transactionAmount;
    NSString *_appleTransactionHash;
    NSString *_publicTransactionHash;
    NSDate *_transactionDate;
    NSString *_transactionCurrency;
    NSString *_transactionCountry;
    NSData *_nonce;
}

@property (copy, nonatomic) NSDecimalNumber *transactionAmount;
@property (copy, nonatomic) NSString *appleTransactionHash;
@property (copy, nonatomic) NSString *publicTransactionHash;
@property (copy, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSString *transactionCurrency;
@property (copy, nonatomic) NSString *transactionCountry;
@property (copy, nonatomic) NSData *nonce;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
