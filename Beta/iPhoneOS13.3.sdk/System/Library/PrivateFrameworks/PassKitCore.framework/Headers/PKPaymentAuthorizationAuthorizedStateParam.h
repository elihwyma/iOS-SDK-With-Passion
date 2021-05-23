/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSString, PKApplePayTrustSignature, PKAuthorizedPeerPaymentQuote, PKDisbursementVoucher, PKPayment, PKPaymentToken, PKServiceProviderPurchase;

@interface PKPaymentAuthorizationAuthorizedStateParam : PKPaymentAuthorizationStateParam

{
    PKPaymentToken *_paymentToken;
    PKPayment *_payment;
    PKServiceProviderPurchase *_purchase;
    NSString *_purchaseTransactionIdentifier;
    PKAuthorizedPeerPaymentQuote *_authorizedPeerPaymentQuote;
    PKDisbursementVoucher *_disbursementVoucher;
    PKApplePayTrustSignature *_applePayTrustSignature;
    NSString *_installmentAuthorizationToken;
}

@property (retain, nonatomic) PKPaymentToken *paymentToken;
@property (retain, nonatomic) PKPayment *payment;
@property (retain, nonatomic) PKServiceProviderPurchase *purchase;
@property (copy, nonatomic) NSString *purchaseTransactionIdentifier;
@property (nonatomic, readonly) PKAuthorizedPeerPaymentQuote *authorizedPeerPaymentQuote;
@property (nonatomic, readonly) PKDisbursementVoucher *disbursementVoucher;
@property (nonatomic, readonly) PKApplePayTrustSignature *applePayTrustSignature;
@property (copy, nonatomic, readonly) NSString *installmentAuthorizationToken;

+ (id)paramWithPayment:(id)arg1;
+ (id)paramWithPaymentToken:(id)arg1;
+ (id)paramWithPurchase:(id)arg1 purchaseTransactionIdentifier:(id)arg2;
+ (id)paramWithDisbursementVoucher:(id)arg1;
+ (id)paramWithAuthorizedPeerPaymentQuote:(id)arg1;
+ (id)paramWithInstallmentAuthorizationToken:(id)arg1;
+ (id)paramWithApplePayTrustSignature:(id)arg1;

- (id)description;

@end
