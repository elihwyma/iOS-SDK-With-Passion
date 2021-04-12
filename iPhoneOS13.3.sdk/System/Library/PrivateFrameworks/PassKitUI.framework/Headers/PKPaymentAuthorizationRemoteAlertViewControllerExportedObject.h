//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentAuthorizationServiceProtocol-Protocol.h>

@class NSMutableSet, PKPaymentAuthorizationRemoteAlertViewController;
@protocol PKPaymentAuthorizationServiceProtocol;

@interface PKPaymentAuthorizationRemoteAlertViewControllerExportedObject : NSObject <PKPaymentAuthorizationServiceProtocol>
{
    BOOL _dismissed;
    NSMutableSet *_completionHandlers;
    id <PKPaymentAuthorizationServiceProtocol> _delegate;
    PKPaymentAuthorizationRemoteAlertViewController *_controller;
}

@property(nonatomic) __weak PKPaymentAuthorizationRemoteAlertViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <PKPaymentAuthorizationServiceProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
// - (void).cxx_destruct;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizeDisbursementWithResult:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)dismissed;
- (void)handleDismissWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationWillResignActive:(BOOL)arg1;
- (void)handleHostApplicationDidCancel;
- (void)_executeCompletionHandlers;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

