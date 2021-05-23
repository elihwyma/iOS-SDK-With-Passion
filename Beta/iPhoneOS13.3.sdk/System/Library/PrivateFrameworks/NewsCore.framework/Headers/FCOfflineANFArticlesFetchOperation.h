/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class NSArray;

@protocol FCContentContext, FCFlintHelper;

@interface FCOfflineANFArticlesFetchOperation : FCOperation

{
    _Bool _cachedOnly;
    unsigned long long _maximumMissingArticles;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _fetchCompletionHandler;
    id <FCContentContext> _context;
    id <FCFlintHelper> _flintHelper;
    NSArray *_articleIDs;
    id _resultHoldToken;
}

@property (retain, nonatomic) id <FCContentContext> context;
@property (retain, nonatomic) id <FCFlintHelper> flintHelper;
@property (retain, nonatomic) NSArray *articleIDs;
@property (retain, nonatomic) id resultHoldToken;
@property (nonatomic) _Bool cachedOnly;
@property (nonatomic) unsigned long long maximumMissingArticles;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (copy, nonatomic) CDUnknownBlockType fetchCompletionHandler;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)_promiseHeadlines;
- (id)_promiseThumbnailsAndANFDocumentsFromHeadlines:(id)arg1;
- (id)_promiseANFResourcesFromHeadlines:(id)arg1;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2 articleIDs:(id)arg3;

@end
