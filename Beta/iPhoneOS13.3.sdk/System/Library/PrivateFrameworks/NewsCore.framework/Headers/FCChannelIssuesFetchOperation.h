/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCachePolicy, NSArray, NSDictionary;

@protocol FCContentContext;

@interface FCChannelIssuesFetchOperation : FCOperation

{
    FCCachePolicy *_cachePolicy;
    CDUnknownBlockType _fetchCompletionHandler;
    id <FCContentContext> _context;
    NSArray *_channelIDs;
    long long _issueSet;
    NSDictionary *_resultIssuesByChannel;
}

@property (retain, nonatomic) id <FCContentContext> context;
@property (retain, nonatomic) NSArray *channelIDs;
@property (nonatomic) long long issueSet;
@property (retain, nonatomic) NSDictionary *resultIssuesByChannel;
@property (copy, nonatomic) FCCachePolicy *cachePolicy;
@property (copy, nonatomic) CDUnknownBlockType fetchCompletionHandler;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)initWithContext:(id)arg1 channelIDs:(id)arg2 issueSet:(long long)arg3;

@end
