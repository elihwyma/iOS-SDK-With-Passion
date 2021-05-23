/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/Swift-Protocol.h>

@protocol HDHealthStoreServerInterface <Swift>

- (unsigned short)remote_proxyForHealthServicesServerWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_proxyForMedicalIDServerWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_proxyForNanoSyncServerWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_proxyForNotificationServerWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_proxyForCloudSyncServerWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_proxyForStaticSyncServerWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_proxyForQueryControlServerWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_proxyForUtilityServerWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_proxyForWorkoutServerWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_proxyForProfileServerWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchPluginServiceEndpointWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_createTaskServerEndpointForIdentifier:pluginURL:taskUUID:configuration:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_hasSampleWithBundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_hasSourceWithBundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_addSourceWithBundleIdentifier:name:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_allSourcesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_orderedSourcesForObjectType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_updateOrderedSources:forObjectType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchDevicesMatchingProperty:values:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_deleteAllSamplesWithTypes:sourceBundleIdentifier:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_deleteSourceWithBundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_deleteObjectsWithUUIDs:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_deleteClientSourceWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_associateSampleUUIDs:withSampleUUID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_authorizationStatusForType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_getRequestStatusForAuthorizationToShareTypes:readTypes:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_requestAuthorizationToShareTypes:readTypes:shouldPrompt:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_handleAuthorizationForExtensionWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_allAuthorizationRecordsForBundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_retrieveAllAuthorizationRecordsForDocumentType:bundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_allAuthorizationRecordsForType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_allSourcesRequestingAuthorizationForTypes:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_allObjectAuthorizationRecordsForSampleWithUUID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setAuthorizationStatuses:authorizationModes:forBundleIdentifier:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setRequestedAuthorizationForBundleIdentifier:shareTypes:readTypes:prompt:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_resetAuthorizationStatusForBundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_beginAuthorizationDelegateTransactionWithSessionIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_endAuthorizationDelegateTransactionWithSessionIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setObjectAuthorizationStatuses:forBundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_resetObjectAuthorizationStatusForObjects:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_resetObjectAuthorizationStatusForBundleIdentifier:objectType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_saveDataObjects:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_saveDataObjects:transactionIdentifier:final:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_deleteDataObjects:options:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_deleteDataObjectsOfType:matchingFilter:options:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchCharacteristicWithDataType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setCharacteristic:forDataType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_getIsFeatureSetAvailable:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setBackgroundDeliveryFrequency:forDataType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_closeTransactionWithDataType:anchor:ackTime:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchUnitPreferencesForTypes:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setPreferredUnit:forType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_splitTotalCalories:timeInterval:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_clientWillSuspendWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_clientResumedWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setHealthLiteValue:forKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_getHealthLiteValueForKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchServerURLForAssetType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setServerURL:forAssetType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_getHealthDirectorySizeInBytesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_obliterateHealthDataWithOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_performMigrationWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_badgeHealthAppForEmergencyContactsConsolidationWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_suppressActivityAlertsForIdentifier:suppressionReason:timeoutUntilDate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_invalidateActivityAlertSuppressionForIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_containerAppExtensionEntitlementsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchDisplayNameWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_attachDeepBreathingSessionServerWithClient:sessionConfiguration:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchDaemonPreferenceForKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setDaemonPreferenceValue:forKey:completion: /* Error: Ran out of types for this method. */;

@end
