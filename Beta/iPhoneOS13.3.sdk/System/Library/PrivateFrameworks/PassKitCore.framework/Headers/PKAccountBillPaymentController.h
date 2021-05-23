/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSDate, NSDecimalNumber, NSError, NSMutableSet, NSString, PKAccount, PKAccountEvent, PKAccountService, PKAccountWebServiceSchedulePaymentRequest, PKBankAccountInformation, PKPaymentAuthorizationCoordinator, PKPaymentPass, PKPaymentRequest, PKPaymentService, PKPaymentWebService, PKPeerPaymentAccount;

@protocol PKAccountBillPaymentControllerDelegate;

@interface PKAccountBillPaymentController : NSObject

{
    PKPaymentWebService *_webService;
    PKPaymentService *_paymentService;
    PKAccountWebServiceSchedulePaymentRequest *_schedulePaymentRequest;
    PKPaymentAuthorizationCoordinator *_schedulePaymentAuthorizationCoordinator;
    NSError *_applePayTrustResponseError;
    PKBankAccountInformation *_bankInformation;
    PKPaymentPass *_pass;
    PKAccountService *_accountService;
    NSString *_currency;
    NSDecimalNumber *_totalPaymentAmount;
    NSDecimalNumber *_achPaymentAmount;
    NSDecimalNumber *_apcPaymentAmount;
    NSDecimalNumber *_peerPaymentBalance;
    PKPaymentRequest *_paymentRequest;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKAccountEvent *_billPaymentSuggestedAmountDataEvent;
    NSDate *_scheduledDate;
    NSString *_peerPaymentPassUniqueId;
    _Bool _accountPaymentSupportsPeerPaymentBalance;
    _Bool _peerPaymentAccountSupportsAccountPayments;
    _Bool _performingAction;
    _Bool _completedBillPayment;
    _Bool _fetchingData;
    NSError *_fetchingDataError;
    NSMutableSet *_dataFetchingCompletionHandlers;
    PKAccount *_account;
    id <PKAccountBillPaymentControllerDelegate> _delegate;
    NSArray *_fundingSources;
    NSArray *_payments;
}

@property (retain, nonatomic) PKAccount *account;
@property (weak, nonatomic) id <PKAccountBillPaymentControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *fundingSources;
@property (retain, nonatomic) NSArray *payments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_accountDidChange:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 paymentPass:(id)arg2;
- (void)_updateAmounts;
- (void)_fetchFundingSources;
- (_Bool)_accountPaymentSupportsPeerPaymentForDate:(id)arg1;
- (_Bool)_accountPaymentSupportsPeerPayment;
- (void)_completeFetchingFundingSources;
- (void)_billPaymentHasCompletedWithState:(unsigned long long)arg1 error:(id)arg2;
- (void)_performApplePayTrustSignatureRequestWithSignature:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateUseApplePayCashSetting:(_Bool)arg1;
- (id)_paymentSummaryItems;
- (id)_createSchedulePaymentRequest;
- (id)_bankAccountsForFundingSources:(id)arg1;
- (void)performBillPaymentActionWithAmount:(id)arg1 billPaymentSuggestedAmountDataEvent:(id)arg2;
- (void)performBillPaymentActionWithAmount:(id)arg1 scheduledDate:(id)arg2 billPaymentSuggestedAmountDataEvent:(id)arg3;
- (id)_paymentRequestWithSignatureRequest:(id)arg1 bankAccounts:(id)arg2;
- (void)_presentPaymentAuthorizationWithPaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_achPayment;
- (id)_apcPayment;
- (_Bool)_shouldUsePeerPaymentBalance;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didUpdateAccountServicePaymentMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)canPerformBillPaymentWithAmount:(id)arg1 scheduledDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performBillPaymentActionWithAmount:(id)arg1;

@end
