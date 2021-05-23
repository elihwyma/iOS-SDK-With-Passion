/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowControllerManualEntryStepContext.h>

@class PKPaymentCredential;

@interface NPKPaymentProvisioningFlowControllerSecondaryManualEntryStepContext : NPKPaymentProvisioningFlowControllerManualEntryStepContext

{
    _Bool _allowsAddingDifferentCard;
    PKPaymentCredential *_credential;
}

@property (retain, nonatomic) PKPaymentCredential *credential;
@property (nonatomic) _Bool allowsAddingDifferentCard;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
