/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface CKFetchRecordsOperation : CKDatabaseOperation

{
    _Bool _shouldFetchAssetContent;
    _Bool _shouldFetchAssetContentInMemory;
    _Bool _dropInMemoryAssetContentASAP;
    _Bool _isFetchCurrentUserOperation;
    CDUnknownBlockType _perRecordProgressBlock;
    CDUnknownBlockType _perRecordCompletionBlock;
    CDUnknownBlockType _fetchRecordsCompletionBlock;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSMutableSet *_packagesToDestroy;
    NSMutableDictionary *_assetInfoByArrayIndexByRecordKeyByRecordID;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
    NSMutableDictionary *_recordIDsToRecords;
    NSMutableDictionary *_recordErrors;
    NSDictionary *_desiredPackageFileIndices;
    NSDictionary *_recordIDsToETags;
    NSDictionary *_recordIDsToVersionETags;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property (retain, nonatomic) NSMutableSet *packagesToDestroy;
@property (nonatomic) _Bool shouldFetchAssetContent;
@property (nonatomic) _Bool shouldFetchAssetContentInMemory;
@property (nonatomic) _Bool dropInMemoryAssetContentASAP;
@property (retain, nonatomic) NSMutableDictionary *assetInfoByArrayIndexByRecordKeyByRecordID;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (retain, nonatomic) NSMutableDictionary *recordIDsToRecords;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (copy, nonatomic) NSDictionary *desiredPackageFileIndices;
@property (nonatomic) _Bool isFetchCurrentUserOperation;
@property (retain, nonatomic) NSDictionary *recordIDsToETags;
@property (retain, nonatomic) NSDictionary *recordIDsToVersionETags;
@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID;
@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) CDUnknownBlockType perRecordProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType perRecordCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordsCompletionBlock;

+ (id)fetchCurrentUserRecordOperation;

- (id)init;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (id)initWithRecordIDs:(id)arg1;
- (_Bool)claimPackagesInRecord:(id)arg1 error:(id *)arg2;
- (id)assetInfoForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(id)arg3;

@end
