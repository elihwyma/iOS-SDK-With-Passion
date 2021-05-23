/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray, NSData;

@interface NPKPaymentProvisioningFlowControllerGetIssuerApplicationAddRequestStepContext : NPKPaymentProvisioningFlowStepContext

{
    NSArray *_certificates;
    NSData *_nonce;
    NSData *_nonceSignature;
}

@property (retain, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSData *nonce;
@property (retain, nonatomic) NSData *nonceSignature;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
