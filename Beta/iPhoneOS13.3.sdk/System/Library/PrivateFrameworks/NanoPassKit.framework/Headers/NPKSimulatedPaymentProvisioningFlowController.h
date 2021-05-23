/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowController.h>

@interface NPKSimulatedPaymentProvisioningFlowController : NPKPaymentProvisioningFlowController

+ (id)_passWithDescription:(id)arg1 credentialType:(long long)arg2;
+ (id)_broadwayCredential;
+ (id)_easyProvisioningCredentials;

- (void)_performTerms:(id)arg1;
- (void)startProvisioningFlow:(id)arg1;
- (void)acknowledgeWelcome:(id)arg1;
- (void)chooseFlowForPickerItem:(id)arg1 requestContext:(id)arg2;
- (void)handleManualEntryFields:(id)arg1 credential:(id)arg2 requestContext:(id)arg3;
- (void)_performEligibility:(id)arg1;
- (void)_startProvisioningForCredential:(id)arg1 requestContext:(id)arg2;
- (void)_requestRequirements:(id)arg1;
- (void)_performProvision:(id)arg1;

@end
