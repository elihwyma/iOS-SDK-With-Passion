/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray;

@interface NPKPaymentProvisioningFlowControllerWelcomeStepContext : NPKPaymentProvisioningFlowStepContext

{
    NSArray *_heroImages;
}

@property (retain, nonatomic) NSArray *heroImages;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
