/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSString;

@interface NPKPaymentProvisioningFlowControllerProvisioningProgressStepContext : NPKPaymentProvisioningFlowStepContext

{
    NSString *_localizedProgressDescription;
}

@property (retain, nonatomic) NSString *localizedProgressDescription;

- (id)initWithRequestContext:(id)arg1;

@end
