/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@protocol PKPaymentWebServiceTargetDeviceProtocol <Swift>

- (unsigned short)deviceName;
- (unsigned short)deviceClass;
- (unsigned short)deviceRegion;
- (unsigned short)deviceVersion;
- (unsigned short)noteProvisioningUserInterfaceDidAppear;
- (unsigned short)noteProvisioningUserInterfaceDidDisappear;
- (unsigned short)noteProvisioningDidBegin;
- (unsigned short)noteProvisioningDidEnd;
- (unsigned short)claimSecureElementForCurrentUserWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)renewAppleAccountWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)secureElementIdentifiers;
- (unsigned short)paymentWebServiceDidUpdateConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentWebService:queueConnectionToTrustedServiceManagerForPushTopic:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentWebService:configurationDataWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentWebService:registrationDataWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)appleAccountInformation;
- (unsigned short)paymentWebService:signData:signatureEntanglementMode:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentWebService:provisioningDataWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentWebService:deleteApplicationWithAID: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentWebService:didRegisterWithRegionMap:primaryRegionTopic: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentWebService:filterVerificationChannels: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentSupportedInCurrentRegionForWebService: /* Error: Ran out of types for this method. */;
- (unsigned short)deviceDescriptionForPaymentWebService: /* Error: Ran out of types for this method. */;
- (unsigned short)bridgedClientInfo;
- (unsigned short)supportsAutomaticPassPresentation;
- (unsigned short)paymentWebService:setNewAuthRandomIfNecessaryReturningPairingState: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentWebService:setNewAuthRandom: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentWebService:hasPassesOfType: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentWebService:canProvisionPaymentPassWithPrimaryAccountIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentWebService:validateAddPreconditionsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentWebService:addPaymentPass:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadAllPaymentPassesForPaymentWebService: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentWebService:validateTransferPreconditionsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentWebService:requestPassUpgrade:pass:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)claimSecureElementForCurrentUser;
- (unsigned short)secureElementOwnershipStateForCurrentUser;

@end
