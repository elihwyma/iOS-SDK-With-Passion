/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSDecimalNumber, NSMutableDictionary, NSString, PKBillPaymentSuggestedAmount;

@interface PKBillPaymentSuggestedAmountList : NSObject

{
    NSMutableDictionary *_suggestionsForCategory;
    NSMutableDictionary *_suggestionsForAmount;
    NSMutableDictionary *_suggestedAmountGapMessageForAmount;
    NSArray *_sortedSuggestedAmounts;
    NSString *_currencyCode;
    NSDecimalNumber *_minimumAmount;
    NSDecimalNumber *_remainingStatementAmount;
    NSDecimalNumber *_maximumAmount;
    NSDecimalNumber *_smalllestSuggestionAmountBelowRemainingStatementAmount;
    PKBillPaymentSuggestedAmount *_initialSuggestedAmount;
}

@property (copy, nonatomic, readonly) NSArray *sortedSuggestedAmounts;
@property (copy, nonatomic, readonly) NSString *currencyCode;
@property (copy, nonatomic, readonly) NSDecimalNumber *minimumAmount;
@property (copy, nonatomic, readonly) NSDecimalNumber *remainingStatementAmount;
@property (copy, nonatomic, readonly) NSDecimalNumber *maximumAmount;
@property (copy, nonatomic, readonly) NSDecimalNumber *smalllestSuggestionAmountBelowRemainingStatementAmount;
@property (retain, nonatomic) PKBillPaymentSuggestedAmount *initialSuggestedAmount;

+ (id)roundingHandler;
+ (unsigned long long)maximumNumberSuggestions;
+ (id)requiredSuggestedAmountCategories;
+ (id)boundaryAngle;

- (id)init;
- (id)description;
- (void)_createMandatorySuggestions;
- (_Bool)_addSuggestedAmount:(id)arg1 force:(_Bool)arg2;
- (_Bool)canAddAmount:(id)arg1;
- (_Bool)canAddCategory:(unsigned long long)arg1;
- (_Bool)addSuggestedAmount:(id)arg1;
- (_Bool)canAddAmount:(id)arg1 andCategory:(unsigned long long)arg2;
- (void)_updateValues;
- (id)suggestedAmountWithCategory:(unsigned long long)arg1;
- (id)suggestedAmountBeforeSuggestedAmount:(id)arg1;
- (id)suggestedAmountAfterSuggestedAmount:(id)arg1;
- (id)maximumSuggestedAmount;
- (id)_boundaryAmount;
- (_Bool)_suggestedAmountIsRequiredCategory:(id)arg1;
- (_Bool)isValidWithUnableReason:(unsigned long long *)arg1;
- (void)_removeSuggestedAmount:(id)arg1;
- (id)_suggestedAmountThatIsNotRequired:(id)arg1 suggestedAmount2:(id)arg2;
- (id)_lastSuggestedAmountThatIsNotRequred;
- (id)_sortedAmounts;
- (id)minimumSuggestedAmount;
- (id)_sortedSuggestedAmounts;
- (id)_smalllestSuggestionAmountBelowRemainingStatementAmount;
- (id)initWithCurrencyCode:(id)arg1 remainingMinimumPayment:(id)arg2 remainingStatementBalance:(id)arg3 currentBalance:(id)arg4;
- (void)addSuggestedAmountList:(id)arg1;
- (id)maximumSuggestedAmountFromCategories:(id)arg1;
- (id)minimumSuggestedAmountFromCategories:(id)arg1;
- (_Bool)suggestedAmount:(id)arg1 isAdjoiningSuggestedAmount:(id)arg2;
- (id)suggestedAmountGapMessageForStartSuggestedAmount:(id)arg1;
- (void)addSuggestedAmountGapMessage:(id)arg1 forStartSuggestedAmount:(id)arg2;
- (id)billPaymentSelectedSuggestedAmountDataEventForAmount:(id)arg1 accountIdentifier:(id)arg2 statementIdentifier:(id)arg3;
- (void)attemptToPurgeInvalidSuggestedAmounts;

@end
