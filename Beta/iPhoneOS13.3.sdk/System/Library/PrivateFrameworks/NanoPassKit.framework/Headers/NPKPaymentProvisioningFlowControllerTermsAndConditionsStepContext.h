/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSURL;

@interface NPKPaymentProvisioningFlowControllerTermsAndConditionsStepContext : NPKPaymentProvisioningFlowStepContext

{
    _Bool _allowNonSecureHTTP;
    NSURL *_termsURL;
}

@property (retain, nonatomic) NSURL *termsURL;
@property (nonatomic) _Bool allowNonSecureHTTP;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
