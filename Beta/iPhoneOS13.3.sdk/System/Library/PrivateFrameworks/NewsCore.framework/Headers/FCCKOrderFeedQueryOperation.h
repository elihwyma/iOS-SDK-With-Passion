/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, FCEdgeCacheHint, NSArray, NSDictionary, NSError;

@interface FCCKOrderFeedQueryOperation : FCOperation

{
    FCCKContentDatabase *_database;
    NSArray *_feedRequests;
    NSArray *_desiredKeys;
    unsigned long long _resultsLimit;
    long long _queryPriority;
    NSArray *_articleLinkKeys;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    NSArray *_networkEvents;
    CDUnknownBlockType _queryCompletionHandler;
    NSArray *_resultFeedItemAndArticleRecords;
    NSArray *_resultTagRecords;
    NSArray *_resultIssueRecords;
    NSArray *_resultFeedResponses;
    NSError *_resultError;
}

@property (retain, nonatomic) NSArray *resultFeedItemAndArticleRecords;
@property (retain, nonatomic) NSArray *resultTagRecords;
@property (retain, nonatomic) NSArray *resultIssueRecords;
@property (retain, nonatomic) NSArray *resultFeedResponses;
@property (retain, nonatomic) NSError *resultError;
@property (copy, nonatomic) NSArray *networkEvents;
@property (retain, nonatomic) FCCKContentDatabase *database;
@property (copy, nonatomic) NSArray *feedRequests;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) long long queryPriority;
@property (copy, nonatomic) NSArray *articleLinkKeys;
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (copy, nonatomic) CDUnknownBlockType queryCompletionHandler;

- (id)_requiredKeys;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;
- (void)resetForRetry;
- (id)_constructFeedQuery;
- (void)_processResultsRecord:(id)arg1 feedItemAndArticleRecords:(id)arg2 tagRecords:(id)arg3 issueRecords:(id)arg4;
- (id)_predicateForPerFeedFieldName:(id)arg1 key:(id)arg2 defaultValue:(id)arg3;
- (id)_feedRelativeDictionaryFromResultsArray:(id)arg1;

@end
