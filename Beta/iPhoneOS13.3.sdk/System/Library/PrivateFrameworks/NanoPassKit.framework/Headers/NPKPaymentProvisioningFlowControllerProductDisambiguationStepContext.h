/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray;

@interface NPKPaymentProvisioningFlowControllerProductDisambiguationStepContext : NPKPaymentProvisioningFlowStepContext

{
    NSArray *_products;
}

@property (retain, nonatomic) NSArray *products;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
