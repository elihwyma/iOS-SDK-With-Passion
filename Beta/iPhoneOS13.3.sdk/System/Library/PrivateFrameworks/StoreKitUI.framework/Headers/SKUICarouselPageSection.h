/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSIndexPath, NSObject, NSString, SKUICarouselPageComponent, SKUIMissingItemLoader, SKUIProgressIndicatorViewElement, SKUIViewElementLayoutContext, UICollectionView;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SKUICarouselPageSection : SKUIStorePageSection <Swift>

{
    UICollectionView *_carouselCollectionView;
    long long _cellCount;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    NSObject<OS_dispatch_source> *_cycleTimer;
    struct CGSize _itemSize;
    double _itemSpacing;
    SKUIMissingItemLoader *_missingItemLoader;
    NSArray *_modelObjects;
    _Bool _needsHeightCalculation;
    _Bool _needsReload;
    double _itemWidth;
    long long _progressIndicatorCellIndex;
    SKUIProgressIndicatorViewElement *_progressIndicatorElement;
    NSIndexPath *_reloadIndexPath;
}

@property (nonatomic, readonly) SKUICarouselPageComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (void)_reloadViewElementProperties;
- (long long)applyUpdateType:(long long)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)invalidateCachedLayoutInformation;
- (struct UIEdgeInsets)sectionContentInset;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)defaultItemPinningStyle;
- (void)collectionView:(id)arg1 carouselLayout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (_Bool)_indexPathIsProgressIndicator:(id)arg1;
- (long long)_currentPageIndex;
- (id)_carouselCollectionView;
- (void)_scrollToItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (double)_actualContentWidth;
- (void)_startCycleTimerIfNecessary;
- (Class)_cellClassForViewElement:(id)arg1;
- (void)_cancelCycleTimer;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (void)_reloadLegacySizing;
- (id)_dequeueCellForViewElement:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2;
- (_Bool)_isItemEnabledAtIndexPath:(id)arg1;
- (Class)_cellClassForLockup:(id)arg1;
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (id)_missingItemLoader;
- (struct CGSize)_legacyItemSize;
- (double)_legacyItemSpacing;
- (void)_fireCycleTimer;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;

@end
