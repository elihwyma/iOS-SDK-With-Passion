/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class CNContact, PKAccountServicePaymentMethod, PKApplePayTrustSignature, PKAuthorizedPeerPaymentQuote, PKDisbursementVoucher, PKPayment, PKPaymentMethod, PKServiceProviderPurchase, PKShippingMethod;

@interface PKPaymentAuthorizationClientCallbackStateParam : PKPaymentAuthorizationStateParam

{
    long long _kind;
    id _object;
}

@property (retain, nonatomic) id object;
@property (nonatomic) long long kind;
@property (nonatomic, readonly) CNContact *shippingContact;
@property (nonatomic, readonly) PKPaymentMethod *paymentMethod;
@property (nonatomic, readonly) PKShippingMethod *shippingMethod;
@property (nonatomic, readonly) PKPayment *payment;
@property (nonatomic, readonly) PKServiceProviderPurchase *purchase;
@property (nonatomic, readonly) PKAuthorizedPeerPaymentQuote *authorizedPeerPaymentQuote;
@property (nonatomic, readonly) PKDisbursementVoucher *disbursementVoucher;
@property (nonatomic, readonly) PKApplePayTrustSignature *applePayTrustSignature;
@property (nonatomic, readonly) PKAccountServicePaymentMethod *accountServicePaymentMethod;

+ (id)paramWithCallbackKind:(long long)arg1 object:(id)arg2;

- (id)description;

@end
