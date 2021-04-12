//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleViewControllerFactory-Protocol.h>

@class NSHashTable;
@protocol NFResolver, NUArticleAdManagerFactory, NUArticleDataProviderFactory, NUArticleKeyCommandManager, NUArticlePrefetcherType, NUDocumentSectionBlueprintProvider, SXAppStateMonitor, SXURLHandling;

@interface NUArticleViewControllerFactory : NSObject <NUArticleViewControllerFactory>
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

@property(readonly, nonatomic) id <NUArticlePrefetcherType> articlePrefetcher; // @synthesize articlePrefetcher=_articlePrefetcher;
@property(readonly, nonatomic) id <NUDocumentSectionBlueprintProvider> headerBlueprintProvider; // @synthesize headerBlueprintProvider=_headerBlueprintProvider;
@property(readonly, nonatomic) id <NFResolver> resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) id <NUArticleKeyCommandManager> keyCommandManager; // @synthesize keyCommandManager=_keyCommandManager;
@property(readonly, nonatomic) id <SXURLHandling> URLHandler; // @synthesize URLHandler=_URLHandler;
@property(readonly, nonatomic) id <SXAppStateMonitor> appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
@property(readonly, nonatomic) id <NUArticleAdManagerFactory> articleAdManagerFactory; // @synthesize articleAdManagerFactory=_articleAdManagerFactory;
@property(readonly, nonatomic) id <NUArticleDataProviderFactory> articleDataProviderFactory; // @synthesize articleDataProviderFactory=_articleDataProviderFactory;
@property(readonly, nonatomic) NSHashTable *loadingListeners; // @synthesize loadingListeners=_loadingListeners;
// - (void).cxx_destruct;
- (id)createArticleExcerptViewControllerWithArticle:(id)arg1 traits:(id)arg2;
- (id)createArticleWebViewControllerWithArticle:(id)arg1;
- (id)createArticleViewControllerWithArticle:(id)arg1 issue:(id)arg2;
- (id)createArticleViewControllerWithArticle:(id)arg1;
- (id)initWithArticleDataProviderFactory:(id)arg1 articleAdManagerFactory:(id)arg2 appStateMonitor:(id)arg3 keyCommandManager:(id)arg4 headerBlueprintProvider:(id)arg5 articlePrefetcher:(id)arg6 resolver:(id)arg7;
- (id)initWithArticleDataProviderFactory:(id)arg1 articleAdManagerFactory:(id)arg2 appStateMonitor:(id)arg3 URLHandler:(id)arg4 keyCommandManager:(id)arg5 headerBlueprintProvider:(id)arg6 articlePrefetcher:(id)arg7 resolver:(id)arg8;

@end

