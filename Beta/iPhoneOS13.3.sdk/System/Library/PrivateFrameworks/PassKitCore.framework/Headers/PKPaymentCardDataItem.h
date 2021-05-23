/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentDataItem.h>

@class CNContact, PKCurrencyAmount, PKPaymentApplication, PKPaymentPass;

@interface PKPaymentCardDataItem : PKPaymentDataItem

{
    _Bool _showPeerPaymentBalance;
    PKCurrencyAmount *_peerPaymentBalance;
}

@property (nonatomic) _Bool showPeerPaymentBalance;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic, readonly) PKPaymentApplication *paymentApplication;
@property (nonatomic, readonly) _Bool requiresBillingAddress;
@property (nonatomic, readonly) CNContact *billingAddress;
@property (nonatomic, readonly) _Bool shouldShowCardArt;

+ (long long)dataType;

- (long long)status;
- (id)errors;
- (_Bool)isValidWithError:(id *)arg1;

@end
