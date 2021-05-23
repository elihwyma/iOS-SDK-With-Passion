/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, SKUIBrickSwooshArtworkLoader, SKUIBrickSwooshViewController, SKUIMissingItemLoader, SKUISwooshPageComponent;

@interface SKUIBrickSwooshPageSection : SKUIStorePageSection <Swift>

{
    SKUIBrickSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUIBrickSwooshViewController *_swooshViewController;
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
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2;
- (id)_missingItemLoader;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (id)_swooshViewController;
- (id)_artworkLoader;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2;

@end
