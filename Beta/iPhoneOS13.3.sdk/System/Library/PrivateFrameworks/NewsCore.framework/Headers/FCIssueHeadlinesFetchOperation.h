/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCachePolicy, NSArray, NSDictionary;

@protocol FCContentContext;

@interface FCIssueHeadlinesFetchOperation : FCOperation

{
    FCCachePolicy *_cachePolicy;
    CDUnknownBlockType _fetchCompletionHandler;
    id <FCContentContext> _context;
    NSArray *_issueIDs;
    NSDictionary *_resultHeadlinesByIssue;
}

@property (retain, nonatomic) id <FCContentContext> context;
@property (retain, nonatomic) NSArray *issueIDs;
@property (retain, nonatomic) NSDictionary *resultHeadlinesByIssue;
@property (copy, nonatomic) FCCachePolicy *cachePolicy;
@property (copy, nonatomic) CDUnknownBlockType fetchCompletionHandler;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)_promiseConfiguration;
- (id)initWithContext:(id)arg1 issueIDs:(id)arg2;
- (id)_promiseHeldRecordsByType;
- (id)initWithContext:(id)arg1 issues:(id)arg2;

@end
