/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDate, PKCurrencyAmount, PKMerchant;

@interface PKPaymentTransactionGroup : NSObject <Swift>

{
    unsigned long long _type;
    NSDate *_startDate;
    NSDate *_endDate;
    long long _merchantCategory;
    PKMerchant *_merchant;
    unsigned long long _transactionCount;
    PKCurrencyAmount *_totalAmount;
    NSArray *_transactions;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) long long merchantCategory;
@property (retain, nonatomic) PKMerchant *merchant;
@property (nonatomic) unsigned long long transactionCount;
@property (retain, nonatomic) PKCurrencyAmount *totalAmount;
@property (retain, nonatomic) NSArray *transactions;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
