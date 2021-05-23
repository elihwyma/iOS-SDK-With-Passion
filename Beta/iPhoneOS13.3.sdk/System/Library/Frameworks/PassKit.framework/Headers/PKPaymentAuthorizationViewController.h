/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <UIKit/UIViewController.h>

@class NSString, PKPaymentAuthorizationCoordinator;

@protocol PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate;

@interface PKPaymentAuthorizationViewController : UIViewController

{
    _Bool _viewHasAppeared;
    id <PKPaymentAuthorizationViewControllerDelegate> _delegate;
    PKPaymentAuthorizationCoordinator *_paymentCoordinator;
    id <PKPaymentAuthorizationViewControllerPrivateDelegate> _privateDelegate;
}

@property (retain, nonatomic) PKPaymentAuthorizationCoordinator *paymentCoordinator;
@property (nonatomic) _Bool viewHasAppeared;
@property (weak, nonatomic) id <PKPaymentAuthorizationViewControllerPrivateDelegate> privateDelegate;
@property (weak, nonatomic) id <PKPaymentAuthorizationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)paymentServicesMerchantURLForAPIType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)canMakePayments;
+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1;
+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2;
+ (void)paymentServicesMerchantURL:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)modalPresentationStyle;
- (id)initWithPaymentRequest:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentAuthorizationCoordinatorWillAuthorizePayment:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingAddress:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 willFinishWithError:(id)arg2;
- (void)paymentAuthorizationCoordinator:(id)arg1 didRequestMerchantSession:(CDUnknownBlockType)arg2;

@end
