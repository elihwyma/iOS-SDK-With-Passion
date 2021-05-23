/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCachePolicy, NSString;

@protocol FCContentContext, FCFlintHelper;

@interface FCOfflineIssueFetchOperation : FCOperation

{
    _Bool _cachedOnly;
    CDUnknownBlockType _layeredCoverHandlesProvider;
    double _progress;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _fetchCompletionHandler;
    id <FCContentContext> _context;
    id <FCFlintHelper> _flintHelper;
    NSString *_issueID;
    id _resultHoldToken;
    FCCachePolicy *_issueRecordCachePolicy;
}

@property double progress;
@property (retain, nonatomic) id <FCContentContext> context;
@property (retain, nonatomic) id <FCFlintHelper> flintHelper;
@property (copy, nonatomic) NSString *issueID;
@property (retain, nonatomic) id resultHoldToken;
@property (retain, nonatomic) FCCachePolicy *issueRecordCachePolicy;
@property (nonatomic) _Bool cachedOnly;
@property (copy, nonatomic) CDUnknownBlockType layeredCoverHandlesProvider;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (copy, nonatomic) CDUnknownBlockType fetchCompletionHandler;

- (id)init;
- (void)_updateProgress:(double)arg1;
- (unsigned long long)maxRetries;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (void)resetForRetry;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2 issueID:(id)arg3;
- (id)_promiseIssue;
- (id)_promiseMetadataForIssue:(id)arg1;
- (id)_promiseCoverImageForIssue:(id)arg1;
- (id)_promiseLayeredCoverAssetsForIssue:(id)arg1;
- (id)_promiseANFArticlesForIssue:(id)arg1;
- (id)_promiseANFPagesForIssue:(id)arg1;
- (id)_promisePDFPagesForIssue:(id)arg1;
- (id)_promiseANFArticlesForArticleIDs:(id)arg1 withDownloadProgressMin:(double)arg2 downloadProgressMax:(double)arg3;
- (id)_itemIdentifiersForKey:(id)arg1 fromMetadataJSONData:(id)arg2;
- (id)_promiseReplicaAdPagesForIssue:(id)arg1 withDownloadProgressMin:(double)arg2 downloadProgressMax:(double)arg3;
- (id)_resourceIDsFromMetadataJSONData:(id)arg1;
- (id)_pdfArchiveURLForIssue:(id)arg1;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2 issue:(id)arg3;

@end
