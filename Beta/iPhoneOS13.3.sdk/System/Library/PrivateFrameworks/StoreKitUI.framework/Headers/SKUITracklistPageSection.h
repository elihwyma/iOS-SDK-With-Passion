/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class NSString, SKUITracklistColumnData, SKUITracklistPageComponent, SKUIViewElementLayoutContext;

@protocol SKUIEntityProviding;

__attribute__((visibility("hidden")))
@interface SKUITracklistPageSection : SKUIStorePageSection

{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUITracklistColumnData *_columnData;
    id <SKUIEntityProviding> _entityProvider;
    long long _lastNeedsMoreCount;
}

@property (nonatomic, readonly) SKUITracklistPageComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)relevantEntityProviders;
- (struct UIEdgeInsets)sectionContentInset;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (_Bool)requestLayoutWithReloadReason:(long long)arg1;
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillScrollToOffset:(struct CGPoint)arg1 visibleRange:(struct SKUIIndexPathRange)arg2;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)firstAppearanceIndexPath;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_columnData;
- (void)_enumerateVisibleViewElementsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_reloadEntityProvider;
- (id)_viewElementForIndex:(long long)arg1;
- (void)_requestCellLayoutWithColumnData:(id)arg1;
- (double)_widthForButtonElements:(id)arg1;
- (id)_representativeStringForViewElement:(id)arg1;
- (_Bool)_isDynamicTracklist;

@end
