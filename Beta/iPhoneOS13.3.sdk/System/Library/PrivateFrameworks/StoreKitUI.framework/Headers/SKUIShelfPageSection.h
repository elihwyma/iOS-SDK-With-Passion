/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSString, SKUIShelfPageComponent, SKUIShelfPageSectionConfiguration, SKUIShelfViewElement, SKUIViewElementLayoutContext, SKUIViewElementSlideshowController;

@protocol SKUIScrollViewDelegateObserver;

__attribute__((visibility("hidden")))
@interface SKUIShelfPageSection : SKUIStorePageSection <Swift>

{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUIShelfPageSectionConfiguration *_configuration;
    long long _lastNeedsMoreCount;
    SKUIShelfViewElement *_shelfViewElement;
    SKUIViewElementSlideshowController *_slideshowController;
    NSArray *_viewElements;
    id <SKUIScrollViewDelegateObserver> _scrollViewDelegateObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SKUIScrollViewDelegateObserver> scrollViewDelegateObserver;
@property (nonatomic, readonly) SKUIShelfPageSectionConfiguration *configuration;
@property (nonatomic, readonly) SKUIShelfPageComponent *pageComponent;

- (void)dealloc;
- (void)_setContext:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithPageComponent:(id)arg1 configuration:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (void)_reloadViewElementProperties;
- (long long)applyUpdateType:(long long)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)deselectItemsAnimated:(_Bool)arg1;
- (void)invalidateCachedLayoutInformation;
- (struct UIEdgeInsets)sectionContentInset;
- (void)setTopSection:(_Bool)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)_normalizedShelfItemIndexPathFromActualIndexPath:(id)arg1;
- (id)shelfPageSectionConfiguration:(id)arg1 viewElementAtIndex:(long long)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (long long)numberOfCells;
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 withClickInfo:(id)arg3 forItemAtIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (void)viewElementSlideshowWillDismiss:(id)arg1;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_performDefaultSelectActionForEffectiveViewElement:(id)arg1;

@end
