/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@protocol PDPaymentServiceExtendedExportedInterface <Swift>

- (unsigned short)defaultPaymentPassIngestionSpecificIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)startBackgroundVerificationObserverForPass:verificationMethod: /* Error: Ran out of types for this method. */;
- (unsigned short)sanitizeExpressPasses;
- (unsigned short)submitVerificationCode:verificationData:forDPANIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesForPaymentPassWithUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)balancesForPaymentPassWithUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)balanceReminderThresholdForBalanceIdentifier:withPassUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)setBalanceReminder:forBalanceIdentifier:withPassUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)deletePaymentTransactionWithIdentifier:forPassWithUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllTransactionsForPaymentPassWithUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllMessagesForPaymentPassWithUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)archiveMessageWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)insertOrUpdateValueAddedServiceTransaction:forPassUniqueIdentifier:paymentTransaction:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)valueAddedServiceTransactionsForPassWithUniqueIdentifier:limit:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)valueAddedServiceTransactionsForPaymentTransaction:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)valueAddedServiceTransactionWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)setDefaultPaymentApplication:forPassUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultPaymentApplicationForPassUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)setDefaultExpressTransitPassIdentifier:withCredential:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)processTransitTransactionEventWithHistory:transactionDate:forPaymentApplication:withPassUniqueIdentifier:expressTransactionState: /* Error: Ran out of types for this method. */;
- (unsigned short)simulateDefaultExpressTransitPassIdentifier:forExpressMode:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)transitStateWithPassUniqueIdentifier:paymentApplication:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)simulatePaymentPushTopic:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)consistencyCheckWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)scheduleSetupReminders: /* Error: Ran out of types for this method. */;
- (unsigned short)scheduleDeviceCheckInWithStartTimeOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)unscheduleDeviceCheckIn;
- (unsigned short)removeProductsCache;
- (unsigned short)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)passbookUIServiceDidLaunch: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentDeviceFieldPropertiesWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)outstandingExpressTransactionState: /* Error: Ran out of types for this method. */;
- (unsigned short)transactionsAppLaunchTokenForPassWithUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesAppLaunchTokenForPassWithUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)setDefaultExpressFelicaTransitPassIdentifier:withCredential:completion: /* Error: Ran out of types for this method. */;

@end
