/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSArray, NSError;

@interface FCCKMultiFeedQueryOperation : FCOperation

{
    FCCKContentDatabase *_database;
    NSArray *_feedRequests;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
    long long _sortingFunction;
    long long _queryPriority;
    NSArray *_articleLinkKeys;
    CDUnknownBlockType _queryCompletionHandler;
    NSArray *_networkEvents;
    NSArray *_resultFeedItemAndArticleRecords;
    NSArray *_resultTagRecords;
    NSArray *_resultIssueRecords;
    NSArray *_resultFeedResponses;
    NSError *_resultError;
}

@property (copy, nonatomic) NSArray *networkEvents;
@property (retain, nonatomic) NSArray *resultFeedItemAndArticleRecords;
@property (retain, nonatomic) NSArray *resultTagRecords;
@property (retain, nonatomic) NSArray *resultIssueRecords;
@property (retain, nonatomic) NSArray *resultFeedResponses;
@property (retain, nonatomic) NSError *resultError;
@property (retain, nonatomic) FCCKContentDatabase *database;
@property (copy, nonatomic) NSArray *feedRequests;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (nonatomic) long long sortingFunction;
@property (nonatomic) long long queryPriority;
@property (copy, nonatomic) NSArray *articleLinkKeys;
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
