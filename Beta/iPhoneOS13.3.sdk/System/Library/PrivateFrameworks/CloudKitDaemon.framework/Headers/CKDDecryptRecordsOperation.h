/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSDictionary, NSMutableArray, NSObject;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDDecryptRecordsOperation : CKDDatabaseOperation

{
    _Bool _forcePCSDecrypt;
    _Bool _started;
    _Bool _markedToFinish;
    NSMutableArray *_outstandingDecryptions;
    NSObject<OS_dispatch_group> *_recordDecryptGroup;
    NSObject<OS_dispatch_queue> *_recordDecryptQueue;
    unsigned long long _maxUnwrapAttempts;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property (retain, nonatomic) NSMutableArray *outstandingDecryptions;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *recordDecryptGroup;
@property (getter=isStarted) _Bool started;
@property (getter=isMarkedToFinish) _Bool markedToFinish;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordDecryptQueue;
@property (nonatomic) unsigned long long maxUnwrapAttempts;
@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID;
@property (nonatomic) _Bool forcePCSDecrypt;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (_Bool)operationShouldBeFlowControlled;
- (_Bool)shouldCheckAppVersion;
- (id)_possiblyWrapError:(id)arg1 forRecordWithID:(id)arg2 withCode:(long long)arg3 format:(id)arg4;
- (void)finishDecryption;
- (void)decryptRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_recordInfoWasDecrypted:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_decryptRecordInfo:(id)arg1;
- (void)_clearProtectionDataForRecordInfo:(id)arg1;
- (void)_handleProtectionDataForRecordInfo:(id)arg1;
- (id)_unwrapEncryptedPropertiesOnRecord:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_decryptRecordPCSForRecord:(id)arg1 usingZonePCS:(id)arg2;
- (id)_decryptRecordPCSForRecord:(id)arg1 usingSharePCS:(id)arg2;
- (id)_decryptRecordPCSForRecord:(id)arg1 usingChainPCS:(id)arg2;
- (void)_decryptRecordInfo:(id)arg1 usingWebSharingIdentityData:(id)arg2;
- (void)_handleZoneProtectionDataForRecordInfo:(id)arg1;
- (void)_handleShareProtectionDataForRecordInfo:(id)arg1;
- (id)_unwrapAssetKeyForAsset:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(struct _OpaquePCSShareProtection *)arg4;
- (id)_unwrapPackageAssets:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(struct _OpaquePCSShareProtection *)arg4;
- (id)_unwrapEncryptedPropertiesForRecordValueStore:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;
- (void)_finishDecryptOperation;

@end
