/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCNetworkOperation.h>

@class CKQuery, CKQueryCursor, FCCKContentDatabase, FCEdgeCacheHint, NSArray, NSDictionary;

@interface FCCKContentQueryOperation : FCNetworkOperation

{
    FCCKContentDatabase *_database;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
    CDUnknownBlockType _recordFetchedBlock;
    CDUnknownBlockType _queryCompletionBlock;
    NSArray *_requestUUIDs;
    long long _networkEventType;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    NSArray *_networkEvents;
    CKQueryCursor *_resultCursor;
}

@property (copy, nonatomic) NSArray *requestUUIDs;
@property (copy, nonatomic) NSArray *networkEvents;
@property (retain, nonatomic) CKQueryCursor *resultCursor;
@property (retain, nonatomic) FCCKContentDatabase *database;
@property (retain, nonatomic) CKQuery *query;
@property (retain, nonatomic) CKQueryCursor *cursor;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) CDUnknownBlockType recordFetchedBlock;
@property (copy, nonatomic) CDUnknownBlockType queryCompletionBlock;
@property (nonatomic) long long networkEventType;
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)throttleGroup;
- (id)_requestOperations;
- (id)_ckRecordsFromQueryResponse:(id)arg1;
- (id)_ckCursorFromQueryResponse:(id)arg1;

@end
