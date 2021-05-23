/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class NSMapTable, NSString, SKUIGallerySwooshViewController, SKUISwooshPageComponent;

__attribute__((visibility("hidden")))
@interface SKUIGallerySwooshPageSection : SKUIStorePageSection

{
    NSMapTable *_componentArtworkRequests;
    SKUIGallerySwooshViewController *_swooshViewController;
}

@property (nonatomic, readonly) SKUISwooshPageComponent *pageComponent;
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
- (void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2;
- (id)_swooshViewController;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2;
- (id)_newArtworkRequestWithArtwork:(id)arg1;
- (void)swoosh:(id)arg1 didChangePlaybackState:(long long)arg2 forItemAtIndex:(long long)arg3;

@end
