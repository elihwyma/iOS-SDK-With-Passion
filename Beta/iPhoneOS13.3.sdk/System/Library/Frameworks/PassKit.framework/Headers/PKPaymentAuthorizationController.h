/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <Foundation/NSObject.h>

@class NSString, PKPaymentAuthorizationCoordinator;

@protocol PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate;

@interface PKPaymentAuthorizationController : NSObject

{
    PKPaymentAuthorizationController *_retainSelf;
    id <PKPaymentAuthorizationControllerDelegate> _delegate;
    PKPaymentAuthorizationCoordinator *_paymentCoordinator;
    id <PKPaymentAuthorizationControllerPrivateDelegate> _privateDelegate;
}

@property (retain, nonatomic) PKPaymentAuthorizationCoordinator *paymentCoordinator;
@property (weak, nonatomic) id <PKPaymentAuthorizationControllerPrivateDelegate> privateDelegate;
@property (weak, nonatomic) id <PKPaymentAuthorizationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)paymentServicesMerchantURLForAPIType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)canMakePayments;
+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1;
+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentRequest:(id)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentAuthorizationCoordinatorWillAuthorizePayment:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingAddress:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 willFinishWithError:(id)arg2;
- (void)paymentAuthorizationCoordinator:(id)arg1 didRequestMerchantSession:(CDUnknownBlockType)arg2;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeDisbursementVoucher:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;

@end
