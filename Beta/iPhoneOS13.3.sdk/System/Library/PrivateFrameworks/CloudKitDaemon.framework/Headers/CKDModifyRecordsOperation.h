/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class C2RequestOptions, CKDDecryptRecordsOperation, CKDProtocolTranslator, CKDRecordCache, NSArray, NSData, NSDictionary, NSMapTable, NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDModifyRecordsOperation : CKDDatabaseOperation

{
    CKDDecryptRecordsOperation *_decryptOperation;
    _Bool _retryPCSFailures;
    _Bool _canSetPreviousProtectionEtag;
    _Bool _trustProtectionData;
    _Bool _shouldModifyRecordsInDatabase;
    _Bool _retriedRecords;
    _Bool _shouldOnlySaveAssetContent;
    _Bool _haveOutstandingHandlers;
    _Bool _atomic;
    _Bool _shouldReportRecordsInFlight;
    _Bool _originatingFromDaemon;
    _Bool _markAsParticipantNeedsNewInvitationToken;
    _Bool _requestNeedsUserPublicKeys;
    int _saveAttempts;
    NSData *_cachedUserBoundaryKeyData;
    CDUnknownBlockType _saveProgressBlock;
    CDUnknownBlockType _saveCompletionBlock;
    CDUnknownBlockType _deleteCompletionBlock;
    CDUnknownBlockType _uploadCompletionBlock;
    CDUnknownBlockType _recordsInFlightBlock;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSDictionary *_pluginFieldsForRecordDeletesByID;
    NSDictionary *_handlersByRecordID;
    NSDictionary *_parentsByRecordID;
    NSMapTable *_handlersByAssetNeedingRecordFetch;
    NSMapTable *_handlersByAsset;
    NSMutableDictionary *_modifyHandlersByZoneID;
    long long _savePolicy;
    NSData *_clientChangeTokenData;
    CKDRecordCache *_cache;
    CKDProtocolTranslator *_translator;
    NSObject<OS_dispatch_queue> *_modifyRecordsQueue;
    NSDictionary *_assetUUIDToExpectedProperties;
    NSDictionary *_packageUUIDToExpectedProperties;
    NSArray *_userPublicKeys;
    C2RequestOptions *_streamingAssetRequestOptions;
}

