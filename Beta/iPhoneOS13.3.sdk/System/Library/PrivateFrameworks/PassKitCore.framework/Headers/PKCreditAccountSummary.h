/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSDecimalNumber, PKCreditAccountBalanceSummary, PKCreditAccountStatement;

@interface PKCreditAccountSummary : NSObject <Swift>

{
    _Bool _requiresDebtCollectionNotices;
    _Bool _inGrace;
    _Bool _autoPayEnabled;
    NSDecimalNumber *_creditLimit;
    NSDecimalNumber *_availableCredit;
    NSDecimalNumber *_currentBalance;
    NSDecimalNumber *_rewardsBalance;
    NSDecimalNumber *_remainingStatementBalance;
    NSDecimalNumber *_remainingMinimumPayment;
    NSDecimalNumber *_remainingMinimumPaymentExcludedFromInterestCalculation;
    NSDecimalNumber *_installmentBalance;
    NSDate *_paymentDueDate;
    NSDate *_lastPaymentDate;
    long long _cyclesPastDue;
    unsigned long long _balanceStatus;
    PKCreditAccountBalanceSummary *_balanceSummary;
    NSDecimalNumber *_unpostedInterest;
    NSDate *_unpostedInterestTimestamp;
    NSDecimalNumber *_chargeOffPreventionAmount;
    NSDecimalNumber *_pastDueAmount;
    PKCreditAccountStatement *_currentStatement;
    NSDecimalNumber *_adjustedBalance;
}

@property (copy, nonatomic) NSDecimalNumber *creditLimit;
@property (copy, nonatomic) NSDecimalNumber *availableCredit;
@property (copy, nonatomic) NSDecimalNumber *currentBalance;
@property (copy, nonatomic) NSDecimalNumber *adjustedBalance;
@property (copy, nonatomic) NSDecimalNumber *rewardsBalance;
@property (copy, nonatomic) NSDecimalNumber *remainingStatementBalance;
@property (copy, nonatomic) NSDecimalNumber *remainingMinimumPayment;
@property (copy, nonatomic) NSDecimalNumber *remainingMinimumPaymentExcludedFromInterestCalculation;
@property (copy, nonatomic) NSDecimalNumber *installmentBalance;
@property (copy, nonatomic) NSDate *paymentDueDate;
@property (copy, nonatomic) NSDate *lastPaymentDate;
@property (nonatomic) _Bool autoPayEnabled;
@property (nonatomic) unsigned long long balanceStatus;
@property (retain, nonatomic) PKCreditAccountBalanceSummary *balanceSummary;
@property (nonatomic) long long cyclesPastDue;
@property (copy, nonatomic) NSDecimalNumber *unpostedInterest;
@property (copy, nonatomic) NSDate *unpostedInterestTimestamp;
@property (nonatomic) _Bool requiresDebtCollectionNotices;
@property (nonatomic) _Bool inGrace;
@property (copy, nonatomic) NSDecimalNumber *chargeOffPreventionAmount;
@property (copy, nonatomic) NSDecimalNumber *pastDueAmount;
@property (retain, nonatomic) PKCreditAccountStatement *currentStatement;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)ingestExtendedAccountDetails:(id)arg1;

@end
