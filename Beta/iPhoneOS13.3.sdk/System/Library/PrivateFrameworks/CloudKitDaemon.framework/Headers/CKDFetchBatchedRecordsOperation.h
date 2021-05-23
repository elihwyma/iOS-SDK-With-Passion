/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDRecordCache, CKDRecordFetchAggregator, NSArray, NSDictionary, NSMutableArray, NSObject, NSSet, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDFetchBatchedRecordsOperation : CKDDatabaseOperation

{
    _Bool _shouldFetchAssetContents;
    _Bool _fetchAllChanges;
    _Bool _forcePCSDecryptionAttempt;
    _Bool _shouldReportAllPerItemFailures;
    CKDRecordCache *_recordCache;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    NSSet *_desiredAssetKeys;
    NSArray *_recordZoneIDs;
    NSDictionary *_configurationsByRecordZoneID;
    unsigned long long _numRequestsSent;
    CKDRecordFetchAggregator *_recordFetcher;
    NSMutableArray *_requestInfos;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) unsigned long long numRequestsSent;
@property (retain, nonatomic) CKDRecordFetchAggregator *recordFetcher;
@property (retain, nonatomic) NSMutableArray *requestInfos;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) _Bool forcePCSDecryptionAttempt;
@property (nonatomic) _Bool shouldReportAllPerItemFailures;
@property (nonatomic, readonly) CKDRecordCache *recordCache;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup;
@property (nonatomic) _Bool shouldFetchAssetContents;
@property (nonatomic) _Bool fetchAllChanges;
@property (retain, nonatomic) NSSet *desiredAssetKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *pipeliningDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2;
- (void)_noteChangedRecordWithID:(id)arg1 recordType:(id)arg2 record:(id)arg3 error:(id)arg4;
- (id)_possiblyWrapError:(id)arg1 forRecordWithID:(id)arg2 withCode:(long long)arg3 format:(id)arg4;
- (void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1;
- (void)_sendFetchChangesRequestForZoneIDs:(id)arg1 withOptions:(id)arg2 previousRequestSchedulerInfo:(id)arg3;
- (void)_handleFetchChangesRequestFinishedWithSchedulerInfo:(id)arg1;
- (void)_noteOperationBeginning;
- (void)_noteOperationFinishedBlockEnd;
- (void)_handleChangedRecords:(id)arg1 perRequestSchedulerInfo:(id)arg2;
- (void)_handleRecordDelete:(id)arg1 recordType:(id)arg2 perRequestSchedulerInfo:(id)arg3;
- (void)_noteOperationEnding;

@end
