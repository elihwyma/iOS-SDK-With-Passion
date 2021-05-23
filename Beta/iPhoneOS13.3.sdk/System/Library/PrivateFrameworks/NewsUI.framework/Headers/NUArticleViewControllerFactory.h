/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@protocol NFResolver, NUArticleAdManagerFactory, NUArticleDataProviderFactory, NUArticleKeyCommandManager, NUArticlePrefetcherType, NUDocumentSectionBlueprintProvider, SXAppStateMonitor, SXURLHandling;

@interface NUArticleViewControllerFactory : NSObject

{
    NSHashTable *_loadingListeners;
    id <NUArticleDataProviderFactory> _articleDataProviderFactory;
    id <NUArticleAdManagerFactory> _articleAdManagerFactory;
    id <SXAppStateMonitor> _appStateMonitor;
    id <SXURLHandling> _URLHandler;
    id <NUArticleKeyCommandManager> _keyCommandManager;
    id <NFResolver> _resolver;
    id <NUDocumentSectionBlueprintProvider> _headerBlueprintProvider;
    id <NUArticlePrefetcherType> _articlePrefetcher;
}

@property (nonatomic, readonly) id <NUArticleDataProviderFactory> articleDataProviderFactory;
@property (nonatomic, readonly) id <NUArticleAdManagerFactory> articleAdManagerFactory;
@property (nonatomic, readonly) id <SXAppStateMonitor> appStateMonitor;
@property (nonatomic, readonly) id <SXURLHandling> URLHandler;
@property (nonatomic, readonly) id <NUArticleKeyCommandManager> keyCommandManager;
@property (nonatomic, readonly) id <NFResolver> resolver;
@property (nonatomic, readonly) id <NUDocumentSectionBlueprintProvider> headerBlueprintProvider;
@property (nonatomic, readonly) id <NUArticlePrefetcherType> articlePrefetcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSHashTable *loadingListeners;

- (id)initWithArticleDataProviderFactory:(id)arg1 articleAdManagerFactory:(id)arg2 appStateMonitor:(id)arg3 URLHandler:(id)arg4 keyCommandManager:(id)arg5 headerBlueprintProvider:(id)arg6 articlePrefetcher:(id)arg7 resolver:(id)arg8;
- (id)createArticleViewControllerWithArticle:(id)arg1 issue:(id)arg2;
- (id)createArticleViewControllerWithArticle:(id)arg1;
- (id)createArticleWebViewControllerWithArticle:(id)arg1;
- (id)createArticleExcerptViewControllerWithArticle:(id)arg1 traits:(id)arg2;
- (id)initWithArticleDataProviderFactory:(id)arg1 articleAdManagerFactory:(id)arg2 appStateMonitor:(id)arg3 keyCommandManager:(id)arg4 headerBlueprintProvider:(id)arg5 articlePrefetcher:(id)arg6 resolver:(id)arg7;

@end
