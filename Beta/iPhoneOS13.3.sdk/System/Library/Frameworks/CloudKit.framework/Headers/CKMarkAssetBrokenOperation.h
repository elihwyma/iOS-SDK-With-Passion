/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class CKRecordID, CKUploadRequestConfiguration, NSString;

@interface CKMarkAssetBrokenOperation : CKDatabaseOperation

{
    _Bool _touchRepairZone;
    _Bool _bypassPCSEncryptionForTouchRepairZone;
    _Bool _simulateCorruptAsset;
    _Bool _writeRepairRecord;
    CDUnknownBlockType _markAssetBrokenCompletionBlock;
    CKRecordID *_recordID;
    NSString *_field;
    long long _listIndex;
    CKRecordID *_repairRecordID;
    CKUploadRequestConfiguration *_uploadRequestConfiguration;
}

@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *field;
@property (nonatomic) long long listIndex;
@property (retain, nonatomic) CKRecordID *repairRecordID;
@property (copy, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (copy, nonatomic, readonly) CKUploadRequestConfiguration *resolvedUploadRequestConfiguration;
@property (copy, nonatomic) CDUnknownBlockType markAssetBrokenCompletionBlock;
@property (nonatomic) _Bool touchRepairZone;
@property (nonatomic) _Bool bypassPCSEncryptionForTouchRepairZone;
@property (nonatomic) _Bool simulateCorruptAsset;
@property (nonatomic) _Bool writeRepairRecord;

- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (id)initWithRecordID:(id)arg1 field:(id)arg2;
- (id)initWithRecordID:(id)arg1 field:(id)arg2 listIndex:(long long)arg3;
- (id)initWithNoRecord;

@end
