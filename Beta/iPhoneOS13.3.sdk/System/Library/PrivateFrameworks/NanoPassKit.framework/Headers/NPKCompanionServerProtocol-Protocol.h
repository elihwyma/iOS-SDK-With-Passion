/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol NPKCompanionServerProtocol <Swift>

- (MISSING_TYPE *)connect;
- (MISSING_TYPE *)registerDeviceWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)noteForegroundVerificationObserverActive: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)startBackgroundVerificationObserverForPass:verificationMethod: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)transactionsForPaymentPassWithUniqueIdentifier:withTransactionSource:withBackingData:startDate:endDate:orderedByDate:limit:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)balancesForPaymentPassWithUniqueIdentifier:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setBalanceReminder:forBalance:pass:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)transitStateWithPassUniqueIdentifier:paymentApplication:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)provisionPassForAccountIdentifier:makeDefault:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)commutePlanReminderIntervalForCommutePlan:pass:withCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setCommutePlanReminderInterval:forCommutePlan:pass:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)markAllAppletsForDeletionWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)initiateLostModeExitAuthWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)beginProvisioningFromWatchOfferForPaymentPass:withCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)updateSettings:forPassWithUniqueID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)paymentPassesWithPrimaryAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)redownloadAllPaymentPassesWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)handlePeerPaymentTermsAndConditionsRequestFromGizmo;
- (MISSING_TYPE *)handleDeviceUnlockedForPendingProvisioningRequestFromGizmo;
- (MISSING_TYPE *)noteWatchOfferDisplayedForPaymentPassWithUniqueID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)noteProvisioningPreflightCompleteWithSuccess:error:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)paymentPassUniqueIDs: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)paymentPassWithUniqueID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)paymentPassWithDeviceAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)savePaymentPassAtURL:withUniqueID:forPairingID:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)removePaymentPassWithUniqueID:forPairingID:waitForConfirmation:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setDefaultCard:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)defaultCard: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)defaultPaymentApplicationForPassWithUniqueID:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setDefaultPaymentApplication:forPassWithUniqueID:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)initiateConsistencyCheckWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)handlePendingUnpairingWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)handlePendingiCloudSignoutWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setSharedPaymentWebServiceContext:forPairingID:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)sharedPaymentWebServiceContextForPairingID:withCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setSharedPeerPaymentWebServiceContext:forPairingID:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)sharedPeerPaymentWebServiceContextForPairingID:withCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setPeerPaymentAccount:forPairingID:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)peerPaymentAccountForPairingID:withCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deletePaymentTransactionWithIdentifier:passUniqueIdentifier:fromDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)balanceReminderForBalance:pass:withCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)trustedDeviceEnrollmentSignatureWithAccountDSID:sessionData:handler: /* Error: Ran out of types for this method. */;

@end
