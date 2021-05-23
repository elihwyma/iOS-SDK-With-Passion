/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDModifyRecordsOperation, CKDPCSCache, CKDPCSManager, CKDProgressTracker, CKDRecordPCSData, CKDSharePCSData, CKDZonePCSData, CKRecord, CKRecordID, NSDictionary, NSError, NSMutableDictionary, NSString;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDModifyRecordHandler : NSObject

{
    _Bool _isDelete;
    _Bool _saveCompletionBlockCalled;
    _Bool _needsRefetch;
    _Bool _didAttemptDugongKeyRoll;
    _Bool _didRollRecordPCSMasterKey;
    int _saveAttempts;
    CKDModifyRecordsOperation *_operation;
    CKRecord *_record;
    NSObject<OS_dispatch_group> *_pcsGroup;
    CKDRecordPCSData *_recordPCSData;
    CKDSharePCSData *_sharePCSData;
    CKRecord *_serverRecord;
    NSString *_etag;
    unsigned long long _state;
    NSError *_error;
    NSMutableDictionary *_rereferencedAssetArrayByFieldname;
    CKDProgressTracker *_progressTracker;
    long long _batchRank;
    CKDZonePCSData *_sharedZonePCSData;
    NSDictionary *_assetUUIDToExpectedProperties;
    CKRecordID *_recordID;
}

@property (retain, nonatomic) CKRecord *record;
@property (retain, nonatomic) CKRecordID *recordID;
@property (nonatomic) _Bool isDelete;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *pcsGroup;
@property (nonatomic, readonly) CKDPCSManager *pcsManager;
@property (nonatomic, readonly) CKDPCSCache *pcsCache;
@property (nonatomic) _Bool didRollRecordPCSMasterKey;
@property (weak, nonatomic) CKDModifyRecordsOperation *operation;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;
@property (retain, nonatomic) CKRecord *serverRecord;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableDictionary *rereferencedAssetArrayByFieldname;
@property (retain, nonatomic) CKDProgressTracker *progressTracker;
@property (nonatomic) long long batchRank;
@property (nonatomic) int saveAttempts;
@property (nonatomic) _Bool saveCompletionBlockCalled;
@property (nonatomic, readonly) _Bool isShare;
@property (nonatomic) _Bool needsRefetch;
@property (retain, nonatomic) CKDZonePCSData *sharedZonePCSData;
@property (nonatomic) _Bool didAttemptDugongKeyRoll;
@property (copy, nonatomic) NSDictionary *assetUUIDToExpectedProperties;

+ (id)_stringForState:(unsigned long long)arg1;
+ (id)modifyHandlerWithRecord:(id)arg1 operation:(id)arg2;
+ (id)modifyHandlerForDeleteWithRecordID:(id)arg1 operation:(id)arg2;

- (id)description;
- (id)_initWithRecord:(id)arg1 operation:(id)arg2;
- (id)_initForDeleteWithRecordID:(id)arg1 operation:(id)arg2;
- (void)prepareForSave;
- (void)clearProtectionDataForRecord;
- (void)savePCSDataToCache;
- (id)sideEffectRecordIDs;
- (void)noteSideEffectRecordPendingModify:(id)arg1;
- (void)noteSideEffectRecordAbsent:(id)arg1;
- (void)noteSideEffectRecordPendingDelete:(id)arg1;
- (void)fetchSharePCSData;
- (id)_initCommonWithOperation:(id)arg1;
- (void)_loadPCSData;
- (void)_fetchPCSData;
- (void)_unwrapRecordPCSForZone;
- (void)_unwrapRecordPCSWithShareID:(id)arg1;
- (void)_unwrapRecordPCSForParent;
- (void)_addShareToPCSData:(id)arg1 withError:(id)arg2;
- (_Bool)_useZoneishPCS;
- (void)_reallyFetchPCSDataWithOptions:(unsigned long long)arg1;
- (void)_createAndSavePCS;
- (void)_fetchSharePCSForID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchParentPCSForData:(id)arg1 withError:(id)arg2;
- (id)_addParentPCS:(id)arg1 toRecordPCS:(id)arg2;
- (void)_handlePCSData:(id)arg1 withError:(id)arg2;
- (void)_continueCreateAndSavePCSWithZonePCS:(id)arg1 sharePCS:(id)arg2;
- (_Bool)_canSetPreviousProtectionEtag;
- (void)_fetchExistingPCSForProvidedPCSData:(id)arg1;
- (void)_fetchParentPCSForID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_clearRecordProtectionDataForRecord;
- (_Bool)_createPublicSharingKeyWithError:(id *)arg1;
- (_Bool)_prepareAsset:(id)arg1 recordKey:(id)arg2 record:(id)arg3 error:(id *)arg4;
- (void)prepareStreamingAsset:(id)arg1 forUploadWithRecord:(id)arg2;
- (_Bool)_wrapEncryptedDataOnRecord:(id)arg1;
- (_Bool)_wrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 forField:(id)arg3 recordID:(id)arg4;
- (void)_pretendToWrapEncryptedDataForRecordValueStore:(id)arg1;
- (_Bool)_wrapEncryptedDataForRecordValueStore:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;
- (void)fetchRecordPCSData;
- (id)assetsWhichNeedRecordFetch;
- (id)prepareAssetsForUploadWithError:(id *)arg1;

@end
