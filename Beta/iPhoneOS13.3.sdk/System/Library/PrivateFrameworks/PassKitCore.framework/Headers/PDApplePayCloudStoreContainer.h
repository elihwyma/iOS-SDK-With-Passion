/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PDCloudStoreContainer.h>

@class NSMutableSet, NSString, PDAccountManager, PDPaymentWebServiceCoordinator, PKPaymentTransactionProcessor, PKPeerPaymentAccount;

@interface PDApplePayCloudStoreContainer : PDCloudStoreContainer

{
    struct os_unfair_lock_s _fetchLock;
    _Bool _proactiveFetchInProgress;
    NSMutableSet *_fetchingTransactionsForUniqueIDs;
    PKPaymentTransactionProcessor *_transactionProcessor;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;
    PDAccountManager *_accountManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_handlePeerPaymentAccountChanged:(id)arg1;
- (void)invalidateCloudStoreIfPossibleWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2;
- (id)_strippedRecordName:(id)arg1;
- (id)allRecordNamesAssociatedWithRecordName:(id)arg1 inZone:(id)arg2;
- (id)_cloudStoreSpecificKeysForItem:(id)arg1 paymentPass:(id)arg2;
- (void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 operationGroupNameSuffix:(id)arg3 retryCount:(unsigned long long)arg4 shouldRetry:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)canSyncTransactionToCloudKit:(id)arg1 passUniqueIdentifier:(id)arg2;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (_Bool)_isTransactionItemFromRecordType:(id)arg1;
- (id)_insertOrUpdatePaymentTransaction:(id)arg1 withOriginDeviceID:(id)arg2 forPassUniqueIdentifier:(id)arg3 paymentApplication:(id)arg4 withInsertionMode:(unsigned long long)arg5 performTruncation:(_Bool)arg6;
- (_Bool)_isAccountEventFromRecordType:(id)arg1;
- (void)deleteLocalDataFromDeletedRecords:(id)arg1;
- (id)_serviceIdentfierToRecordDictionaryFromArray:(id)arg1;
- (id)_parseTransactionRecords:(id)arg1 counterpartRecords:(id)arg2 request:(id)arg3 updateReasons:(unsigned long long)arg4;
- (void)_fetchMissingTransactionRecordsFromModifiedRecords:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_accountEventRecordsFromArray:(id)arg1;
- (void)_fetchAndParseAccountEventRecordsForRecords:(id)arg1 request:(id)arg2 updateReasons:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveCachedContainerValues;
- (void)readCachedContainerValues;
- (void)invalidateServerChangeTokens;
- (_Bool)_shouldFetchTransactionsForPassUniqueIdentifier:(id)arg1;
- (void)_fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 groupName:(id)arg2 groupNameSuffix:(id)arg3 returnRecords:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchTransactionsFailedForPassUniqueIdentifier:(id)arg1;
- (void)_resetFetchTransactionsForPassUniqueIdentifier:(id)arg1;
- (void)canOverrideChangeTokenForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncOriginatingTransactionsToCloudStore;
- (void)uploadTransaction:(id)arg1 forPassWithUniqueIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_recordsFromAccountEvent:(id)arg1;
- (id)_originDeviceID;
- (id)_serviceIdentifierForRecordType:(id)arg1 recordID:(id)arg2;
- (_Bool)_canFormTransactionFromCloudStoreRecord:(id)arg1;
- (id)_passUniqueIdentifierForCloudStoreRecord:(id)arg1;
- (id)_originDeviceIDForCloudStoreRecord:(id)arg1;
- (id)_paymentApplicationForPassUniqueIdentifier:(id)arg1;
- (id)_serviceIdentifierForRecord:(id)arg1;
- (id)_transactionFetchRetries;
- (void)_saveTransactionFetchRetries:(id)arg1;
- (_Bool)_isAccountEventAssociatedObjectFromRecordType:(id)arg1;
- (id)_recordTypeForAssociatedRecordForAccountEvent:(id)arg1;
- (void)_parseAccountEventsFromRecords:(id)arg1 shouldUpdateLocalDatabase:(_Bool)arg2 updateReasons:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)accountManager:(id)arg1 didAddAccount:(id)arg2;
- (void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;
- (id)initWithDataSource:(id)arg1 transactionProcessor:(id)arg2 paymentWebServiceCoordinator:(id)arg3 accountManager:(id)arg4;
- (void)shouldFetchAndStoreCloudDataAtStartupWithCompletion:(CDUnknownBlockType)arg1;
- (id)recordTypeForRecordID:(id)arg1;
- (_Bool)canInitializeContainer;
- (void)cloudStoreAccountChanged:(id)arg1;
- (_Bool)canCoalesceRequest:(id)arg1 withNewRequest:(id)arg2;
- (void)coalesceRequest:(id)arg1 withNewRequest:(id)arg2;
- (_Bool)shouldContinueWithRequest:(id)arg1;
- (void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 request:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestUpdatesForPassUniqueIdentifier:(id)arg1;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canSyncTransactionFromCloudKitForPassUniqueIdentifier:(id)arg1;
- (void)passDidDisappear:(id)arg1;
- (void)generateRandomTransactionForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_recordTypesForAccountEvents;

@end
