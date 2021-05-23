/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDate, NSDecimalNumber, NSString, PKInstallmentPlanMerchant, PKInstallmentPlanPayment, PKInstallmentPlanProduct, PKInstallmentPlanSummary, PKPaymentTransactionRewards;

@interface PKInstallmentPlan : NSObject <Swift>

{
    _Bool _userViewedIntroduction;
    NSString *_identifier;
    long long _state;
    NSDate *_lastUpdated;
    NSDecimalNumber *_apr;
    unsigned long long _duration;
    NSString *_currencyCode;
    NSDecimalNumber *_totalAmount;
    NSDecimalNumber *_totalProductAmount;
    NSDecimalNumber *_totalInterestAmount;
    long long _periodType;
    NSString *_transactionReferenceIdentifier;
    PKInstallmentPlanSummary *_summary;
    PKInstallmentPlanMerchant *_merchant;
    PKInstallmentPlanProduct *_product;
    NSArray *_lineItems;
    NSArray *_payments;
    PKPaymentTransactionRewards *_rewards;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (retain, nonatomic) NSDecimalNumber *apr;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSDecimalNumber *totalAmount;
@property (retain, nonatomic) NSDecimalNumber *totalProductAmount;
@property (retain, nonatomic) NSDecimalNumber *totalInterestAmount;
@property (nonatomic) long long periodType;
@property (copy, nonatomic) NSString *transactionReferenceIdentifier;
@property (retain, nonatomic) PKInstallmentPlanSummary *summary;
@property (retain, nonatomic) PKInstallmentPlanMerchant *merchant;
@property (retain, nonatomic) PKInstallmentPlanProduct *product;
@property (copy, nonatomic) NSArray *lineItems;
@property (copy, nonatomic) NSArray *payments;
@property (retain, nonatomic) PKPaymentTransactionRewards *rewards;
@property (nonatomic, readonly) NSDecimalNumber *remainingAmount;
@property (nonatomic, readonly) NSDecimalNumber *totalBilled;
@property (nonatomic, readonly) PKInstallmentPlanPayment *nextPaymentDue;
@property (nonatomic, readonly, getter=isComplete) _Bool complete;
@property (nonatomic) _Bool userViewedIntroduction;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToInstallmentPlan:(id)arg1;

@end
