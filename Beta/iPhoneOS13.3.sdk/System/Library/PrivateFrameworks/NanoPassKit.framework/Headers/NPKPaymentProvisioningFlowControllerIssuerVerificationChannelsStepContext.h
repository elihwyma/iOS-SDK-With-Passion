/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationChannelsStepContext : NPKPaymentProvisioningFlowStepContext

{
    PKPaymentPass *_paymentPass;
    NSArray *_verificationChannels;
}

@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) NSArray *verificationChannels;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
