/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSOperation, NSOperationQueue, SKUIClientContext, SKUITrendingSearchPage;

__attribute__((visibility("hidden")))
@interface SKUITrendingSearchProvider : NSObject

{
    SKUIClientContext *_clientContext;
    NSOperationQueue *_operationQueue;
    SKUITrendingSearchPage *_cachedSearchPage;
    NSMutableArray *_pendingCompletionBlocks;
    NSOperation *_runningRequestOperation;
}

@property (nonatomic, readonly) NSOperationQueue *callbackQueue;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (retain, nonatomic) SKUITrendingSearchPage *cachedSearchPage;
@property (nonatomic, readonly) NSMutableArray *pendingCompletionBlocks;
@property (retain, nonatomic) NSOperation *runningRequestOperation;
@property (weak, nonatomic, readonly) SKUIClientContext *clientContext;

- (void)dealloc;
- (void)clearCache;
- (id)initWithClientContext:(id)arg1;
- (void)trendingSearchPageWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)requestOperationWithPageURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestTrendingSearchPageWithURL:(id)arg1;

@end
