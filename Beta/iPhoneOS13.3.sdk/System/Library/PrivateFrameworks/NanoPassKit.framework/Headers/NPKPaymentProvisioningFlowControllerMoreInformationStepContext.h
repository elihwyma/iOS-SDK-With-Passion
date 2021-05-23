/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerMoreInformationStepContext : NPKPaymentProvisioningFlowStepContext

{
    NSArray *_moreInfoItems;
    PKPaymentPass *_paymentPass;
}

@property (retain, nonatomic) NSArray *moreInfoItems;
@property (retain, nonatomic) PKPaymentPass *paymentPass;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
