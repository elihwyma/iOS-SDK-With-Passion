/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, PKAssertion, PKPassLibrary, PKPassUpgradeController, PKPaymentService, PKSecureElement;

@interface PKPaymentWebServiceTargetDevice : NSObject

{
    PKPassLibrary *_passLibrary;
    PKPaymentService *_paymentService;
    PKSecureElement *_secureElement;
    PKAssertion *_provisioningAssertion;
    _Bool _provisioningAssertionActive;
    PKAssertion *_verificationAssertion;
    _Bool _verificationAssertionActive;
    PKAssertion *_requiringUpgradedPasscodeAssertion;
    _Bool _requiringUpgradedPasscodeAssertionActive;
    PKAssertion *_activePasscodeUpgradeFlowAssertion;
    _Bool _activePasscodeUpgradeFlowAssertionActive;
    PKPassUpgradeController *_passUpgradeController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)localTargetDevice;

- (id)init;
- (void)dealloc;
- (id)deviceName;
- (id)deviceClass;
- (id)deviceRegion;
- (id)deviceVersion;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningDidEnd;
- (void)claimSecureElementForCurrentUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)notePasscodeUpgradeFlowWillBeginWithCompletion:(CDUnknownBlockType)arg1;
- (void)notePasscodeUpgradeFlowDidEnd;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(_Bool)arg1;
- (void)endRequiringUpgradedPasscodeIfNecessary;
- (void)updatedAccountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)featureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)applePayTrustKeyForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;
- (id)secureElementIdentifiers;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 registrationDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (id)appleAccountInformation;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (id)deviceDescriptionForPaymentWebService:(id)arg1;
- (id)bridgedClientInfo;
- (_Bool)supportsAutomaticPassPresentation;
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 setNewAuthRandom:(CDUnknownBlockType)arg2;
- (_Bool)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;
- (_Bool)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 requestPassUpgrade:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)claimSecureElementForCurrentUser;
- (unsigned long long)secureElementOwnershipStateForCurrentUser;
- (void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)trustedDeviceEnrollmentInfoForWebService:(id)arg1;
- (void)signatureForAuthToken:(id)arg1 webService:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)cellularNetworkRegion;
- (void)noteForegroundVerificationObserverActive:(_Bool)arg1;
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
- (unsigned long long)maximumPaymentCards;
- (void)setMaximumPaymentCards:(unsigned long long)arg1;
- (id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)felicaSecureElementIsAvailable;
- (_Bool)secureElementIsAvailable;
- (_Bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (_Bool)supportsCredentialType:(long long)arg1;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1;
- (_Bool)paymentWebServiceSupportsAccounts:(id)arg1;
- (id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg1;
- (id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 deviceMetadataWithFields:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 updateAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 setDefaultPaymentPassUniqueIdentifier:(id)arg2;
- (void)availableProductsWithCompletion:(CDUnknownBlockType)arg1;
- (void)performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 storePassOwnershipToken:(id)arg2 withIdentifier:(id)arg3;
- (void)paymentWebService:(id)arg1 passOwnershipTokenWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;
- (void)_validateCommonPreconditionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_paymentWebService:(id)arg1 pass:(id)arg2 withExpressInfo:(id)arg3 hasDisqualifyingConflicts:(CDUnknownBlockType)arg4;

@end
