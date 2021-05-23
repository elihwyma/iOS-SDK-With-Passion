/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@protocol PDPaymentServiceExportedInterface <Swift>

- (unsigned short)noteAccountDeletedWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)enforceUpgradedPasscodePolicyWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)featureApplicationsForProvisioningWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)performDeviceCheckInWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)storePassOwnershipToken:withIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)passOwnershipTokenWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)performProductActionRequest:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)initializeSecureElement: /* Error: Ran out of types for this method. */;
- (unsigned short)conflictingExpressPassIdentifiersForPassInformation:withReferenceExpressState:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)conflictingExpressPassIdentifiersForPassInformation:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)productsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)recomputeCategoryVisualizationMangitudesForPassUniqueID:style: /* Error: Ran out of types for this method. */;
- (unsigned short)disbursementVoucherWithDisbursementSource:disbursementTarget:bundleIdentifier:teamIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)insertOrUpdatePaymentTransaction:forPassUniqueIdentifier:paymentApplication:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeMapsDataForTransactionWithIdentifier:forPassUniqueIdentifier:issueReportIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)transactionsForPassWithUniqueIdentifier:withTransactionSource:withBackingData:startDate:endDate:limit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)transactionsForPassWithUniqueIdentifier:withTransactionSource:withBackingData:startDate:endDate:orderedByDate:limit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)transactionsForPaymentPassWithUniqueIdentifier:withTransactionSource:withBackingData:limit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)transactionCountByPeriodForPassWithUniqueIdentifier:withTransactionSource:withBackingData:calendar:unit:includePurchaseTotal:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)cashbackByPeriodFromPassUniqueIdentifier:withStartDate:endDate:calendar:calendarUnit:type:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)transactionsForPaymentPassWithUniqueIdentifier:withPeerPaymentCounterpartHandle:withTransactionSource:withBackingData:limit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)transactionsForPaymentPassWithUniqueIdentifier:withMapsIdentifier:withTransactionSource:withBackingData:limit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)transactionsForPaymentPassWithUniqueIdentifier:matchingMerchant:withTransactionSource:withBackingData:limit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)transactionsForPaymentPassWithuniqueIdentifier:withMerchantCategory:withTransactionSource:withBackingData:startDate:endDate:limit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)transactionsForPaymentPassWithUniqueIdentifier:withTransactionType:withTransactionSource:withBackingData:startDate:endDate:limit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)approvedTransactionsForPassWithUniqueIdentifier:withTransactionSource:withBackingData:startDate:endDate:limit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)pendingTransactionsForPassWithUniqueIdentifier:withTransactionSource:withBackingData:startDate:endDate:limit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)transactionsWithTransactionSource:withBackingData:limit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)transactionWithTransactionIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)transactionWithServiceIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)transactionWithReferenceIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)installmentTransactionsForInstallmentPlanIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)installmentPlansWithTransactionReferenceIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)installmentPlanTransactionsForPassUniqueIdentifier:accountIdentifier:withRedemptionType:startDate:endDate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)passUniqueIdentifierForTransactionWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)passUniqueIdentifierForTransactionWithServiceIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)mapsMerchantsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)initializeSecureElementIfNecessaryWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)expressPassInformationWithPassUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)expressPassesInformationWithCardType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)expressPassesInformationWithAutomaticSelectionTechnologyType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)expressPassesInformationWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)expressPassInformationForMode:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setExpressWithPassInformation:credential:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeExpressPassesWithCardType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeExpressPassWithUniqueIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadAllPaymentPassesWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setDefaultPaymentPassUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)setSharedPaymentWebServiceContext:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)sharedPaymentWebServiceContextWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requiresUpgradedPasscodeWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultPaymentPassUniqueIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)featureApplicationsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)featureApplicationWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)submitApplyRequest:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)submitDocumentRequest:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)submitTermsRequest:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)submitDeleteRequest:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)submitTransactionAnswerForTransaction:questionType:answer:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)transactionsRequiringReviewForAccountWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)categoryVisualizationMagnitudesForPassUniqueID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setDeviceCheckInContextBuildVersion:outstandingAction:forRegion: /* Error: Ran out of types for this method. */;

@end
