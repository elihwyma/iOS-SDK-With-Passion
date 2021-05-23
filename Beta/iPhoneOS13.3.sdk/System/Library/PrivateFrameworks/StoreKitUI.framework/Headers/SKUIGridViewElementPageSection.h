/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class IKColor, NSArray, NSString, SKUIGridComponent, SKUIGridViewElementPageSectionConfiguration, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIGridViewElementPageSection : SKUIStorePageSection

{
    IKColor *_backgroundColor;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    double _cellPaddingInteriorHorizontal;
    double _cellPaddingLeftEdgeHorizontal;
    double _cellPaddingRightEdgeHorizontal;
    SKUIGridViewElementPageSectionConfiguration *_configuration;
    _Bool _editing;
    NSArray *_indexPathsForBackgroundItems;
    long long _lastNeedsMoreCount;
    NSArray *_viewElements;
}

@property (nonatomic, readonly) SKUIGridComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isEditing) _Bool editing;

- (void)dealloc;
- (void)_setContext:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (void)_reloadViewElementProperties;
- (long long)applyUpdateType:(long long)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)deselectItemsAnimated:(_Bool)arg1;
- (struct UIEdgeInsets)sectionContentInset;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)collectionViewDidLongPressItemAtIndexPath:(id)arg1;
- (_Bool)requestLayoutWithReloadReason:(long long)arg1;
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;
- (void)reloadVisibleCellsWithReason:(long long)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (id)backgroundColorForSection;
- (id)indexPathsForBackgroundItems;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillScrollToOffset:(struct CGPoint)arg1 visibleRange:(struct SKUIIndexPathRange)arg2;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;
- (void)_resetLayoutProperties;
- (id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2;
- (void)_requestLayoutForCells;
- (_Bool)_containsOnlyShelfElements;
- (void)_enumerateVisibleViewElementsUsingBlock:(CDUnknownBlockType)arg1;

@end
