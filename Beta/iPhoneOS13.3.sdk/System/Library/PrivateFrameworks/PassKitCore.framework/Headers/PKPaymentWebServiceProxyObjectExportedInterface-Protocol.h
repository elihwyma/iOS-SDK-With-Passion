/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@protocol PKPaymentWebServiceProxyObjectExportedInterface <Swift>

- (unsigned short)getContextWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)queueConnectionToTrustedServiceManagerForPushTopic:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getConfigurationDataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getRegistrationDataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getTrustedDeviceEnrollmentInfoWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)signData:signatureEntanglementMode:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getProvisioningDataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteApplicationWithAID: /* Error: Ran out of types for this method. */;
- (unsigned short)didRegisterWithRegionMap:primaryRegionTopic: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentSupportedInCurrentRegion: /* Error: Ran out of types for this method. */;
- (unsigned short)noteProvisioningUserInterfaceDidAppear;
- (unsigned short)noteProvisioningUserInterfaceDidDisappear;
- (unsigned short)noteProvisioningDidBegin;
- (unsigned short)noteProvisioningDidEnd;
- (unsigned short)setNewAuthRandomIfNecessaryReturningPairingState: /* Error: Ran out of types for this method. */;
- (unsigned short)setNewAuthRandom: /* Error: Ran out of types for this method. */;
- (unsigned short)hasPassesOfType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)passesOfType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)canProvisionPaymentPassWithPrimaryAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)validateAddPreconditionsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadAllPaymentPasses;
- (unsigned short)claimSecureElementForCurrentUserWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)secureElementOwnershipStateForCurrentUserWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)validateTransferPreconditionsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)handlePotentialExpressPass:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)addPassData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removePass:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)supportsPeerPaymentRegistrationWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)renewAppleAccountWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)appleAccountInformationWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setDefaultPaymentPassUniqueIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)notePasscodeUpgradeFlowWillBeginWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)notePasscodeUpgradeFlowDidEnd;
- (unsigned short)enforceUpgradedPasscodePolicyWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy: /* Error: Ran out of types for this method. */;
- (unsigned short)endRequiringUpgradedPasscodeIfNecessary;
- (unsigned short)updateAccountWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)supportsAccountsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)supportedFeatureIdentifiersWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)supportedFeatureIdentifiersForAccountProvisioningWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)updatedAccountsForProvisioningWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)featureApplicationsForProvisioningWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)deviceMetadataWithFields:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)applePayTrustKeyForIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)createApplePayTrustKeyWithRequest:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteApplePayTrustKeyWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)performDeviceCheckInWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)storePassOwnershipToken:withIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)passOwnershipTokenWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)archiveContext: /* Error: Ran out of types for this method. */;
- (unsigned short)archiveBackgroundContext: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateRemoteProxyTargetDevice;

@end
