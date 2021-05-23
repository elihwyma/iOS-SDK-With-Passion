/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSHashTable, NSLock, NSString, PKOSVersionRequirement, PKPaymentService, PKPaymentWebService, PKSecureElement;

@protocol OS_dispatch_queue, PKPaymentDataProviderDelegate;

@interface PKPaymentDefaultDataProvider : NSObject

{
    PKPaymentService *_paymentService;
    PKSecureElement *_secureElement;
    NSHashTable *_delegates;
    NSLock *_delegateLock;
    NSObject<OS_dispatch_queue> *_replyQueue;
    id <PKPaymentDataProviderDelegate> _delegate;
    PKPaymentWebService *_paymentWebService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isDeviceInRestrictedMode;
@property (nonatomic, readonly) NSString *secureElementIdentifier;
@property (nonatomic, readonly) _Bool secureElementIsProductionSigned;
@property (retain, nonatomic) NSString *defaultPaymentPassIdentifier;
@property (nonatomic, readonly) _Bool isPaymentHandoffDisabled;
@property (weak, nonatomic) id <PKPaymentDataProviderDelegate> delegate;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) PKOSVersionRequirement *deviceVersion;
@property (nonatomic, readonly) PKPaymentWebService *paymentWebService;

- (id)init;
- (void)dealloc;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (long long)apiVersion;
- (_Bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (id)initWithPaymentService:(id)arg1 secureElement:(id)arg2;
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)cashbackByPeriodFromPassUniqueIdentifier:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4 calendarUnit:(unsigned long long)arg5 type:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withMapsIdentifier:(unsigned long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 matchingMerchant:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)transactionsForPaymentPassWithuniqueIdentifier:(id)arg1 withMerchantCategory:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionType:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;
- (void)transactionWithServiceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionWithReferenceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installmentTransactionsForInstallmentPlanIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installmentPlansWithTransactionReferenceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installmentPlanTransactionsForPassUniqueIdentifier:(id)arg1 accountIdentifier:(id)arg2 withRedemptionType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)mapsMerchantsWithCompletion:(CDUnknownBlockType)arg1;
- (id)expressPassesInformationWithCardType:(long long)arg1;
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitTransactionAnswerForTransaction:(id)arg1 questionType:(unsigned long long)arg2 answer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)transactionsRequiringReviewForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;
- (void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)balanceReminderThresholdForBalance:(id)arg1 pass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;
- (void)archiveMessageWithIdentifier:(id)arg1;
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
- (id)expressPassesInformation;
- (void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_accessDelegatesWithHandler:(CDUnknownBlockType)arg1;
- (void)setPaymentHandoffDisabled:(_Bool)arg1;
- (void)passUpgradeWithRequest:(id)arg1 pass:(id)arg2 visibleViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)approvedTransactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)pendingTransactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)transactionCountByPeriodForPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(id)arg4 calendarUnit:(unsigned long long)arg5 includePurchaseTotal:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)commutePlanReminderIntervalForCommutePlan:(id)arg1 pass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setCommutePlanReminderInterval:(double)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)supportsTransactionsForPass:(id)arg1;
- (_Bool)supportsMessagesForPass:(id)arg1;
- (_Bool)supportsNotificationsForPass:(id)arg1;
- (_Bool)supportsInAppPaymentsForPass:(id)arg1;
- (_Bool)supportsLowPowerExpressMode;

@end
