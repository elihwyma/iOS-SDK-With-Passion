/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSURL, WKProcessPool;

@protocol OS_dispatch_queue;

@interface WBSSiteMetadataManager : NSObject

{
    WKProcessPool *_processPool;
    NSMutableSet *_usedWebViews;
    NSMutableSet *_reusableWebViews;
    NSMutableArray *_siteMetadataProviders;
    NSObject<OS_dispatch_queue> *_siteMetadataProvidersAccessQueue;
    NSOperationQueue *_operationQueue;
    NSCountedSet *_activeOperations;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableSet *_tokens;
    NSMutableDictionary *_requestsToRequestInfos;
    NSURL *_injectedBundleURL;
}

@property (copy, nonatomic, readonly) NSURL *injectedBundleURL;
@property (nonatomic, getter=isSuspended) _Bool suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithInjectedBundleURL:(id)arg1;
- (id)_processPool;
- (void)cancelRequestsWithTokens:(id)arg1;
- (id)registerRequest:(id)arg1 priority:(long long)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)registerSiteMetadataProvider:(id)arg1;
- (void)preloadRequests:(id)arg1 withPriority:(long long)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)cancelRequestWithToken:(id)arg1;
- (void)preloadRequest:(id)arg1 withPriority:(long long)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)siteMetadataProvider:(id)arg1 didReceiveResponse:(id)arg2 ofType:(long long)arg3 didReceiveNewData:(_Bool)arg4 forRequest:(id)arg5;
- (void)cancelRequestsWithTokens:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)registerOneTimeRequest:(id)arg1 priority:(long long)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)siteMetadataProvider:(id)arg1 cancelRequestsWithTokens:(id)arg2;
- (id)siteMetadataProvider:(id)arg1 registerRequest:(id)arg2 priority:(long long)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)_numberOfConcurrentRequests;
- (id)_providerForRequest:(id)arg1;
- (void)_registerToken:(id)arg1 withProvider:(id)arg2;
- (_Bool)_requestIsCancelledForToken:(id)arg1;
- (void)_internalCancelRequestWithToken:(id)arg1;
- (void)_reprioritizeOperationForRequest:(id)arg1;
- (void)_internalSetPriority:(long long)arg1 ofRequestWithToken:(id)arg2;
- (void)emptyProviderCachesIncludingFavicons:(_Bool)arg1;
- (long long)_highestRequestPriorityForRequest:(id)arg1;
- (_Bool)_updateOperationForRequestIfPossible:(id)arg1;
- (void)_sendResponse:(id)arg1 toResponseHandlersForRequest:(id)arg2 didReceiveNewData:(_Bool)arg3;
- (void)_scheduleDelayedResponse:(id)arg1 forRequestToken:(id)arg2;
- (void)_setUpOperationForRequest:(id)arg1 withSiteMetadataProvider:(id)arg2 usingOperationBlock:(CDUnknownBlockType)arg3;
- (void)_sendRequiresDownloadResponse:(id)arg1 toResponseHandlersForRequest:(id)arg2;
- (id)_popReusableWebView;
- (void)_discardWebViewSoon:(id)arg1;
- (void)siteMetadataProvider:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3 beginOperationUsingBlock:(CDUnknownBlockType)arg4;
- (id)siteMetadataProvider:(id)arg1 registerOneTimeRequest:(id)arg2 priority:(long long)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)siteMetadataProvider:(id)arg1 getWebViewOfSize:(struct CGSize)arg2 withConfiguration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)siteMetadataProvider:(id)arg1 didFinishUsingWebView:(id)arg2;
- (void)setPriority:(long long)arg1 ofRequestWithToken:(id)arg2;
- (void)setPriority:(long long)arg1 ofRequestsWithTokens:(id)arg2;
- (void)emptyProviderCaches;
- (void)savePendingProviderChangesBeforeTermination;
- (id)_makeWebViewOfSize:(struct CGSize)arg1 withConfiguration:(id)arg2;

@end
