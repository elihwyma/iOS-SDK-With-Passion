/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NPKPaymentProvisioningFlowControllerRequestContext, NSString;

@interface NPKPaymentProvisioningFlowStepContext : NSObject

{
    _Bool _allowsAddLater;
    NPKPaymentProvisioningFlowControllerRequestContext *_requestContext;
    NSString *_stepIdentifier;
    NSString *_backStepIdentifier;
}

@property (readonly) NPKPaymentProvisioningFlowControllerRequestContext *requestContext;
@property (retain, nonatomic) NSString *stepIdentifier;
@property (retain, nonatomic) NSString *backStepIdentifier;
@property (nonatomic) _Bool allowsAddLater;

- (id)initWithRequestContext:(id)arg1;
- (id)chooseFlowStepContext;
- (id)chooseProductStepContext;
- (id)chooseCredentialsStepContext;
- (id)secondaryManualEntryStepContext;
- (id)manualEntryStepContext;
- (id)verificationChannelsStepContext;
- (id)verificationFieldsStepContext;
- (id)localDeviceManualEntryStepContext;
- (id)welcomeStepContext;
- (id)digitalIssuanceAmountStepContext;
- (id)digitalIssuancePaymentStepContext;
- (id)moreInformationStepContext;
- (id)readerModeEntryStepContext;
- (id)readerModeIngestionStepContext;
- (id)localDeviceManualEntryProgressStepContext;
- (id)productDisambiguationStepContext;
- (id)termsAndConditionsStepContext;
- (id)provisioningProgressStepContext;
- (id)provisioningResultStepContext;
- (id)_baseFlowStepDescription;
- (id)verificationCodeStepContext;
- (id)getIssuerApplicationAddRequestStepContext;

@end
