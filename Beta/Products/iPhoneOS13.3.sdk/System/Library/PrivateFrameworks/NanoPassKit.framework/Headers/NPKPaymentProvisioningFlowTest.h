/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentProvisioningFlowTest : NSObject <NPKPaymentProvisioningFlowControllerDelegate> {
    NPKPaymentProvisioningFlowController * _flowController;
    PKAddPaymentPassRequestConfiguration * _testConfiguration;
    NPKTestAddPaymentPassRequestContext * _testContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NPKPaymentProvisioningFlowController *flowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKAddPaymentPassRequestConfiguration *testConfiguration;
@property (nonatomic, retain) NPKTestAddPaymentPassRequestContext *testContext;

- (void).cxx_destruct;
- (id)_collectUserInputWithDescription:(id)arg1 defaultValue:(id)arg2;
- (void)_handleChooseCredentialsStepWithContext:(id)arg1;
- (void)_handleChooseFlowStepWithContext:(id)arg1;
- (void)_handleChooseProductStepWithContext:(id)arg1;
- (void)_handleGetIssuerApplicationAddRequestStepWithContext:(id)arg1;
- (void)_handleIssuerVerificationChannelsStepWithContext:(id)arg1;
- (void)_handleIssuerVerificationCodeStepWithContext:(id)arg1;
- (void)_handleIssuerVerificationFieldsStepWithContext:(id)arg1;
- (void)_handleManualEntryStepWithContext:(id)arg1;
- (void)_handleMoreInformationStepWithContext:(id)arg1;
- (void)_handlePreconditionsStep;
- (void)_handleProductDisambiguationStepWithContext:(id)arg1;
- (void)_handleProvisioningProgressStepWithContext:(id)arg1;
- (void)_handleProvisioningResultStepWithContext:(id)arg1;
- (void)_handleTermsAndConditionsStepWithContext:(id)arg1;
- (void)_handleWelcomeStepWithContext:(id)arg1;
- (id)_haveUserChooseBetweenOptions:(id)arg1 prompt:(id)arg2;
- (id)_requestContext;
- (id)flowController;
- (id)init;
- (void)paymentProvisioningFlowController:(id)arg1 didEncounterError:(id)arg2 requestContext:(id)arg3;
- (void)paymentProvisioningFlowController:(id)arg1 didTransitionFromStep:(int)arg2 toStep:(int)arg3 withContext:(id)arg4;
- (void)setFlowController:(id)arg1;
- (void)setTestConfiguration:(id)arg1;
- (void)setTestContext:(id)arg1;
- (void)startInAppProvisioningTest;
- (void)startProvisioningTest;
- (void)startVerificationTestForPass:(id)arg1;
- (id)testConfiguration;
- (id)testContext;

@end