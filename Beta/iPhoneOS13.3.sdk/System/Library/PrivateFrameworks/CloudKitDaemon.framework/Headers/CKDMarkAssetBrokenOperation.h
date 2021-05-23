/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDFetchRecordZonesOperation, CKDFetchRecordsOperation, CKDMarkAssetBrokenURLRequestWrapperOperation, CKDModifyRecordZonesOperation, CKDModifyRecordsOperation, CKRecord, CKRecordID, CKRecordZone, CKUploadRequestConfiguration, NSError, NSString;

__attribute__((visibility("hidden")))
@interface CKDMarkAssetBrokenOperation : CKDDatabaseOperation

{
    _Bool _touchRepairZone;
    _Bool _bypassPCSEncryptionForTouchRepairZone;
    _Bool _simulateCorruptAsset;
    _Bool _writeRepairRecord;
    CDUnknownBlockType _assetOrPackageMarkedBrokenBlock;
    CKUploadRequestConfiguration *_uploadRequestConfiguration;
    CKRecordID *_recordID;
    NSString *_field;
    long long _listIndex;
    CKDFetchRecordsOperation *_fetchOperation;
    CKDFetchRecordZonesOperation *_zoneFetchOperation;
    CKDModifyRecordZonesOperation *_zoneCreateOperation;
    CKDModifyRecordsOperation *_corruptOperation;
    CKDMarkAssetBrokenURLRequestWrapperOperation *_wrapperOperation;
    CKRecordZone *_repairZone;
    CKRecord *_record;
    unsigned long long _numMarkAssetBrokenFailures;
    NSError *_markAssetBrokenError;
}

@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (nonatomic) _Bool touchRepairZone;
@property (nonatomic) _Bool bypassPCSEncryptionForTouchRepairZone;
@property (nonatomic) _Bool simulateCorruptAsset;
@property (nonatomic) _Bool writeRepairRecord;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *field;
@property (nonatomic) long long listIndex;
@property (retain, nonatomic) CKDFetchRecordsOperation *fetchOperation;
@property (retain, nonatomic) CKDFetchRecordZonesOperation *zoneFetchOperation;
@property (retain, nonatomic) CKDModifyRecordZonesOperation *zoneCreateOperation;
@property (retain, nonatomic) CKDModifyRecordsOperation *corruptOperation;
@property (retain, nonatomic) CKDMarkAssetBrokenURLRequestWrapperOperation *wrapperOperation;
@property (retain, nonatomic) CKRecordZone *repairZone;
@property (retain, nonatomic) CKRecord *record;
@property (nonatomic) unsigned long long numMarkAssetBrokenFailures;
@property (retain, nonatomic) NSError *markAssetBrokenError;
@property (copy, nonatomic) CDUnknownBlockType assetOrPackageMarkedBrokenBlock;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (void)_fetchRecord;
- (void)_touchFetchRepairZone;
- (void)_breakAsset;
- (void)_markAssetBroken;
- (void)_touchCreateRepairZone;
- (id)repairContext;
- (id)checkPreconditions;
- (id)assetOrPackageForFetchedRecord;

@end
