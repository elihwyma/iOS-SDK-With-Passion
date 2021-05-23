/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NPKPaymentProvisioningFlowController, NPKTestAddPaymentPassRequestContext, NSString, PKAddPaymentPassRequestConfiguration;

@interface NPKPaymentProvisioningFlowTest : NSObject

{
    NPKPaymentProvisioningFlowController *_flowController;
    NPKTestAddPaymentPassRequestContext *_testContext;
    PKAddPaymentPassRequestConfiguration *_testConfiguration;
}

@property (retain, nonatomic) NPKPaymentProvisioningFlowController *flowController;
@property (retain, nonatomic) NPKTestAddPaymentPassRequestContext *testContext;
@property (retain, nonatomic) PKAddPaymentPassRequestConfiguration *testConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_requestContext;
- (void)paymentProvisioningFlowController:(id)arg1 didEncounterError:(id)arg2 requestContext:(id)arg3;
- (void)paymentProvisioningFlowController:(id)arg1 didTransitionFromStep:(int)arg2 toStep:(int)arg3 withContext:(id)arg4;
- (void)startVerificationTestForPass:(id)arg1;
- (void)startInAppProvisioningTest;
- (void)startProvisioningTest;
- (void)_handlePreconditionsStep;
- (void)_handleWelcomeStepWithContext:(id)arg1;
- (void)_handleChooseFlowStepWithContext:(id)arg1;
- (void)_handleChooseProductStepWithContext:(id)arg1;
- (void)_handleChooseCredentialsStepWithContext:(id)arg1;
- (void)_handleManualEntryStepWithContext:(id)arg1;
- (void)_handleProductDisambiguationStepWithContext:(id)arg1;
- (void)_handleTermsAndConditionsStepWithContext:(id)arg1;
- (void)_handleProvisioningProgressStepWithContext:(id)arg1;
- (void)_handleMoreInformationStepWithContext:(id)arg1;
- (void)_handleProvisioningResultStepWithContext:(id)arg1;
- (void)_handleIssuerVerificationChannelsStepWithContext:(id)arg1;
- (void)_handleIssuerVerificationFieldsStepWithContext:(id)arg1;
- (void)_handleIssuerVerificationCodeStepWithContext:(id)arg1;
- (void)_handleGetIssuerApplicationAddRequestStepWithContext:(id)arg1;
- (id)_haveUserChooseBetweenOptions:(id)arg1 prompt:(id)arg2;
- (id)_collectUserInputWithDescription:(id)arg1 defaultValue:(id)arg2;

@end
