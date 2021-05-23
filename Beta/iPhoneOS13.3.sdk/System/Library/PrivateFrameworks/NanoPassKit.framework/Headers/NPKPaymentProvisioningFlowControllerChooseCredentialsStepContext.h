/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray, NSDictionary, PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerChooseCredentialsStepContext : NPKPaymentProvisioningFlowStepContext

{
    _Bool _allowsManualEntry;
    NSDictionary *_flowIdentifierToCredential;
    NSArray *_flowIdentifiers;
    NSArray *_credentials;
    PKPaymentSetupProduct *_product;
}

@property (retain, nonatomic) NSDictionary *flowIdentifierToCredential;
@property (retain, nonatomic) NSArray *flowIdentifiers;
@property (copy, nonatomic) NSArray *credentials;
@property (nonatomic) _Bool allowsManualEntry;
@property (retain, nonatomic) PKPaymentSetupProduct *product;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
