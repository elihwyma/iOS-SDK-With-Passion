/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@protocol PDAccountServiceExportedInterface <Swift>

- (unsigned short)accountWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)noteAccountDeletedWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsForProvisioningWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateAccountsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateAccountWithIdentifier:extended:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)insertEvents:withAccountidentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateScheduledPaymentsWithAccount:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateMockAccountWithAccount:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteEventWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultAccountForFeature:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)noteVirtualCardAutoFilledBySafari:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsWithPassLocallyProvisionedWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)accountWithVirtualCardIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)accountForPassWithUniqueID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAccountWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteLocalAccountWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)performAccountAction:withAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)termsWithIdentifier:accepted:withAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updatePreferences:forAccountWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)preferencesForAccountWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)userInfoForAccountIdentifier:forceFetch:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateUserInfoForAccountIdentifier:contact:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)beginPhysicalCardRequestWithOrder:forAccountWithIdentifier:deviceMetadata:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)completePhysicalCardRequest:withSignature:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)beginPhysicalCardAction:onPhysicalCardWithIdentifier:forAccountWithIdentifier:deviceMetadata:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)completePhysicalCardActionRequest:withSignature:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)activatePhysicalCardWithActivationCode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)inactivatePhysicalCardForFeatureIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)activatePhysicalCardWithIdentifier:activationCode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)scheduleSetupReminderForAccountWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)eventsForAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)eventsForAccountIdentifier:types:startDate:endDate:orderedByDate:limit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteEventsWithAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)lastRedemptionEventToPeerPaymentForAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)creditStatementsForAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)createVirtualCard:forAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)performVirtualCardAction:forVirtualCardIdentifier:forAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateVirtualCardsWithAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)cardCredentialsForVirtualCard:authorization:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchKeychainCredentialForVirtualCardIdentifier:forAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)virtualCardsInKeychainWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)writeVirtualCardToKeychain:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:withStatementIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:withStartDate:endDate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)scheduledPaymentsWithAccountIdentifier:includeFailedRecurringPayments:allowFetchFromServer:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)markUserViewedIntroduction:forInstallmentIdentifiers:accountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)exportTransactionDataForAccountIdentifier:withFileFormat:beginDate:endDate:productTimeZone:completion: /* Error: Ran out of types for this method. */;

@end
