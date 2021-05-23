/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCArticle, NFEventManager, NSString, NUANFAssetLoader, NUANFContextLoader, NUANFFontLoader;

@protocol FCContentContext, NUEmbedDataManager, NUFontRegistration, SXHost;

@interface NUANFArticleDataProvider : NSObject

{
    FCArticle *_article;
    NSString *_articleID;
    id <FCContentContext> _contentContext;
    id <NUFontRegistration> _fontRegistration;
    id <SXHost> _host;
    NUANFFontLoader *_fontLoader;
    NUANFContextLoader *_contextLoader;
    NUANFAssetLoader *_assetLoader;
    id <NUEmbedDataManager> _embedDataManger;
    NFEventManager *_eventManager;
}

@property (copy, nonatomic) NSString *articleID;
@property (nonatomic, readonly) id <FCContentContext> contentContext;
@property (nonatomic, readonly) id <NUFontRegistration> fontRegistration;
@property (nonatomic, readonly) id <SXHost> host;
@property (retain, nonatomic) FCArticle *article;
@property (retain, nonatomic) NUANFFontLoader *fontLoader;
@property (retain, nonatomic) NUANFContextLoader *contextLoader;
@property (retain, nonatomic) NUANFAssetLoader *assetLoader;
@property (retain, nonatomic) id <NUEmbedDataManager> embedDataManger;
@property (retain, nonatomic) NFEventManager *eventManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)prefetchAssets;
- (void)cancelAssetPrefetch;
- (void)loadContextWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setupAssetPrefetchRequestEventsWithEvents:(id)arg1;
- (void)loadArticleWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadArticleIfNeeded;
- (void)setupAssetPrefetchCancellationWithOperation:(id)arg1;
- (id)initWithArticle:(id)arg1 contentContext:(id)arg2 fontRegistration:(id)arg3 host:(id)arg4 embedDataManager:(id)arg5;

@end
