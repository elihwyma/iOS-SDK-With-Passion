/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray;

@interface NPKPaymentProvisioningFlowControllerManualEntryStepContext : NPKPaymentProvisioningFlowStepContext

{
    _Bool _cameraFirstProvisioningEnabled;
    NSArray *_setupFields;
}

@property (nonatomic) _Bool cameraFirstProvisioningEnabled;
@property (retain, nonatomic) NSArray *setupFields;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
