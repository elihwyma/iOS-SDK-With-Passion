/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationFieldsStepContext : NPKPaymentProvisioningFlowStepContext

{
    PKPaymentPass *_paymentPass;
    NSArray *_verificationFields;
}

@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) NSArray *verificationFields;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
