/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <PassKit/PKExtensionBaseContext.h>

@class NSString, PKEntitlementWhitelist;

@interface PKExtensionVendorContext : PKExtensionBaseContext

{
    PKEntitlementWhitelist *_whitelist;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)hostContext;
- (void)handleHostApplicationWillResignActive:(_Bool)arg1;
- (void)handleHostApplicationDidBecomeActive;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizeDisbursementWithResult:(id)arg1;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;
- (void)handleHostApplicationDidCancel;
- (void)handleDismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareWithPaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
- (void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
- (void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1;
- (id)entitlementWhitelist;
- (id)hostContextWithErrorHandler:(CDUnknownBlockType)arg1;

@end
