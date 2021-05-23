/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, PKPaymentAuthorizationCoordinator;

@protocol OS_dispatch_queue, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationServiceProtocol;

@interface PKPaymentAuthorizationCoordinatorExportedObject : NSObject

{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <PKPaymentAuthorizationCoordinatorDelegate> _delegate;
    id <PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;
    PKPaymentAuthorizationCoordinator *_controller;
    id <PKPaymentAuthorizationServiceProtocol> _serviceProxy;
}

@property (weak, nonatomic) id <PKPaymentAuthorizationCoordinatorDelegate> delegate;
@property (weak, nonatomic) id <PKPaymentAuthorizationCoordinatorPrivateDelegate> privateDelegate;
@property (nonatomic) PKPaymentAuthorizationCoordinator *controller;
@property (retain, nonatomic) id <PKPaymentAuthorizationServiceProtocol> serviceProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithController:(id)arg1;
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
- (void)connectionDidOpen;
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;

@end
