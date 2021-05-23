/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class PKBankAccountInformation, PKCurrencyAmount;

@interface PKAccountServicePaymentMethod : NSObject <Swift>

{
    _Bool _deviceSupportsPeerPaymentAccountPayment;
    PKBankAccountInformation *_bankAccountInformation;
    PKCurrencyAmount *_peerPaymentBalance;
}

@property (copy, nonatomic) PKBankAccountInformation *bankAccountInformation;
@property (copy, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic) _Bool deviceSupportsPeerPaymentAccountPayment;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBankAccountInformation:(id)arg1 peerPaymentBalance:(id)arg2 deviceSupportsPeerPaymentAccountPayment:(_Bool)arg3;

@end
