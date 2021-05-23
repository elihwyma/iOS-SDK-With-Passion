/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKObserverSet, HKPluginProxyProvider, NSString;

@interface HKHealthRecordsStore : NSObject

{
    HKPluginProxyProvider *_proxyProvider;
    long long _lastKnownIngestionState;
    HKObserverSet *_ingestionStateChangeObservers;
    HKObserverSet *_accountStateChangeObservers;
}

@property (retain, nonatomic) HKObserverSet *ingestionStateChangeObservers;
@property (retain, nonatomic) HKObserverSet *accountStateChangeObservers;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) long long currentIngestionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)exportedInterface;
- (id)accountWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)deleteAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_actionCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (id)initWithHealthStore:(id)arg1;
- (CDUnknownBlockType)_objectCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (void)_getSynchronousHealthRecordsPluginServerProxyWithHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_fetchHealthRecordsPluginServerProxyWithHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_actionCompletionWithObjectOnClientQueue:(CDUnknownBlockType)arg1;
- (void)ingestHealthRecordsWithFHIRDocumentHandle:(id)arg1 accountIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)displayStringForMedicalCodingSystem:(id)arg1 code:(id)arg2 version:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)clientRemote_updateIngestionState:(long long)arg1;
- (void)clientRemote_accountDidChange:(id)arg1 changeType:(long long)arg2;
- (id)allAccountsWithError:(id *)arg1;
- (void)fetchAllAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAccountsForGateways:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAccountForSource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidateCredentialForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasHealthRecordsAccount;
- (void)beginInitialLoginSessionForGateway:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginReloginSessionForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endLoginSessionWithState:(id)arg1 code:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pruneAuthenticationDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)replaceAccountWithNewAccountForAccountWithIdentifier:(id)arg1 usingCredentialWithPersistentID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)ingestHealthRecordsWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ingestHealthRecordsWithFHIRDocumentHandle:(id)arg1 accountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetHealthRecordsLastExtractedRowIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)getHealthRecordsIngestionFrequencyWithCompletion:(CDUnknownBlockType)arg1;
- (void)setHealthRecordsIngestionFrequency:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRawSourceStringForHealthRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchExportedPropertiesForHealthRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFHIRJSONDocumentWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stringifyExtractionFailureReasonsForRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)displayStringForMedicalCodingSystem:(id)arg1 code:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)conceptForCodings:(id)arg1 preferredSystems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performCodingTasks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)triggerClinicalOptInDataCollectionForReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetClinicalOptInDataCollectionAnchorsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchClinicalOptInDataCollectionFilePathsWithCompletion:(CDUnknownBlockType)arg1;
- (void)triggerClinicalContentAnalyticsForReason:(long long)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)triggerHealthCloudUploadWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetClinicalContentAnalyticsAnchorsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchRemoteSearchResultsPageForQuery:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 from:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)cancelInFlightSearchQueriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchRemoteProviderWithExternalID:(id)arg1 batchID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchRemoteGatewayWithExternalID:(id)arg1 batchID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchLogoDataForBrand:(id)arg1 scaleKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchLogoDataForFeaturedBrandsAtScaleKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addIngestionStateListener:(id)arg1;
- (void)addAccountStateChangeListener:(id)arg1;
- (void)removeAccountStateChangeListener:(id)arg1;
- (void)createStaticAccountWithTitle:(id)arg1 subtitle:(id)arg2 description:(id)arg3 onlyIfNeededForSimulatedGatewayID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)badgeForNewHealthRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)notifyForNewHealthRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerAppSourceForClinicalUnlimitedAuthorizationModeConfirmation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deregisterAppSourceFromClinicalUnlimitedAuthorizationModeConfirmation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_hk_shouldPromptForOptInClinicalDataCollection:(CDUnknownBlockType)arg1;

@end
