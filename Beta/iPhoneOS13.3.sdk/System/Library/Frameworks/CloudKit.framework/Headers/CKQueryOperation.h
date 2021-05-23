/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class CKQuery, CKQueryCursor, CKRecordZoneID, NSArray, NSDictionary;

@interface CKQueryOperation : CKDatabaseOperation

{
    _Bool _shouldFetchAssetContent;
    _Bool _fetchAllResults;
    CDUnknownBlockType _recordFetchedBlock;
    CDUnknownBlockType _queryCompletionBlock;
    CDUnknownBlockType _queryCursorFetchedBlock;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    CKRecordZoneID *_zoneID;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
    CKQueryCursor *_resultsCursor;
    NSDictionary *_assetTransferOptionsByKey;
}

@property (retain, nonatomic) CKQueryCursor *resultsCursor;
@property (nonatomic) _Bool shouldFetchAssetContent;
@property (nonatomic) _Bool fetchAllResults;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByKey;
@property (copy, nonatomic) CDUnknownBlockType queryCursorFetchedBlock;
@property (copy, nonatomic) CKQuery *query;
@property (copy, nonatomic) CKQueryCursor *cursor;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) CDUnknownBlockType recordFetchedBlock;
@property (copy, nonatomic) CDUnknownBlockType queryCompletionBlock;

- (id)init;
- (id)initWithQuery:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (id)initWithCursor:(id)arg1;

@end
