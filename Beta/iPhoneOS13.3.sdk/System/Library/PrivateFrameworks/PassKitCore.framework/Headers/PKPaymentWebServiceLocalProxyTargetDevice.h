/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceLocalProxyTargetDevice : NSObject

{
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSXPCConnection *_connection;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)context;
- (id)_proxy;
- (id)initWithConnection:(id)arg1;
- (id)deviceName;
- (id)deviceClass;
- (void)_invalidateConnection;
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
- (void)archiveContext:(id)arg1;
- (void)archiveBackgroundContext:(id)arg1;
- (id)_proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_synchronousProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)contextWithCompletion:(CDUnknownBlockType)arg1;
- (id)_synchronousProxy;
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
- (id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1;
- (_Bool)paymentWebServiceSupportsAccounts:(id)arg1;
- (id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg1;
- (id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 deviceMetadataWithFields:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 updateAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 setDefaultPaymentPassUniqueIdentifier:(id)arg2;
- (void)paymentWebService:(id)arg1 storePassOwnershipToken:(id)arg2 withIdentifier:(id)arg3;
- (void)paymentWebService:(id)arg1 passOwnershipTokenWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;

@end
