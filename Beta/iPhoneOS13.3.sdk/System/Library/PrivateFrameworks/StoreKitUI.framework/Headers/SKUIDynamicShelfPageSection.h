/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, SKUIDynamicPageSectionIndexMapper, SKUIShelfPageComponent, SKUIShelfPageSectionConfiguration, SKUIShelfViewElement, SKUIViewElementLayoutContext, SKUIViewElementTextLayoutCache;

@protocol SKUIDynamicShelfViewElement, SKUIEntityProviding, SKUIScrollViewDelegateObserver;

__attribute__((visibility("hidden")))
@interface SKUIDynamicShelfPageSection : SKUIStorePageSection <Swift>

{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUIShelfPageSectionConfiguration *_configuration;
    SKUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;
    SKUIShelfViewElement<SKUIDynamicShelfViewElement> *_dynamicShelfViewElement;
    id <SKUIEntityProviding> _entityProvider;
    SKUIViewElementTextLayoutCache *_labelLayoutCache;
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
- (void)setSectionIndex:(long long)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithPageComponent:(id)arg1 configuration:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (void)_reloadViewElementProperties;
- (long long)applyUpdateType:(long long)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)deselectItemsAnimated:(_Bool)arg1;
- (void)invalidateCachedLayoutInformation;
- (id)relevantEntityProviders;
- (struct UIEdgeInsets)sectionContentInset;
- (void)setTopSection:(_Bool)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)willHideInContext:(id)arg1;
- (id)_viewElementForEntityAtGlobalIndex:(long long)arg1;
- (id)_normalizedShelfItemIndexPathFromActualIndexPath:(id)arg1;
- (id)shelfPageSectionConfiguration:(id)arg1 viewElementAtIndex:(long long)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (long long)numberOfCells;
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 withClickInfo:(id)arg3 forItemAtIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;

@end
