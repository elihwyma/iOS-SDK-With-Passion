/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class IKColor, NSArray, NSIndexPath, NSSet, NSString, SKUIPageComponent, SKUIProductPageOverlayController, SKUIStorePageSectionContext;

@interface SKUIStorePageSection : NSObject

{
    _Bool _bottomSection;
    SKUIPageComponent *_component;
    SKUIStorePageSectionContext *_context;
    _Bool _hasValidRelevantEntityProviders;
    SKUIProductPageOverlayController *_overlayController;
    NSSet *_relevantEntityProviders;
    long long _sectionIndex;
    _Bool _topSection;
    IKColor *_backgroundColorForSection;
    NSArray *_indexPathsForBackgroundItems;
}

@property (nonatomic, readonly) long long defaultItemPinningStyle;
@property (nonatomic, readonly) IKColor *backgroundColorForSection;
@property (nonatomic, readonly) _Bool fitsToHeight;
@property (nonatomic, readonly) NSArray *indexPathsForBackgroundItems;
@property (nonatomic, readonly) NSArray *indexPathsForPinningItems;
@property (nonatomic, readonly) long long numberOfCells;
@property (nonatomic, readonly) struct CGSize preferredContentSize;
@property (nonatomic, readonly) struct UIEdgeInsets sectionContentInset;
@property (copy, nonatomic, readonly) NSSet *relevantEntityProviders;
@property (nonatomic, readonly) NSIndexPath *firstAppearanceIndexPath;
@property (nonatomic, readonly) SKUIPageComponent *pageComponent;
@property (nonatomic, readonly) SKUIStorePageSectionContext *context;
@property (nonatomic) long long sectionIndex;
@property (nonatomic, getter=isBottomSection) _Bool bottomSection;
@property (nonatomic, getter=isTopSection) _Bool topSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_setContext:(id)arg1;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)initWithPageComponent:(id)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)deselectItemsAnimated:(_Bool)arg1;
- (void)invalidateCachedLayoutInformation;
- (void)willAppearInContext:(id)arg1;
- (void)willHideInContext:(id)arg1;
- (void)collectionViewDidConfirmButtonElement:(id)arg1 withClickInfo:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (long long)updateWithContext:(id)arg1 pageComponent:(id)arg2;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)collectionViewDidLongPressItemAtIndexPath:(id)arg1;
- (_Bool)requestLayoutWithReloadReason:(long long)arg1;
- (void)showPageWithLink:(id)arg1;
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;
- (void)reloadVisibleCellsWithReason:(long long)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (struct UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1;
- (long long)pinningStyleForItemAtIndexPath:(id)arg1;
- (long long)pinningGroupForItemAtIndexPath:(id)arg1;
- (long long)pinningTransitionStyleForItemAtIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)registerContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)unregisterContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (_Bool)performDefaultActionForViewElement:(id)arg1;
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;
- (void)collectionViewDidTapVideoAtIndexPath:(id)arg1;
- (void)collectionViewWillScrollToOffset:(struct CGPoint)arg1 visibleRange:(struct SKUIIndexPathRange)arg2;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;
- (void)didAppearInContext:(id)arg1;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)containsElementWithIndexBarEntryID:(id)arg1;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;
- (id)_clickEventWithElementName:(id)arg1 index:(long long)arg2 fieldData:(id)arg3;
- (id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (long long)_itemPinningStyle;
- (void)playVideoForElement:(id)arg1;
- (void)showProductViewControllerWithItem:(id)arg1;
- (long long)_itemPinningGroup;
- (void)_recursivelyAddRelevantEntityProvidersForViewElement:(id)arg1 toSet:(id)arg2;
- (void)_sendXEventWithDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sendXEventWithItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sendXEventWithLink:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (id)clickEventWithMedia:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (struct _NSRange)itemRangeForIndexPathRange:(struct SKUIIndexPathRange)arg1;
- (id)performItemOfferActionForItem:(id)arg1;
- (void)playVideoWithURL:(id)arg1;

@end
