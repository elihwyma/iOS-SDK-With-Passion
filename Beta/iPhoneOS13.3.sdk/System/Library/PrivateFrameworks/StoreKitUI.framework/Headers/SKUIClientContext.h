/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class IKAppContext, NSArray, NSBundle, NSCache, NSDictionary, NSMapTable, NSMutableArray, NSOperationQueue, NSString, SKUIApplicationController, SKUILocalizedStringDictionary, SKUIStoreDialogController, SKUITrendingSearchProvider, SKUIURL, SKUIURLBag, SSURLBag, SSUpdatableAssetController, SSVPlatformContext, SUClientInterface;

@interface SKUIClientContext : NSObject

{
    NSString *_additionalPurchaseParameters;
    SKUIApplicationController *_applicationController;
    NSBundle *_bundle;
    SUClientInterface *_clientInterface;
    NSDictionary *_configurationDictionary;
    SKUIStoreDialogController *_dialogController;
    SKUILocalizedStringDictionary *_localizedStrings;
    NSString *_metricsConfigurationIdentifier;
    NSMapTable *_metricsPageContexts;
    NSMutableArray *_navigationHistory;
    NSString *_navigationHistoryPersistenceKey;
    NSString *_purchaseAffiliateIdentifier;
    SKUIURL *_purchaseReferrerURL;
    long long _purchaseURLBagType;
    IKAppContext *_scriptAppContext;
    NSString *_storeFrontIdentifier;
    SSUpdatableAssetController *_updatableAssetController;
    SKUIURLBag *_urlBag;
    long long _userInterfaceIdiomOverride;
    SKUITrendingSearchProvider *_trendingSearchProvider;
    NSOperationQueue *_resourceLoadQueue;
    NSCache *_placeholderImageCache;
}

@property (nonatomic, readonly, getter=isBootstrapScriptFallbackDisabled) _Bool bootstrapScriptFallbackDisabled;
@property (weak, nonatomic, getter=_applicationController, setter=_setApplicationController:) SKUIApplicationController *_applicationController;
@property (nonatomic, readonly) NSCache *placeholderImageCache;
@property (nonatomic, readonly) SKUITrendingSearchProvider *trendingSearchProvider;
@property (nonatomic, readonly) NSOperationQueue *resourceLoadQueue;
@property (nonatomic, readonly) Class moviePlayerViewControllerClass;
@property (nonatomic, readonly, getter=isMultiUser) _Bool multiUser;
@property (nonatomic, readonly, getter=isManagedAppleID) _Bool managedAppleID;
@property (weak, nonatomic, readonly, getter=applicationController) SKUIApplicationController *applicationController;
@property (copy, nonatomic) NSString *navigationHistoryPersistenceKey;
@property (copy, nonatomic, readonly) NSDictionary *configurationDictionary;
@property (nonatomic, readonly) SSVPlatformContext *platformContext;
@property (retain, nonatomic, getter=_scriptAppContext, setter=_setScriptAppContext:) IKAppContext *_scriptAppContext;
@property (nonatomic, readonly) NSArray *navigationHistory;
@property (nonatomic, readonly) SUClientInterface *clientInterface;
@property (nonatomic) long long userInterfaceIdiomOverride;
@property (nonatomic, readonly) NSString *storeFrontIdentifier;
@property (nonatomic, readonly) SSURLBag *URLBag;
@property (copy, nonatomic) NSString *metricsConfigurationIdentifier;
@property (copy, nonatomic) SKUIURL *purchaseReferrerURL;
@property (retain, nonatomic) SSUpdatableAssetController *updatableAssetController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultContext;
+ (id)_cachePath;
+ (id)localizedStringForKey:(id)arg1 inBundles:(id)arg2 inTable:(id)arg3;
+ (id)localizedStringForKey:(id)arg1 inBundles:(id)arg2;
+ (id)_fallbackConfigurationDictionary;
+ (id)_cachePathForStoreFrontIdentifier:(id)arg1;
+ (id)_configurationDictionaryWithBagDictionary:(id)arg1;

- (void)dealloc;
- (id)localizedStringForKey:(id)arg1;
- (id)valueForConfigurationKey:(id)arg1;
- (void)_setAdditionalPurchaseParameters:(id)arg1;
- (void)_setPurchaseAffiliateIdentifier:(id)arg1;
- (void)_setPurchaseURLBagType:(long long)arg1;
- (void)setMetricsPageContext:(id)arg1 forViewController:(id)arg2;
- (id)initWithConfigurationDictionary:(id)arg1;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (void)clientInterface:(id)arg1 dispatchOnPageResponseWithData:(id)arg2 response:(id)arg3;
- (void)clientInterface:(id)arg1 dispatchXEvent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)localizedStringForKey:(id)arg1 inTable:(id)arg2;
- (void)customizePurchase:(id)arg1;
- (void)customizeSoftwarePurchase:(id)arg1;
- (void)sendApplicationDidEnterBackground;
- (void)sendApplicationWillEnterForeground;
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;
- (void)sendAppPreviewStateChanged:(_Bool)arg1;
- (void)sendApplicationWindowSizeDidUpdate:(struct CGSize)arg1;
- (id)previewViewControllerForViewElement:(id)arg1;
- (void)getDefaultMetricsControllerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)metricsPageContextForViewController:(id)arg1;
- (void)sendOnXEventWithDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)newLoadStoreURLOperationWithURL:(id)arg1;
- (id)existingBagValueForKey:(id)arg1;
- (_Bool)shouldForceTransientSearchControllerBahavior;
- (id)additionalLeftBarButtonItemForDocumentContainerViewController:(id)arg1;
- (id)additionalRightBarButtonItemForDocumentContainerViewController:(id)arg1;
- (id)documentViewControllerForTemplateViewElement:(id)arg1;
- (id)newLegacyStorePageViewControllerForURLResponse:(id)arg1;
- (id)localizedAlertWithError:(id)arg1;
- (id)additionalLeftBarButtonItemForViewController:(id)arg1;
- (id)additionalRightBarButtonItemForViewController:(id)arg1;
- (_Bool)storeViewController:(id)arg1 shouldDisplayDefaultDarButton:(long long)arg2;
- (long long)tabBarStyleForWidth:(double)arg1;
- (void)_setValue:(id)arg1 forConfigurationKey:(id)arg2;
- (id)newLoadStoreURLOperationWithURLRequest:(id)arg1;
- (id)modalDocumentViewControllerForDocument:(id)arg1 options:(id)arg2;
- (id)_navigationHistory;
- (id)SAPSessionForVersion:(long long)arg1;
- (void)pushNavigationHistoryPageIdentifier:(id)arg1;
- (_Bool)supportsRenderingVersion:(unsigned int)arg1;
- (id)tabBarItemsForStyle:(long long)arg1;
- (void)loadValueForConfigurationKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
