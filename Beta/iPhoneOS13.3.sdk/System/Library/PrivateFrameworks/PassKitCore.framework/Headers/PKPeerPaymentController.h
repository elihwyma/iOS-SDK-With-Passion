/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSError, NSString, PKPaymentAuthorizationCoordinator, PKPaymentPass, PKPeerPaymentAccount, PKPeerPaymentContactResolver, PKPeerPaymentControllerInternalState, PKPeerPaymentPerformResponse, PKPeerPaymentQuote, PKPeerPaymentRecipient, PKPeerPaymentRequestToken, PKPeerPaymentWebService;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PKPeerPaymentController : NSObject

{
    PKPeerPaymentControllerInternalState *_is;
    PKPeerPaymentAccount *_account;
    PKPaymentPass *_peerPaymentPass;
    PKPeerPaymentContactResolver *_contactResolver;
    PKPaymentAuthorizationCoordinator *_performQuoteAuthorizationCoordinator;
    NSObject<OS_dispatch_group> *_performQuoteGroup;
    NSObject<OS_dispatch_queue> *_performQuoteCallbackQueue;
    _Bool _performQuoteSuccess;
    NSError *_performQuoteError;
    PKPeerPaymentWebService *_webService;
}

@property (nonatomic, readonly) PKPeerPaymentWebService *webService;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) PKPeerPaymentAccount *account;
@property (nonatomic, readonly) PKPaymentPass *peerPaymentPass;
@property (copy, nonatomic, readonly) NSString *senderPhoneOrEmail;
@property (copy, nonatomic, readonly) NSString *recipientPhoneOrEmail;
@property (copy, nonatomic, readonly) PKPeerPaymentRecipient *recipient;
@property (copy, nonatomic, readonly) NSString *recipientDisplayName;
@property (nonatomic, readonly) PKPeerPaymentQuote *quote;
@property (nonatomic, readonly) PKPeerPaymentPerformResponse *performQuoteResponse;
@property (nonatomic, readonly) PKPeerPaymentRequestToken *requestToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)displayNameForAddress:(id)arg1 contactResolver:(id)arg2;
+ (id)displayableErrorForError:(id)arg1;
+ (_Bool)errorIsIdentityVerificationRequiredError:(id)arg1;
+ (_Bool)errorIsTermsAcceptanceRequiredError:(id)arg1;
+ (id)_displayableErrorOverrideForUnderlyingError:(id)arg1;
+ (id)_displayNameForRecipientAddress:(id)arg1 contactResolver:(id)arg2 foundInContacts:(_Bool *)arg3;
+ (unsigned long long)proposedResolutionForError:(id)arg1;
+ (id)_peerPaymentPassURL;

- (void)dealloc;
- (void)reset;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithPeerPaymentWebService:(id)arg1;
- (id)displayNameForRecipientAddress:(id)arg1;
- (id)internalState;
- (void)_setState:(unsigned long long)arg1 notify:(_Bool)arg2;
- (id)_defaultAlternateFundingSourceForMode:(unsigned long long)arg1;
- (_Bool)_ensureState:(unsigned long long)arg1;
- (void)_setPerformQuoteSuccess:(_Bool)arg1;
- (id)summaryItemsForQuote:(id)arg1;
- (void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 alternateFundingSource:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)identifyRecipientWithAddress:(id)arg1 senderAddress:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)formalRequestTokenForAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performAction:(id)arg1 withPaymentIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleAccountChanged:(id)arg1;
- (void)_resetToState:(unsigned long long)arg1;
- (id)displayableErrorForError:(id)arg1;
- (void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestQuoteWithRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_refreshRecipientWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateLastUsedAlternateFundingSource;
- (void)performQuote:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)displayNameForRecipientAddress:(id)arg1 foundInContacts:(_Bool *)arg2;
- (id)_contactResolver;
- (id)contactForHandle:(id)arg1;
- (_Bool)_contactInfoIsValidForAuthorizedQuote:(id)arg1 errors:(id *)arg2;
- (void)aggDAuthorizedQuoteWithSuccess:(_Bool)arg1 authorizedQuote:(id)arg2;
- (id)externalizedControllerState;
- (_Bool)restoreStateWithExternalizedControllerState:(id)arg1;
- (void)identifyRecipientWithRoutingNumber:(id)arg1 accountNumber:(id)arg2 accountName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)identifyRecipientDebitCardWithCompletion:(CDUnknownBlockType)arg1;
- (void)identifyRecipientSelf;
- (void)selectMode:(unsigned long long)arg1;
- (void)quoteWithAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performQuoteWithCompletion:(CDUnknownBlockType)arg1;
- (void)statusForPaymentIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleIdentityVerificationWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleTermsAcceptanceRequiredWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)identifyRecipientWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestTokenForAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
