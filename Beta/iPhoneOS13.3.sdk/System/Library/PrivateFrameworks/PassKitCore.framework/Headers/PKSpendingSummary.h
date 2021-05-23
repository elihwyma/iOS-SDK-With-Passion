/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDate, PKCurrencyAmount, PKPaymentTransactionGroup;

@interface PKSpendingSummary : NSObject <Swift>

{
    _Bool _isLoading;
    unsigned long long _summaryType;
    unsigned long long _summaryUnit;
    NSDate *_startDate;
    NSDate *_endDate;
    PKCurrencyAmount *_totalSpending;
    NSArray *_orderedSpendingCategories;
    NSArray *_orderedSpendingPerMerchants;
    PKCurrencyAmount *_previousTotalSpending;
    PKCurrencyAmount *_previousMaxAmount;
    PKPaymentTransactionGroup *_rewards;
    PKPaymentTransactionGroup *_interest;
    PKPaymentTransactionGroup *_payments;
    PKPaymentTransactionGroup *_refunds;
    PKPaymentTransactionGroup *_adjustments;
    NSArray *_spendingsPerCalendarUnit;
}

@property (nonatomic) unsigned long long summaryType;
@property (nonatomic) unsigned long long summaryUnit;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) _Bool isLoading;
@property (retain, nonatomic) PKCurrencyAmount *totalSpending;
@property (copy, nonatomic) NSArray *orderedSpendingCategories;
@property (copy, nonatomic) NSArray *orderedSpendingPerMerchants;
@property (retain, nonatomic) PKCurrencyAmount *previousTotalSpending;
@property (retain, nonatomic) PKCurrencyAmount *previousMaxAmount;
@property (retain, nonatomic) PKPaymentTransactionGroup *rewards;
@property (retain, nonatomic) PKPaymentTransactionGroup *interest;
@property (retain, nonatomic) PKPaymentTransactionGroup *payments;
@property (retain, nonatomic) PKPaymentTransactionGroup *refunds;
@property (retain, nonatomic) PKPaymentTransactionGroup *adjustments;
@property (retain, nonatomic) NSArray *spendingsPerCalendarUnit;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
