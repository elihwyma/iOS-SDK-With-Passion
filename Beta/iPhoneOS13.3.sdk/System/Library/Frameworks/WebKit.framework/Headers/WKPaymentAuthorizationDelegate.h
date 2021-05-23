/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKPaymentAuthorizationDelegate : NSObject

{
    struct RetainPtr<PKPaymentRequest> _request;
    _Bool _didReachFinalState;
    struct RetainPtr<NSArray<PKPaymentSummaryItem *>> _summaryItems;
    struct RetainPtr<NSArray<PKShippingMethod *>> _shippingMethods;
    struct RetainPtr<NSError> _sessionError;
    struct WeakPtr<WebKit::PaymentAuthorizationPresenter> _presenter;
    struct BlockPtr<void (PKPaymentAuthorizationResult *)> _didAuthorizePaymentCompletion;
    struct BlockPtr<void (PKPaymentMerchantSession *, NSError *)> _didRequestMerchantSessionCompletion;
    struct BlockPtr<void (PKPaymentRequestPaymentMethodUpdate *)> _didSelectPaymentMethodCompletion;
    struct BlockPtr<void (PKPaymentRequestShippingContactUpdate *)> _didSelectShippingContactCompletion;
    struct BlockPtr<void (PKPaymentRequestShippingMethodUpdate *)> _didSelectShippingMethodCompletion;
}

- (void)invalidate;
- (id).cxx_construct;
- (void)_didFinish;
- (void)completeMerchantValidation:(id)arg1 error:(id)arg2;
- (void)completePaymentMethodSelection:(id)arg1;
- (void)completePaymentSession:(long long)arg1 errors:(id)arg2 didReachFinalState:(_Bool)arg3;
- (void)completeShippingContactSelection:(id)arg1;
- (void)completeShippingMethodSelection:(id)arg1;
- (id)_initWithRequest:(id)arg1 presenter:(struct PaymentAuthorizationPresenter *)arg2;
- (void)_didAuthorizePayment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didSelectShippingMethod:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didSelectShippingContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didSelectPaymentMethod:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_willFinishWithError:(id)arg1;
- (void)_didRequestMerchantSession:(CDUnknownBlockType)arg1;
- (void)_getPaymentServicesMerchantURL:(CDUnknownBlockType)arg1;
- (id)shippingMethods;
- (id)summaryItems;

@end
