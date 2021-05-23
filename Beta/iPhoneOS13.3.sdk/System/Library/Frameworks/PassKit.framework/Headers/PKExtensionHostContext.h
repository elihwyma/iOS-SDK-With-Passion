/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <PassKit/PKExtensionBaseContext.h>

@class NSObject, NSString;

@protocol OS_dispatch_group, PKPaymentAuthorizationHostProtocol;

@interface PKExtensionHostContext : PKExtensionBaseContext

{
    id <PKPaymentAuthorizationHostProtocol> _delegate;
    NSObject<OS_dispatch_group> *_delayCallbacksGroup;
}

@property (retain, nonatomic) NSObject<OS_dispatch_group> *delayCallbacksGroup;
@property (weak, nonatomic) id <PKPaymentAuthorizationHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)vendorContextWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationWillStart;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)authorizationDidAuthorizeDisbursement:(id)arg1;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidPresent;
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;
- (id)vendorContext;
- (void)beginDelayingCallbacks;
- (void)endDelayingCallbacks;

@end
