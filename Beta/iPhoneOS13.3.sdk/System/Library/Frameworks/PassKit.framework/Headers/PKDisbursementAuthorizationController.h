/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <Foundation/NSObject.h>

@class NSString, PKDisbursementRequest, PKPaymentAuthorizationCoordinator;

@protocol PKDisbursementAuthorizationControllerDelegate;

@interface PKDisbursementAuthorizationController : NSObject

{
    PKDisbursementAuthorizationController *_retainSelf;
    PKPaymentAuthorizationCoordinator *_authController;
    PKDisbursementRequest *_disbursementRequest;
    id <PKDisbursementAuthorizationControllerDelegate> _delegate;
}

@property (nonatomic, readonly) id <PKDisbursementAuthorizationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsDisbursements;

- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeDisbursementVoucher:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithDisbursementRequest:(id)arg1 delegate:(id)arg2;
- (void)authorizeDisbursementWithCompletion:(CDUnknownBlockType)arg1;

@end