@property (retain, nonatomic) NSArray *recordsToSave;
@property (retain, nonatomic) NSArray *recordIDsToDelete;
@property (retain, nonatomic) NSDictionary *recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID;
@property (retain, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (retain, nonatomic) NSDictionary *handlersByRecordID;
@property (retain, nonatomic) NSDictionary *parentsByRecordID;
@property (retain, nonatomic) NSMapTable *handlersByAssetNeedingRecordFetch;
@property (retain, nonatomic) NSMapTable *handlersByAsset;
@property (retain, nonatomic) NSMutableDictionary *modifyHandlersByZoneID;
@property (nonatomic) int saveAttempts;
@property (nonatomic) long long savePolicy;
@property (copy, nonatomic) NSData *clientChangeTokenData;
@property (retain, nonatomic) CKDRecordCache *cache;
@property (nonatomic) _Bool retriedRecords;
@property (nonatomic) _Bool shouldOnlySaveAssetContent;
@property (nonatomic) _Bool haveOutstandingHandlers;
@property (nonatomic) _Bool atomic;
@property (retain, nonatomic) CKDProtocolTranslator *translator;
@property (nonatomic) _Bool shouldReportRecordsInFlight;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *modifyRecordsQueue;
@property (nonatomic, readonly) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (nonatomic, readonly) _Bool hasDecryptOperation;
@property (copy, nonatomic) NSData *cachedUserBoundaryKeyData;
@property (retain, nonatomic) NSDictionary *assetUUIDToExpectedProperties;
@property (retain, nonatomic) NSDictionary *packageUUIDToExpectedProperties;
@property (nonatomic) _Bool originatingFromDaemon;
@property (nonatomic) _Bool markAsParticipantNeedsNewInvitationToken;
@property (nonatomic) _Bool requestNeedsUserPublicKeys;
@property (retain, nonatomic) NSArray *userPublicKeys;
@property (copy, nonatomic) C2RequestOptions *streamingAssetRequestOptions;
@property (nonatomic) _Bool retryPCSFailures;
@property (nonatomic) _Bool canSetPreviousProtectionEtag;
@property (nonatomic) _Bool trustProtectionData;
@property (nonatomic) _Bool shouldModifyRecordsInDatabase;
@property (copy, nonatomic) CDUnknownBlockType saveProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType saveCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType deleteCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType uploadCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType recordsInFlightBlock;

+ (long long)isPredominatelyDownload;
+ (_Bool)_claimPackagesInRecord:(id)arg1 error:(id *)arg2;

- (void)main;
- (void)finishWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)analyticsPayload;
- (void)_fetchContainerScopedUserID;
- (void)_prepareForUpload;
- (void)_fetchSharePCSData;
- (void)_performHandlerCallbacks;
- (void)_determineEnvironment;
- (void)_fetchUserPublicKeys;
- (void)_applySideEffects;
- (_Bool)_topoSortRecords;
- (void)_prepareParentPCS;
- (void)_fetchRecordPCSData;
- (void)_fetchAssetRecordsForRereferencing;
- (void)_uploadAssets;
- (void)_markRecordHandlersAsUploaded;
- (_Bool)_prepareRecordsForSave;
- (void)_verifyRecordEncryption;
- (void)_reportRecordsInFlight;
- (void)_continueRecordsModify;
- (_Bool)_hasHandlerInState:(unsigned long long)arg1;
- (void)_fetchShareParticipants;
- (void)deleteCallbackWithMetadata:(id)arg1 error:(id)arg2;
- (void)saveCallbackWithMetadata:(id)arg1 error:(id)arg2;
- (void)callbackWithMetadata:(id)arg1 error:(id)arg2;
- (void)_performCallbacksForNonAtomicZoneHandlers:(id)arg1;
- (void)_performCallbacksForAtomicZoneHandlers:(id)arg1;
- (void)_enumerateHandlersInState:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)_shouldToposortInContainerID:(id)arg1;
- (id)_topoSortRecordsForHandlers:(id)arg1;
- (void)assetArrayByRecordID:(id)arg1 didFetchRecord:(id)arg2 recordID:(id)arg3 error:(id)arg4;
- (void)_didCompleteRecordFetchOperation:(id)arg1 assetArrayByRecordID:(id)arg2;
- (id)_prepareAssetsForUpload;
- (void)_fetchUserBoundaryKey;
- (void)_setBoundaryKeyOnAssetsToUpload:(id)arg1;
- (void)_handleDecryptionFailure:(id)arg1 forRecordID:(id)arg2;
- (void)_reallyHandleRecordSaved:(id)arg1 handler:(id)arg2 etag:(id)arg3 dateStatistics:(id)arg4 responseCode:(id)arg5 keysAssociatedWithETag:(id)arg6 recordForOplockFailure:(id)arg7 decryptedServerRecord:(id)arg8;
- (id)requestedFieldsByRecordIDForRecords:(id)arg1;
- (void)_handleRecordSaved:(id)arg1 handler:(id)arg2 etag:(id)arg3 dateStatistics:(id)arg4 responseCode:(id)arg5 keysAssociatedWithETag:(id)arg6 recordForOplockFailure:(id)arg7 serverRecord:(id)arg8;
- (void)_handleRecordDeleted:(id)arg1 handler:(id)arg2 responseCode:(id)arg3;
- (id)_createModifyRequestWithRecordsToSave:(id)arg1 recordsToDelete:(id)arg2 recordsToDeleteToEtags:(id)arg3 handlersByRecordID:(id)arg4;
- (void)_clearProtectionDataIfNotEntitled;
- (id)_containerIDsNotToTopoSort;

@end
