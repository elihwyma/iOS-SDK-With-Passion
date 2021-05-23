/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSDateFormatter, NSDecimalNumber, NSMutableArray, NSMutableDictionary, PKAccount, PKAccountServiceAccountResolutionCofiguration, _DPStringRecorder;

@interface PKBillPaymentSuggestedAmountController : NSObject

{
    NSDateFormatter *_monthAndDayFormatter;
    NSDateFormatter *_monthFormatter;
    NSDecimalNumber *_currentStatementPaymentsSum;
    NSDecimalNumber *_previousStatementPaymentsSum;
    NSDecimalNumber *_statementPurchasesSum;
    NSMutableDictionary *_merchantCategoryTransactionSums;
    _Bool _isOnPlanCompletion;
    _Bool _isOnPaymentPlan;
    _Bool _currentStatementIsLastMonthsStatement;
    _Bool _isMonthZero;
    _Bool _isMonthOne;
    PKAccountServiceAccountResolutionCofiguration *_configuration;
    long long _numberOfActiveInstallments;
    long long _numberOfActiveStatementedInstallments;
    NSMutableArray *_differentialPrivacyFeatures;
    _DPStringRecorder *_differentialPrivacyRecorder;
    PKAccount *_account;
    NSArray *_currentStatementSelectedSuggestedAmountEvents;
    NSArray *_previousStatementSelectedSuggestedAmountEvents;
    NSArray *_approvedTransactionsPurchasesSinceStatement;
    NSArray *_approvedTransactionsBillPaymentSinceStatement;
    NSArray *_approvedTransactionsPurchasesForPreviousStatement;
    NSArray *_approvedTransactionsBillPaymentForPreviousStatement;
}

@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, readonly) NSArray *currentStatementSelectedSuggestedAmountEvents;
@property (nonatomic, readonly) NSArray *previousStatementSelectedSuggestedAmountEvents;
@property (nonatomic, readonly) NSArray *approvedTransactionsPurchasesSinceStatement;
@property (nonatomic, readonly) NSArray *approvedTransactionsBillPaymentSinceStatement;
@property (nonatomic, readonly) NSArray *approvedTransactionsPurchasesForPreviousStatement;
@property (nonatomic, readonly) NSArray *approvedTransactionsBillPaymentForPreviousStatement;

+ (void)approvedTransactionsPurchasesForPreviousStatementForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)approvedTransactionsPurchasesSinceStatementForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)approvedTransactionsBillPaymentSinceStatementForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)approvedTransactionsBillPaymentForPreviousStatementForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)currentStatementSelectedSuggestedAmountEventsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)previousStatementSelectedSuggestedAmountEventsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_approvedTransactionsSinceStatementForAccount:(id)arg1 transactionType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_approvedTransactionsForPreviousStatementForAccount:(id)arg1 transactionType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)defaultControllerForAccount:(id)arg1 paymentPass:(id)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;

- (id)initWithAccount:(id)arg1 currentStatementSelectedSuggestedAmountEvents:(id)arg2 previousStatementSelectedSuggestedAmountEvents:(id)arg3 approvedTransactionsPurchasesSinceStatement:(id)arg4 approvedTransactionsPurchasesForPreviousStatement:(id)arg5 approvedTransactionsBillPaymentSinceStatement:(id)arg6 approvedTransactionsBillPaymentForPreviousStatement:(id)arg7 configuration:(id)arg8;
- (_Bool)_calculateCurrentStatementIsLastMonthsStatement;
- (void)_initializeDifferentialPrivacy:(id)arg1 accountSummary:(id)arg2;
- (void)_populateStringValuesForList:(id)arg1;
- (id)_createDefaultAmountSuggestionListFromAccount;
- (void)_generateAmountSuggestionListUsingTransactionHistoryForList:(id)arg1;
- (void)_populatePriorityValuesForList:(id)arg1;
- (_Bool)_suggestedAmountListIsValidAfterPurgeIfNecessary:(id)arg1;
- (void)_zerothOrFirstMonthBillPaymentSuggestionsForList:(id)arg1;
- (_Bool)_allMandatoryValuesAreSameAmount;
- (_Bool)_categoryIsPaymentPlan:(unsigned long long)arg1;
- (void)_minimumMerchcantCategoriesAboveMinimumAmount:(id)arg1 minMerchantCategory1:(long long *)arg2 minMerchantCategory2:(long long *)arg3 minMerchantCategorySum1:(id *)arg4 minMerchantCategorySum2:(id *)arg5;
- (id)_suggestedAmountsForPayOffDateForStatementBalance:(id)arg1 creditUtilization:(id)arg2 lastPaymentCategory:(unsigned long long)arg3;
- (id)_calculateThresholdForLastPaymentCategory:(unsigned long long)arg1 statementBalance:(id)arg2 suggestedAmountWithSameCategory:(id)arg3;
- (id)_filterSuggestions:(id)arg1 belowThreshold:(id)arg2;
- (void)_setDifferentialPrivacyFeature:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)_categoryIsCurrentBalanceType:(unsigned long long)arg1;
- (id)_planCompletionTitleString;
- (id)_titleForSuggestion:(id)arg1;
- (id)_messageForSuggestion:(id)arg1;
- (id)_remainingStatementBalanceGapTitleText;
- (id)_remainingStatementBalanceGapDescriptionText;
- (id)_remainingStatementBalanceTitleString;
- (id)_remainingStatementBalanceMessageString;
- (id)differentialPrivacyFeaturesAsString;
- (id)generateAmountSuggestionList;
- (void)recordPaymentActionWithDifferentialPrivacy:(unsigned long long)arg1;

@end
