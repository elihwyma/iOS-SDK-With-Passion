/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSCalendar, NSDate, NSDecimalNumber, NSTimeZone;

@interface PKCompoundInterestCalculatorConfiguration : NSObject

{
    NSCalendar *_calendar;
    _Bool _inGrace;
    _Bool _isInDisasterRecovery;
    unsigned long long _calculationMethod;
    NSDecimalNumber *_apr;
    long long _compoundingPeriods;
    NSDate *_periodStartDate;
    NSDate *_periodEndDate;
    NSDecimalNumber *_periodStartingBalance;
    NSDecimalNumber *_remainingPeriodStartingBalance;
    NSDecimalNumber *_remainingPeriodMinimumPayment;
    NSDecimalNumber *_remainingPeriodMinimumPaymentExcludedFromInterestCalculation;
    NSDecimalNumber *_currentBalance;
    NSDecimalNumber *_unpostedInterest;
    NSDate *_unpostedInterestTimestamp;
    NSArray *_periodTransactions;
    NSArray *_futurePayments;
    NSTimeZone *_productTimeZone;
}

@property (nonatomic) unsigned long long calculationMethod;
@property (retain, nonatomic, setter=setAPR:) NSDecimalNumber *apr;
@property (nonatomic) long long compoundingPeriods;
@property (retain, nonatomic) NSDate *periodStartDate;
@property (retain, nonatomic) NSDate *periodEndDate;
@property (retain, nonatomic) NSDecimalNumber *periodStartingBalance;
@property (retain, nonatomic) NSDecimalNumber *remainingPeriodStartingBalance;
@property (retain, nonatomic) NSDecimalNumber *remainingPeriodMinimumPayment;
@property (retain, nonatomic) NSDecimalNumber *remainingPeriodMinimumPaymentExcludedFromInterestCalculation;
@property (retain, nonatomic) NSDecimalNumber *currentBalance;
@property (nonatomic) _Bool inGrace;
@property (nonatomic) _Bool isInDisasterRecovery;
@property (retain, nonatomic) NSDecimalNumber *unpostedInterest;
@property (retain, nonatomic) NSDate *unpostedInterestTimestamp;
@property (copy, nonatomic) NSArray *periodTransactions;
@property (copy, nonatomic) NSArray *futurePayments;
@property (retain, nonatomic) NSTimeZone *productTimeZone;

+ (id)configurationWithCreditAccount:(id)arg1;

- (id)init;
- (id)description;
- (void)updateWithCreditAccount:(id)arg1;

@end
