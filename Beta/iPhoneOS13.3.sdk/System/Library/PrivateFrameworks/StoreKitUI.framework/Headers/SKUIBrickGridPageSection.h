/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class NSMapTable, NSString, SKUIGridComponent, SKUIMissingItemLoader, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIBrickGridPageSection : SKUIStorePageSection

{
    NSMapTable *_artworkRequests;
    double _baseHeight;
    double _columnWidth;
    NSMapTable *_editorialLayouts;
    SKUIMissingItemLoader *_missingItemLoader;
    long long _numberOfColumns;
    double _paddingHorizontal;
    double _paddingTop;
    UIImage *_placeholderImage;
}

@property (nonatomic, readonly) SKUIGridComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (id)_missingItemLoader;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (struct UIEdgeInsets)_contentInsetsForColumnIndex:(long long)arg1 rowWidth:(double)arg2;
- (id)_editorialLayoutForBrick:(id)arg1;
- (void)_loadArtworkForBrick:(id)arg1 artworkLoader:(id)arg2 reason:(long long)arg3;
- (void)_enumerateVisibleBricksUsingBlock:(CDUnknownBlockType)arg1;

@end
