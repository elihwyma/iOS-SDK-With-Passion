/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/Swift-Protocol.h>

@protocol HDHealthRecordsPluginServerInterface <Swift>

- (unsigned short)remote_fetchAllAccountsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchAccountsForGatewaysWithExternalIDs:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchAccountForSource:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchAccountWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_deleteAccountWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_invalidateCredentialForAccountWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_hasHealthRecordsAccountWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_beginInitialLoginSessionForGatewayWithExternalID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_beginReloginSessionForAccountWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_endLoginSessionWithState:code:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_pruneAuthenticationDataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_replaceAccountWithNewAccountForAccountWithIdentifier:usingCredentialWithPersistentID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_ingestHealthRecordsWithOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_ingestHealthRecordsWithFHIRDocumentHandle:accountIdentifier:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_resetHealthRecordsLastExtractedRowIDWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_getHealthRecordsIngestionFrequencyWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setHealthRecordsIngestionFrequency:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchRawSourceStringForHealthRecord:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchExportedPropertiesForHealthRecord:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchFHIRJSONDocumentWithAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_stringifyExtractionFailureReasonsForRecord:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_displayStringForMedicalCodingSystem:code:version:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_conceptForCodings:preferredSystems:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_performCodingTasks:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_triggerClinicalOptInDataCollectionForReason:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_resetClinicalOptInDataCollectionAnchorsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchClinicalOptInDataCollectionFilePathsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_triggerClinicalContentAnalyticsForReason:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_triggerHealthCloudUploadWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_resetClinicalContentAnalyticsAnchorsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchRemoteSearchResultsPageForQuery:latitude:longitude:from:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_cancelInFlightSearchQueriesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchRemoteProviderWithExternalID:batchID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchRemoteGatewayWithExternalID:batchID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchLogoDataForBrand:scaleKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchLogoDataForFeaturedBrandsAtScaleKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_ingestionStateWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_createStaticAccountWithTitle:subtitle:description:onlyIfNeededForSimulatedGatewayID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_badgeForNewHealthRecordsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_notifyForNewHealthRecordsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_registerAppSourceForClinicalUnlimitedAuthorizationModeConfirmation:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_deregisterAppSourceFromClinicalUnlimitedAuthorizationModeConfirmation:completion: /* Error: Ran out of types for this method. */;

@end
