/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerDigitalIssuanceAmountStepContext : NPKPaymentProvisioningFlowStepContext

{
    _Bool _allowsReaderModeEntry;
    PKPaymentSetupProduct *_product;
}

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (nonatomic) _Bool allowsReaderModeEntry;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
