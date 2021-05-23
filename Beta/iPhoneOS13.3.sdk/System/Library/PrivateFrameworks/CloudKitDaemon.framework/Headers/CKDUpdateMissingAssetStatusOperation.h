/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDFetchRecordsOperation, CKDModifyRecordsOperation, CKRecord, CKRecordID, NSArray;

__attribute__((visibility("hidden")))
@interface CKDUpdateMissingAssetStatusOperation : CKDDatabaseOperation

{
    _Bool _recovered;
    _Bool _isPackage;
    CKRecordID *_repairRecordID;
    NSArray *_assetSizes;
    NSArray *_assetPutReceipts;
    CKDFetchRecordsOperation *_fetchOperation;
    CKDModifyRecordsOperation *_modifyOperation;
    CKRecord *_record;
}

@property (retain, nonatomic) CKRecordID *repairRecordID;
@property (nonatomic) _Bool recovered;
@property (nonatomic) _Bool isPackage;
@property (retain, nonatomic) NSArray *assetSizes;
@property (retain, nonatomic) NSArray *assetPutReceipts;
@property (retain, nonatomic) CKDFetchRecordsOperation *fetchOperation;
@property (retain, nonatomic) CKDModifyRecordsOperation *modifyOperation;
@property (retain, nonatomic) CKRecord *record;

- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (void)_updateMissingAssetStatus;

@end
