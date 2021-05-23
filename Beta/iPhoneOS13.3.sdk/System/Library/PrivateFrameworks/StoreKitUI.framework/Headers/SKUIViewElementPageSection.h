/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class NSString, SKUICollectionViewCell, SKUIViewElementLayoutContext;

@protocol SKUIViewElementView;

__attribute__((visibility("hidden")))
@interface SKUIViewElementPageSection : SKUIStorePageSection

{
    Class _cellClass;
    struct UIEdgeInsets _cellContentInset;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    double _firstSectionTopInset;
    SKUICollectionViewCell<SKUIViewElementView> *_lastCell;
    _Bool _rendersWithPerspective;
    NSString *_reuseIdentifier;
    double _sectionBottomInset;
}

@property (nonatomic, readonly) double defaultVerticalInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)preferredContentSize;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (void)_reloadViewElementProperties;
- (long long)applyUpdateType:(long long)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (struct UIEdgeInsets)sectionContentInset;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (struct UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (long long)defaultItemPinningStyle;
- (void)_requestCellLayout;
- (_Bool)_showsImageReflection;
- (_Bool)_stretchesToFitCollectionViewBounds;

@end
