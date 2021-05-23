/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray;

@interface NPKPaymentProvisioningFlowControllerChooseFlowStepContext : NPKPaymentProvisioningFlowStepContext

{
    NSArray *_sections;
}

@property (retain, nonatomic) NSArray *sections;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
