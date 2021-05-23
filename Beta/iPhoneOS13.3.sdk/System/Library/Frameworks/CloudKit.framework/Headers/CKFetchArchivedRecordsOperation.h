/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKFetchArchivedRecordsOperation : CKDatabaseOperation

{
    _Bool _fetchAllChanges;
    _Bool _shouldFetchAssetContents;
    CDUnknownBlockType _recordFetchedBlock;
    CDUnknownBlockType _recordZoneChangeTokensUpdatedBlock;
    CDUnknownBlockType _recordZoneFetchCompletionBlock;
    CDUnknownBlockType _fetchArchivedRecordsCompletionBlock;
    NSArray *_recordZoneIDs;
    NSDictionary *_configurationsByRecordZoneID;
    NSMutableDictionary *_statusByZoneID;
    NSMutableDictionary *_perItemErrors;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

@property (retain, nonatomic) NSMutableDictionary *statusByZoneID;
@property (nonatomic) _Bool shouldFetchAssetContents;
@property (retain, nonatomic) NSMutableDictionary *perItemErrors;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) _Bool fetchAllChanges;
@property (copy, nonatomic) CDUnknownBlockType recordFetchedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneFetchCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType fetchArchivedRecordsCompletionBlock;

- (id)init;
- (id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (id)recordZoneArchivesStatusByZoneID;

@end
