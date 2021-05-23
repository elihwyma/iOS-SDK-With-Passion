/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/WKPaymentAuthorizationDelegate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKPaymentAuthorizationControllerDelegate : WKPaymentAuthorizationDelegate

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithRequest:(id)arg1 presenter:(struct PaymentAuthorizationPresenter *)arg2;
- (void)_getPaymentServicesMerchantURL:(CDUnknownBlockType)arg1;
- (void)paymentAuthorizationControllerDidFinish:(id)arg1;
- (void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationController:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationController:(id)arg1 didSelectShippingContact:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationController:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2;
- (void)paymentAuthorizationController:(id)arg1 didRequestMerchantSession:(CDUnknownBlockType)arg2;

@end
