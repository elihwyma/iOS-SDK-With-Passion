/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, SKUILockupSwooshArtworkLoader, SKUILockupSwooshViewController, SKUIMissingItemLoader, SKUIProductPageOverlayController, SKUISwooshPageComponent;

__attribute__((visibility("hidden")))
@interface SKUILockupSwooshPageSection : SKUIStorePageSection <Swift>

{
    SKUILockupSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUIProductPageOverlayController *_overlayController;
    long long _overlaySourceIndex;
    SKUILockupSwooshViewController *_swooshViewController;
}

@property (nonatomic, readonly) SKUISwooshPageComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;
- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (id)_missingItemLoader;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (id)_popSourceViewForOverlayController:(id)arg1;
- (void)setImage:(id)arg1 forRequest:(id)arg2;
- (id)_swooshViewController;
- (id)_artworkLoader;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 videoThumbnailForCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2;
- (void)swooshDidSelectSeeAll:(id)arg1;
- (void)_addImpressionForItemIndex:(long long)arg1 toSession:(id)arg2;
- (void)_showProductPageForItem:(id)arg1 index:(long long)arg2 animated:(_Bool)arg3;

@end
