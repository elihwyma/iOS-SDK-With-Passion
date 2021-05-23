/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class MPUBorderDrawingCache, NSCache, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, SKUIBadgeTextAttachmentLoader, SKUIClientContext, SKUIItemOfferButton, SKUIResourceLoader, SKUIViewElementTextLayoutCache, UIColor, UIViewController;

@protocol SKUIArtworkRequestDelegate;

__attribute__((visibility("hidden")))
@interface SKUIViewElementLayoutContext : NSObject

{
    NSMutableDictionary *_aggregateValues;
    SKUIBadgeTextAttachmentLoader *_badgeImageLoader;
    MPUBorderDrawingCache *_borderDrawingCache;
    NSMapTable *_editorialLayouts;
    NSHashTable *_expandedEditorialLayouts;
    SKUIItemOfferButton *_itemOfferButton;
    NSMutableDictionary *_itemOfferButtonSizes;
    struct UIEdgeInsets _largeScreenElementPadding;
    NSMutableSet *_observedArtworkRequestIDs;
    NSMapTable *_blurColors;
    double _activePageWidth;
    id <SKUIArtworkRequestDelegate> _artworkRequestDelegate;
    SKUIClientContext *_clientContext;
    unsigned long long _containerViewElementType;
    SKUIViewElementTextLayoutCache *_labelLayoutCache;
    UIViewController *_parentViewController;
    SKUIResourceLoader *_resourceLoader;
    UIColor *_placeholderColor;
    UIColor *_tintColor;
    NSString *_backdropGroupName;
    double _displayScale;
}

@property (nonatomic, readonly) NSCache *placeholderImageCache;
@property (nonatomic) double activePageWidth;
@property (weak, nonatomic) id <SKUIArtworkRequestDelegate> artworkRequestDelegate;
@property (nonatomic, readonly) SKUIBadgeTextAttachmentLoader *badgeImageLoader;
@property (nonatomic, readonly) MPUBorderDrawingCache *borderDrawingCache;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic) unsigned long long containerViewElementType;
@property (retain, nonatomic) SKUIViewElementTextLayoutCache *labelLayoutCache;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic, readonly) struct UIEdgeInsets largeScreenElementPadding;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) double displayScale;

+ (double)itemWidthForElement:(id)arg1 withDefaultWidth:(double)arg2 fitWidth:(double)arg3;
+ (double)_calculateValueFromString:(id)arg1 withDefault:(double)arg2 coefficent:(double)arg3;

- (id)init;
- (void)dealloc;
- (id)aggregateValueForKey:(id)arg1;
- (id)imageResourceCacheKeyForArtwork:(id)arg1;
- (id)requestIdentifierForArtwork:(id)arg1;
- (_Bool)loadImageForArtwork:(id)arg1 dataConsumer:(id)arg2 reason:(long long)arg3;
- (id)placeholderImageForSize:(struct CGSize)arg1;
- (id)requestIdentifierForViewElement:(id)arg1;
- (_Bool)loadImageForImageElement:(id)arg1 reason:(long long)arg2;
- (struct CGSize)sizeForViewElement:(id)arg1 width:(double)arg2;
- (id)imageResourceCacheKeyForViewElement:(id)arg1;
- (id)requestIdentifierForResourceCacheKey:(id)arg1;
- (void)setAggregateValue:(id)arg1 forKey:(id)arg2;
- (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2;
- (double)defaultItemWidthForViewElement:(id)arg1;
- (struct CGSize)sizeForImageElement:(id)arg1;
- (id)textPropertiesForViewElement:(id)arg1 width:(double)arg2;
- (id)initWithStorePageSectionContext:(id)arg1 previousLayoutContext:(id)arg2;
- (_Bool)loadImageForArtwork:(id)arg1 reason:(long long)arg2;
- (void)_artworkRequestDidLoadImageNotification:(id)arg1;
- (void)invalidateAllEditorialLayouts;
- (long long)maxWidthForElement:(id)arg1 withDefaultWidth:(long long)arg2;
- (id)editorialLayoutForLabelElement:(id)arg1 width:(double)arg2;
- (id)initWithStorePageSectionContext:(id)arg1;
- (_Bool)loadTemplatedImageForBadgeElement:(id)arg1 reason:(long long)arg2;
- (_Bool)isEditorialLayoutExpanded:(id)arg1;
- (id)transientRequestIdentifierForViewElement:(id)arg1;
- (id)dataConsumerForImageElement:(id)arg1;
- (_Bool)loadImageForImageElement:(id)arg1 reason:(long long)arg2 dataConsumer:(id)arg3;
- (id)placeholderImageForImageElement:(id)arg1 dataConsumer:(id)arg2;
- (id)blurColorForCacheKey:(id)arg1;
- (void)setBlurColor:(id)arg1 cacheKey:(id)arg2;
- (_Bool)loadImageForBadgeElement:(id)arg1 reason:(long long)arg2;
- (id)_initSKUIViewElementLayoutContext;
- (void)setLargeScreenElementPaddingFromContext:(id)arg1;
- (_Bool)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4;
- (struct CGSize)_sizeForImageElement:(id)arg1 applyTransform:(_Bool)arg2;
- (struct CGSize)sizeForBadgeElement:(id)arg1;
- (struct CGSize)sizeForItemOfferButton:(id)arg1;
- (void)expandEditorialForLabelElement:(id)arg1;

@end
