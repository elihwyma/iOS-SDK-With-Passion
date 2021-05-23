/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface CKFetchRecordZoneChangesOperation : CKDatabaseOperation

{
    _Bool _fetchAllChanges;
    _Bool _shouldFetchAssetContents;
    _Bool _shouldReportAllPerItemFailures;
    CDUnknownBlockType _recordChangedBlock;
    CDUnknownBlockType _perRecordChangeCompletionBlock;
    CDUnknownBlockType _recordWithIDWasDeletedBlock;
    CDUnknownBlockType _recordZoneChangeTokensUpdatedBlock;
    CDUnknownBlockType _recordZoneFetchCompletionBlock;
    CDUnknownBlockType _fetchRecordZoneChangesCompletionBlock;
    NSArray *_recordZoneIDs;
    NSDictionary *_configurationsByRecordZoneID;
    NSMutableDictionary *_statusByZoneID;
    NSMutableSet *_zoneIDsWithPendingArchivedRecords;
    NSMutableDictionary *_perItemErrors;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

@property (copy, nonatomic) NSDictionary *optionsByRecordZoneID;
@property (retain, nonatomic) NSMutableDictionary *statusByZoneID;
@property (retain, nonatomic) NSMutableSet *zoneIDsWithPendingArchivedRecords;
@property (nonatomic) _Bool shouldFetchAssetContents;
@property (retain, nonatomic) NSMutableDictionary *perItemErrors;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (copy, nonatomic) CDUnknownBlockType perRecordChangeCompletionBlock;
@property (nonatomic) _Bool shouldReportAllPerItemFailures;
@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) _Bool fetchAllChanges;
@property (copy, nonatomic) CDUnknownBlockType recordChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordWithIDWasDeletedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneFetchCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordZoneChangesCompletionBlock;

- (id)init;
- (id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2;
- (id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (long long)changeTypesFromSetCallbacks;
- (id)partialFailureForItemsInZone:(id)arg1;
- (id)recordZoneChangesStatusByZoneID;
- (id)recordZoneIDsWithPendingArchivedRecords;

@end
