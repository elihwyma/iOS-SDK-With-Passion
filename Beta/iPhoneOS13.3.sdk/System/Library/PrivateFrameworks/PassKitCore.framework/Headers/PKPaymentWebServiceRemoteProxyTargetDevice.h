/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, NSXPCConnection, PKPaymentWebService;

@protocol OS_dispatch_queue, PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPaymentWebServiceRemoteProxyTargetDevice : NSObject

{
    NSObject<OS_dispatch_queue> *_handlerQueue;
    PKPaymentWebService *_webService;
    id <PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;
    NSXPCConnection *_connection;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)getContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getConfigurationDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)getRegistrationDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)getTrustedDeviceEnrollmentInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getProvisioningDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteApplicationWithAID:(id)arg1;
- (void)didRegisterWithRegionMap:(id)arg1 primaryRegionTopic:(id)arg2;
- (void)paymentSupportedInCurrentRegion:(CDUnknownBlockType)arg1;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningDidEnd;
- (void)setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg1;
- (void)setNewAuthRandom:(CDUnknownBlockType)arg1;
- (void)hasPassesOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)passesOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validateAddPreconditionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadAllPaymentPasses;
- (void)claimSecureElementForCurrentUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)secureElementOwnershipStateForCurrentUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)validateTransferPreconditionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)handlePotentialExpressPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addPassData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removePass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)supportsPeerPaymentRegistrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)appleAccountInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDefaultPaymentPassUniqueIdentifier:(id)arg1;
- (void)notePasscodeUpgradeFlowWillBeginWithCompletion:(CDUnknownBlockType)arg1;
- (void)notePasscodeUpgradeFlowDidEnd;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(_Bool)arg1;
- (void)endRequiringUpgradedPasscodeIfNecessary;
- (void)updateAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)supportsAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)supportedFeatureIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)supportedFeatureIdentifiersForAccountProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)updatedAccountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)featureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)deviceMetadataWithFields:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applePayTrustKeyForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;
- (void)storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2;
- (void)passOwnershipTokenWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)archiveContext:(id)arg1;
- (void)archiveBackgroundContext:(id)arg1;
- (void)invalidateRemoteProxyTargetDevice;
- (id)initWithWebService:(id)arg1 connection:(id)arg2;

@end
