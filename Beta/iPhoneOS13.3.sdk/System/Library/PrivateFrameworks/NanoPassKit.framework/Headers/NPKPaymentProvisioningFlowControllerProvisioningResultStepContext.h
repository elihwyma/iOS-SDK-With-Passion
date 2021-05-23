/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSError, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerProvisioningResultStepContext : NPKPaymentProvisioningFlowStepContext

{
    _Bool _cardAdded;
    PKPaymentPass *_provisionedPass;
    NSError *_error;
}

@property (nonatomic) _Bool cardAdded;
@property (retain, nonatomic) PKPaymentPass *provisionedPass;
@property (retain, nonatomic) NSError *error;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
