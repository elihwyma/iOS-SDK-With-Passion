/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDRecordFetchAggregator, CKQuery, CKQueryCursor, CKRecordZoneID, NSDictionary, NSMutableArray, NSObject, NSSet, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDQueryOperation : CKDDatabaseOperation

{
    _Bool _shouldFetchAssetContent;
    _Bool _fetchAllResults;
    _Bool _hasCalledQueryCursorUpdatedBlock;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    unsigned long long _resultsLimit;
    CKQueryCursor *_resultsCursor;
    CDUnknownBlockType _recordFetchedBlock;
    CDUnknownBlockType _queryCursorUpdatedBlock;
    NSSet *_desiredKeySet;
    CKRecordZoneID *_zoneID;
    CKDRecordFetchAggregator *_recordFetcher;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    unsigned long long _numRequestsSent;
    NSMutableArray *_requestInfos;
    NSDictionary *_assetTransferOptionsByKey;
}

@property (retain, nonatomic) NSSet *desiredKeySet;
@property (nonatomic) _Bool shouldFetchAssetContent;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKDRecordFetchAggregator *recordFetcher;
@property (retain, nonatomic) CKQueryCursor *resultsCursor;
@property (nonatomic) _Bool fetchAllResults;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup;
@property (nonatomic) unsigned long long numRequestsSent;
@property (retain, nonatomic) NSMutableArray *requestInfos;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByKey;
@property (nonatomic) _Bool hasCalledQueryCursorUpdatedBlock;
@property (nonatomic, readonly) CKQuery *query;
@property (nonatomic, readonly) CKQueryCursor *cursor;
@property (nonatomic, readonly) unsigned long long resultsLimit;
@property (copy, nonatomic) CDUnknownBlockType recordFetchedBlock;
@property (copy, nonatomic) CDUnknownBlockType queryCursorUpdatedBlock;
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
- (Class)operationResultClass;
- (void)fillOutOperationResult:(id)arg1;
- (id)_wrapError:(id)arg1 format:(id)arg2;
- (void)_sendQueryRequestWithCursor:(id)arg1 previousRequestSchedulerInfo:(id)arg2;
- (void)_handleQueryRequestFinishedWithSchedulerInfo:(id)arg1;
- (void)_handleRecordResponses:(id)arg1 perRequestSchedulerInfo:(id)arg2;

@end
