/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentController.h>

@class PKCurrencyAmount;

@interface PKMockPeerPaymentController : PKPeerPaymentController

{
    id _performCompletion;
    _Bool _shouldGenerateMockTransactions;
    PKCurrencyAmount *_mockBalance;
}

@property (retain, nonatomic) PKCurrencyAmount *mockBalance;
@property (nonatomic) _Bool shouldGenerateMockTransactions;

- (void)paymentAuthorizationCoordinator:(id *)arg1 didSelectPaymentMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id *)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithPeerPaymentWebService:(id)arg1;
- (id)_quoteItemDictionaryWithType:(unsigned long long)arg1 amount:(id)arg2 alternateFundingSource:(id)arg3 featureDescriptor:(id)arg4;
- (void)_adjustBalanceForAuthorizedTransferQuote:(id)arg1;
- (void)_insertPeerPaymentTransactionForAuthroizedTransferQuote:(id)arg1;
- (void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 alternateFundingSource:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)identifyRecipientWithAddress:(id)arg1 senderAddress:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)formalRequestTokenForAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_insertPaymentTransactionForSecondaryFundingSourceIfNecessary:(id)arg1;
- (void)performAction:(id)arg1 withPaymentIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
