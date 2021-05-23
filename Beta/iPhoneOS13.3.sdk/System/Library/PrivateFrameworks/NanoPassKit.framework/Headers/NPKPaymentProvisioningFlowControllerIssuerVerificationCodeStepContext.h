/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentPass, PKVerificationChannel;

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationCodeStepContext : NPKPaymentProvisioningFlowStepContext

{
    PKPaymentPass *_paymentPass;
    PKVerificationChannel *_verificationChannel;
}

@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) PKVerificationChannel *verificationChannel;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
