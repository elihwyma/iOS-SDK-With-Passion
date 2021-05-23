/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSCalendar, NSMutableDictionary, PKCompoundInterestCalculatorConfiguration;

@interface PKCompoundInterestCalculator : NSObject

{
    NSCalendar *_calendar;
    NSMutableDictionary *_toDateCache;
    PKCompoundInterestCalculatorConfiguration *_configuration;
}

@property (nonatomic, readonly) PKCompoundInterestCalculatorConfiguration *configuration;

- (id)initWithConfiguration:(id)arg1;
- (id)compoundInterestWithPaymentOfAmount:(id)arg1;
- (id)compoundInterestForPaymentOfAmount:(id)arg1 onDate:(id)arg2;
- (_Bool)_interestCanBeCalculated;
- (id)_rawCompoundInterestForPaymentOfAmount:(id)arg1 onDate:(id)arg2 includeNewBalance:(_Bool)arg3;
- (id)_rawUnpostedInterestCalculationForPaymentOfAmount:(id)arg1 onDate:(id)arg2 includeNewPurchases:(_Bool)arg3;
- (_Bool)_date:(id)arg1 isApplicableForProcessingDate:(id)arg2;
- (id)_creditsForProcessingDate:(id)arg1;
- (id)_additionalBalanceForProcessingDate:(id)arg1;
- (id)compoundInterest;

@end
