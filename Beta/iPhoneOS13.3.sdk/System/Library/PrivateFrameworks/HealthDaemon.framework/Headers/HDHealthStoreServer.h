/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDAuthorizationServer, HDCloudSyncServer, HDDaemon, HDHealthServicesServer, HDHealthStoreClient, HDMedicalIDServer, HDNanoSyncServer, HDNotificationServer, HDProfile, HDProfileServer, HDQueryControlServer, HDStaticSyncServer, HDUtilityServer, HDWorkoutServer, HKHealthStoreConfiguration, NSMutableDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDHealthStoreServer : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableDictionary *_deepBreathingSessionServersByUUID;
    NSObject<OS_dispatch_source> *_clientTransactionTimer;
    NSString *_clientSourceVersion;
    NSMutableDictionary *_taskServerEndpointsByUUID;
    NSMutableDictionary *_taskServerObserversByUUID;
    HDDaemon *_daemon;
    HDProfile *_profile;
    HKHealthStoreConfiguration *_configuration;
    HDHealthStoreClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    HDAuthorizationServer *_authorizationServer;
    NSMutableSet *_subservers;
    HDCloudSyncServer *_cloudSyncServer;
    HDHealthServicesServer *_healthServicesServer;
    HDMedicalIDServer *_medicalIDServer;
    HDNanoSyncServer *_nanoSyncServer;
    HDNotificationServer *_notificationServer;
    HDProfileServer *_profileServer;
    HDQueryControlServer *_queryControlServer;
    HDStaticSyncServer *_staticSyncServer;
    HDUtilityServer *_utilityServer;
    HDWorkoutServer *_workoutServer;
}

