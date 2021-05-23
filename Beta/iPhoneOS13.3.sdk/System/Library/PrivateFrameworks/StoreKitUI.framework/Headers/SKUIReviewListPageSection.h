/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class NSMutableDictionary, SKUIReviewListPageComponent, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIReviewListPageSection : SKUIStorePageSection

{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    NSMutableDictionary *_contextActionsRegistration;
}

@property (copy, nonatomic) NSMutableDictionary *contextActionsRegistration;
@property (nonatomic, readonly) SKUIReviewListPageComponent *pageComponent;

- (id)initWithPageComponent:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (long long)numberOfCells;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)registerContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)unregisterContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_requestCellLayout;
- (struct UIEdgeInsets)_contentInsetForReviewIndex:(long long)arg1;
- (id)_contextActionRegistrationKeyWithCell:(id)arg1 indexPath:(id)arg2;

@end
