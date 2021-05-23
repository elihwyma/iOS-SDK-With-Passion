/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface CKModifyRecordsOperation : CKDatabaseOperation

{
    _Bool _atomic;
    _Bool _shouldReportRecordsInFlight;
    _Bool _shouldOnlySaveAssetContent;
    _Bool _markAsParticipantNeedsNewInvitationToken;
    CDUnknownBlockType _perRecordProgressBlock;
    CDUnknownBlockType _perRecordCompletionBlock;
    CDUnknownBlockType _modifyRecordsCompletionBlock;
    CDUnknownBlockType _recordsInFlightBlock;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    long long _savePolicy;
    NSData *_clientChangeTokenData;
    NSMutableArray *_savedRecords;
    NSMutableArray *_deletedRecordIDs;
    NSMutableDictionary *_recordsByRecordIDs;
    NSMutableDictionary *_recordErrors;
    NSMutableDictionary *_assetsByRecordIDAndRecordKey;
    NSMutableSet *_packagesToDestroy;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSDictionary *_pluginFieldsForRecordDeletesByID;
    NSDictionary *_assetUUIDToExpectedProperties;
    NSDictionary *_packageUUIDToExpectedProperties;
}

@property (retain, nonatomic) NSMutableArray *savedRecords;
@property (retain, nonatomic) NSMutableArray *deletedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *recordsByRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (retain, nonatomic) NSMutableDictionary *assetsByRecordIDAndRecordKey;
@property (nonatomic) _Bool shouldReportRecordsInFlight;
@property (retain, nonatomic) NSMutableSet *packagesToDestroy;
@property (nonatomic) _Bool shouldOnlySaveAssetContent;
@property (nonatomic) _Bool markAsParticipantNeedsNewInvitationToken;
@property (copy, nonatomic) NSDictionary *recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID;
@property (copy, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (copy, nonatomic) CDUnknownBlockType recordsInFlightBlock;
@property (copy, nonatomic) NSDictionary *assetUUIDToExpectedProperties;
@property (copy, nonatomic) NSDictionary *packageUUIDToExpectedProperties;
@property (copy, nonatomic) NSArray *recordsToSave;
@property (copy, nonatomic) NSArray *recordIDsToDelete;
@property (nonatomic) long long savePolicy;
@property (copy, nonatomic) NSData *clientChangeTokenData;
@property (nonatomic) _Bool atomic;
@property (copy, nonatomic) CDUnknownBlockType perRecordProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType perRecordCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType modifyRecordsCompletionBlock;

- (id)init;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (_Bool)claimPackagesInRecord:(id)arg1 error:(id *)arg2;
- (void)destroyPackagesInRecords:(id)arg1;
- (void)_trackAssetsToUpload;
- (void)copyStreamingAssetServerFieldsFromServerRecord:(id)arg1 toRecord:(id)arg2;
- (void)destroyPackages:(id)arg1;

@end
