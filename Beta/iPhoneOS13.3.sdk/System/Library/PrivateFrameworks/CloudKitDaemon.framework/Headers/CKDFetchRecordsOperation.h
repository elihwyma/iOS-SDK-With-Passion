/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDDecryptRecordsOperation, CKDRecordCache, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSObject, NSSet;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordsOperation : CKDDatabaseOperation

{
    CKDDecryptRecordsOperation *_decryptOperation;
    _Bool _useCachedEtags;
    _Bool _useRecordCache;
    _Bool _forcePCSDecrypt;
    _Bool _skipDecryption;
    _Bool _shouldFetchAssetContent;
    _Bool _shouldFetchAssetContentInMemory;
    NSArray *_fullRecordsToFetch;
    CDUnknownBlockType _recordFetchProgressBlock;
    CDUnknownBlockType _recordFetchCommandBlock;
    CDUnknownBlockType _recordFetchCompletionBlock;
    NSArray *_recordIDsToFetch;
    NSMutableDictionary *_cachedRecords;
    NSSet *_desiredKeySet;
    NSDictionary *_recordIDsToETags;
    NSDictionary *_recordIDsToVersionETags;
    NSDictionary *_desiredPackageFileIndices;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    NSMutableDictionary *_errorsByRecordID;
    NSMapTable *_downloadTasksByRecordID;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
    NSSet *_assetFieldNamesToPublishURLs;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
    CKDRecordCache *_cache;
    NSMutableArray *_recordIDsToRefetch;
    NSMutableDictionary *_keyOrErrorForHostname;
    NSMutableArray *_shareRecordsToUpdate;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property (retain, nonatomic) NSArray *recordIDsToFetch;
@property (retain, nonatomic) NSMutableDictionary *cachedRecords;
@property (retain, nonatomic) NSSet *desiredKeySet;
@property (retain, nonatomic) NSDictionary *recordIDsToETags;
@property (retain, nonatomic) NSDictionary *recordIDsToVersionETags;
@property (retain, nonatomic) NSDictionary *desiredPackageFileIndices;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup;
@property (retain, nonatomic) NSMutableDictionary *errorsByRecordID;
@property (retain, nonatomic) NSMapTable *downloadTasksByRecordID;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) _Bool shouldFetchAssetContent;
@property (nonatomic) _Bool shouldFetchAssetContentInMemory;
@property (retain, nonatomic) NSSet *assetFieldNamesToPublishURLs;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long URLOptions;
@property (retain, nonatomic) CKDRecordCache *cache;
@property (nonatomic, readonly) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (nonatomic, readonly) _Bool hasRecordDecryptOperation;
@property (retain, nonatomic) NSMutableArray *recordIDsToRefetch;
@property (retain, nonatomic) NSMutableDictionary *keyOrErrorForHostname;
@property (retain, nonatomic) NSMutableArray *shareRecordsToUpdate;
@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID;
@property (nonatomic) _Bool useCachedEtags;
@property (nonatomic) _Bool useRecordCache;
@property (nonatomic) _Bool forcePCSDecrypt;
@property (nonatomic) _Bool skipDecryption;
@property (retain, nonatomic) NSArray *fullRecordsToFetch;
@property (copy, nonatomic) CDUnknownBlockType recordFetchProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType recordFetchCommandBlock;
@property (copy, nonatomic) CDUnknownBlockType recordFetchCompletionBlock;

- (void)main;
- (void)finishWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)_downloadAssets;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)desiredIndexedListKeys;
- (void)fetchRecordsWithIDs:(id)arg1 andFullRecords:(id)arg2;
- (void)_fetchCloudCerts;
- (void)_saveUpdatedShareRecords;
- (void)setError:(id)arg1 forRecordID:(id)arg2;
- (void)_continueHandleFetchedRecord:(id)arg1 recordID:(id)arg2;
- (void)_findSpecialParticipantsOnShare:(id)arg1 identityDelegate:(id)arg2;
- (void)_handleRecordFetch:(id)arg1 recordID:(id)arg2 etagMatched:(_Bool)arg3 responseCode:(id)arg4;
- (id)errorForRecordID:(id)arg1;
- (void)_addDownloadTaskForRecord:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_handleSharePCSPrepForShare:(id)arg1 recordID:(id)arg2;
- (void)_decryptPropertiesIfNeededForRecord:(id)arg1 record:(id)arg2;
- (void)_decryptPropertiesOnRecord:(id)arg1 recordID:(id)arg2;
- (int)_prepareAsset:(id)arg1 record:(id)arg2 recordKey:(id)arg3 assetTransferOptions:(id)arg4;
- (void)_finishAllDownloadTasksWithError:(id)arg1;
- (void)_didDownloadAssetsWithError:(id)arg1;

@end
