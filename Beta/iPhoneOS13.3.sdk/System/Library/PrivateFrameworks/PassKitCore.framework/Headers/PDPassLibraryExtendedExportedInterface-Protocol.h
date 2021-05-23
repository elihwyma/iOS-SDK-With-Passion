/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@protocol PDPassLibraryExtendedExportedInterface <Swift>

- (unsigned short)paymentSetupFeaturesForConfiguration:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)openPaymentUIWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)openDigitalIssuanceUIForIdentifier:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)openWalletUIWithRelevantPass: /* Error: Ran out of types for this method. */;
- (unsigned short)presentContactlessInterfaceForDefaultPassFromSource:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)presentContactlessInterfaceForPassWithUniqueIdentifier:fromSource:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPassesWithUniqueIdentifiers:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPassUniqueIdentifiersForFieldProperties:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getImageSetContainerForUniqueID:ofType:displayProfile:suffix:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)removePassesOfType:withDiagnosticReason:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)resetApplePayWithDiagnosticReason:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSettings:forObjectWithUniqueID: /* Error: Ran out of types for this method. */;
- (unsigned short)rescheduleCommutePlanRenewalReminderForPassWithUniqueID: /* Error: Ran out of types for this method. */;
- (unsigned short)updateObjectWithUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)personalizePassWithUniqueIdentifier:contact:personalizationToken:requiredPersonalizationFields:personalizationSource:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)noteObjectSharedWithUniqueID: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyPassUsedWithIdentifier:fromSource: /* Error: Ran out of types for this method. */;
- (unsigned short)noteAccountChangedWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)noteAccountDeletedWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllScheduledActivities;
- (unsigned short)nukeDatabaseAndExit;
- (unsigned short)introduceDatabaseIntegrityProblem;
- (unsigned short)forceImmediateRevocationCheck;
- (unsigned short)shuffleGroups: /* Error: Ran out of types for this method. */;
- (unsigned short)issueWalletUserNotificationWithTitle:message:forPassUniqueIdentifier:customActionRoute: /* Error: Ran out of types for this method. */;
- (unsigned short)pendingUserNotificationsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)sendUserEditedCatalog: /* Error: Ran out of types for this method. */;
- (unsigned short)logDelayExitReasons;
- (unsigned short)recomputeRelevantPassesWithSearchMode: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchHasCandidatePasses: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCurrentRelevantPassInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)getRouteRelevantPassesForLocation:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getDiffForPassUpdateUserNotificationWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)enabledValueAddedServicePassesWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)isRemovingPassesOfType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)isPassbookVisibleWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)spotlightReindexAllPassesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)spotlightReindexPassesWithUniqueIDs:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)spotlightDeleteIndexEntriesForAllPassesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getDataForBundleResources:objectUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)presentPaymentSetupRequest:orientation:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentPassWithAssociatedAccountIdentifier:completion: /* Error: Ran out of types for this method. */;

@end
