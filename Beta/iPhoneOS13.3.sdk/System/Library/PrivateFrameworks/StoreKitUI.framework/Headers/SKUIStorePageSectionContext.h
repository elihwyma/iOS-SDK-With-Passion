/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class SKUIClientContext, SKUIColorScheme, SKUIItemOfferButtonAppearance, SKUILayoutCache, SKUIMetricsController, SKUIMetricsImpressionSession, SKUIResourceLoader, SKUIStorePageSectionsViewController, UICollectionView, UIColor;

__attribute__((visibility("hidden")))
@interface SKUIStorePageSectionContext : NSObject

{
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;
    double _activePageWidth;
    UICollectionView *_collectionView;
    SKUIColorScheme *_colorScheme;
    long long _defaultPinningTransitionStyle;
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    double _landscapePageWidth;
    SKUIMetricsController *_metricsController;
    SKUIStorePageSectionsViewController *_parentViewController;
    UIColor *_placeholderColor;
    double _portraitPageWidth;
    SKUIResourceLoader *_resourceLoader;
    SKUILayoutCache *_textLayoutCache;
    long long _layoutStyle;
}

@property (nonatomic, readonly) SKUIMetricsImpressionSession *activeMetricsImpressionSession;
@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) SKUIColorScheme *colorScheme;
@property (nonatomic, readonly) UIColor *placeholderColor;
@property (nonatomic, readonly) long long defaultPinningTransitionStyle;
@property (nonatomic, readonly) SKUIItemOfferButtonAppearance *itemOfferButtonAppearance;
@property (nonatomic, readonly) double activePageWidth;
@property (nonatomic, readonly) double landscapePageWidth;
@property (nonatomic, readonly) double portraitPageWidth;
@property (nonatomic, readonly) double horizontalPadding;
@property (nonatomic, readonly) long long layoutStyle;
@property (nonatomic, readonly) SKUIMetricsController *metricsController;
@property (weak, nonatomic, readonly) SKUIStorePageSectionsViewController *parentViewController;
@property (nonatomic, readonly) SKUIResourceLoader *resourceLoader;
@property (nonatomic, readonly) SKUILayoutCache *textLayoutCache;

- (id)init;
- (void)_setCollectionView:(id)arg1;
- (void)_setParentViewController:(id)arg1;
- (void)_setTextLayoutCache:(id)arg1;
- (void)_setColorScheme:(id)arg1;
- (void)_setActiveMetricsImpressionSession:(id)arg1;
- (void)_setDefaultPinningTransitionStyle:(long long)arg1;
- (void)_setMetricsController:(id)arg1;
- (void)_setActivePageWidth:(double)arg1;
- (void)_setLayoutStyle:(long long)arg1;
- (void)_setResourceLoader:(id)arg1;
- (void)_setLandscapePageWidth:(double)arg1;
- (void)_setPortraitPageWidth:(double)arg1;

@end
