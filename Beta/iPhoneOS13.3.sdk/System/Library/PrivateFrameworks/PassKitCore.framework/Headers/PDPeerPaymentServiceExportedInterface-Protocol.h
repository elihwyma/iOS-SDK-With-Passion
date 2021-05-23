/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@protocol PDPeerPaymentServiceExportedInterface <Swift>

- (unsigned short)sharedPeerPaymentWebServiceContextWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setSharedPeerPaymentWebServiceContext:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)accountWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateAccountWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAccountWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)registerDeviceWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)registerDeviceWithForceReregister:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterDeviceWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)registrationStatusWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)presentIdentityVerificationFlowWithResponseData:orientation:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)presentRegistrationFlowWithAccount:amount:state:senderAddress:orientation:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)presentPeerPaymentTermsAndConditionsWithTermsURL:termsIdentifier:passUniqueID:orientation:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)noteAccountDeletedWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)receivedPeerPaymentMessageData:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateMessageReceivedDate:forTransactionWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)balanceForPass:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setLastUsedAlternateFundingSourcePassUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)lastUsedAlternateFundingSourcePassUniqueIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadPassIfNecessaryWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateMockAccountBalanceByAddingAmount:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)cloudStoreStatusWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)initalizeCloudStoreIfNecessaryWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)checkTLKsMissingWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)resetApplePayManateeViewWithCompletion: /* Error: Ran out of types for this method. */;

@end