@property (copy, nonatomic, readonly) NSString *clientDebuggingIdentifier;
@property (retain, nonatomic) NSMutableSet *subservers;
@property (retain, nonatomic) HDCloudSyncServer *cloudSyncServer;
@property (retain, nonatomic) HDHealthServicesServer *healthServicesServer;
@property (retain, nonatomic) HDMedicalIDServer *medicalIDServer;
@property (retain, nonatomic) HDNanoSyncServer *nanoSyncServer;
@property (retain, nonatomic) HDNotificationServer *notificationServer;
@property (retain, nonatomic) HDProfileServer *profileServer;
@property (retain, nonatomic) HDQueryControlServer *queryControlServer;
@property (retain, nonatomic) HDStaticSyncServer *staticSyncServer;
@property (retain, nonatomic) HDUtilityServer *utilityServer;
@property (retain, nonatomic) HDWorkoutServer *workoutServer;
@property (weak, nonatomic, readonly) HDDaemon *daemon;
@property (nonatomic, readonly) HDProfile *profile;
@property (copy, nonatomic, readonly) HKHealthStoreConfiguration *configuration;
@property (nonatomic, readonly) HDHealthStoreClient *client;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) HDAuthorizationServer *authorizationServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)start;
- (void)remote_proxyForHealthServicesServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForMedicalIDServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForNanoSyncServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForNotificationServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForCloudSyncServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForStaticSyncServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForQueryControlServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForUtilityServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForWorkoutServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForProfileServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchPluginServiceEndpointWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_createTaskServerEndpointForIdentifier:(id)arg1 pluginURL:(id)arg2 taskUUID:(id)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)remote_hasSampleWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_hasSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_addSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_allSourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_orderedSourcesForObjectType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_fetchDevicesMatchingProperty:(id)arg1 values:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_deleteSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_deleteObjectsWithUUIDs:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_deleteClientSourceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_remote_associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_authorizationStatusForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_getRequestStatusForAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_handleAuthorizationForExtensionWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_retrieveAllAuthorizationRecordsForDocumentType:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_allAuthorizationRecordsForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_allSourcesRequestingAuthorizationForTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_allObjectAuthorizationRecordsForSampleWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)remote_setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 prompt:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)remote_resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)remote_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)remote_setObjectAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_resetObjectAuthorizationStatusForObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_resetObjectAuthorizationStatusForBundleIdentifier:(id)arg1 objectType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_saveDataObjects:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)remote_saveDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_deleteDataObjects:(id)arg1 options:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)remote_deleteDataObjectsOfType:(id)arg1 matchingFilter:(id)arg2 options:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_fetchCharacteristicWithDataType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)remote_setCharacteristic:(id)arg1 forDataType:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)remote_getIsFeatureSetAvailable:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)remote_closeTransactionWithDataType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_fetchUnitPreferencesForTypes:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)remote_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)remote_clientWillSuspendWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_clientResumedWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_getHealthLiteValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchServerURLForAssetType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_setServerURL:(id)arg1 forAssetType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_getHealthDirectorySizeInBytesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_obliterateHealthDataWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_performMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_containerAppExtensionEntitlementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchDisplayNameWithCompletion:(CDUnknownBlockType)arg1;
- (void)_remote_attachDeepBreathingSessionServerWithClient:(id)arg1 sessionConfiguration:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)remote_fetchDaemonPreferenceForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_setDaemonPreferenceValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)diagnosticDescription;
- (id)sampleSavingDelegate;
- (void)_saveDataObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersion:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)addObserver:(id)arg1 forTaskServerUUID:(id)arg2;
- (void)conceptIndexManagerDidBecomeQuiescent:(id)arg1 samplesProcessedCount:(long long)arg2;
- (void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1;
- (void)unitPreferencesManagerDidUpdateUnitPreferences:(id)arg1;
- (void)performIfAuthorizedToDeleteObjectTypes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)performIfAuthorizedToSaveObjectTypes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)saveSamples:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithClient:(id)arg1 profile:(id)arg2 configuration:(id)arg3 connectionQueue:(id)arg4;
- (void)removeObserver:(id)arg1 forTaskServerUUID:(id)arg2;
- (void)removeTaskServerObserver:(id)arg1;
- (CDUnknownBlockType)objectAuthorizationPromptHandler;
- (void)_serverActivityChanged;
- (void)taskServerDidFinishInitialization:(id)arg1;
- (void)taskServerDidFailToInitializeForUUID:(id)arg1;
- (void)taskServerDidInvalidate:(id)arg1;
- (id)taskServerWithUUID:(id)arg1;
- (void)_queue_deactivateDeepBreathingSessionServerWithUUID:(id)arg1;
- (void)_requireEntitlement:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_fetchSubserverWithRequiredEntitlement:(id)arg1 subserverHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_clientHasPrivateHealthKitEntitlementWithError:(id *)arg1;
- (_Bool)_clientHasUtilityEntitlementWithError:(id *)arg1;
- (id)clientSourceWithError:(id *)arg1;
- (void)_openAppForAuthorizationForSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_authorizationPromptHandler;
- (id)_clientRemoteObjectProxy;
- (_Bool)_queue_insertObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 shouldJournal:(_Bool)arg4 error:(id *)arg5;
- (id)_objectsToInsertWithObjects:(id)arg1 error:(id *)arg2;
- (void)_saveValidatedDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_performIfAuthorizedToSaveObjects:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (_Bool)_insertedObjects:(id)arg1 containsQuantitySampleWithType:(id)arg2;
- (id)_queue_objectsByProvenanceForInsertion:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 error:(id *)arg4;
- (id)_clientSourceVersion;
- (CDUnknownBlockType)_permissionBlockForRestrictedSourceEntities:(id)arg1;
- (void)_performIfAuthorizedToDeleteObjects:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_requirePrivateHealthKitEntitlementUsingBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_performIfAuthorizedToReadTypes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_cancelActiveClientTransaction;
- (void)_holdActiveClientTransactionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_serverActivityChanged;
- (_Bool)_queue_isServerActive;
- (void)_queue_cancelActiveClientTransaction;
- (void)_queue_holdActiveClientTransactionWithCompletion:(CDUnknownBlockType)arg1;
- (id)_getHealthRecordsPlugin;
- (void)deepBreathingServerDidDeactivate:(id)arg1;

@end
