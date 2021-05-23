/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class NSString, SKUIRowComponent, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIRowViewElementPageSection : SKUIStorePageSection

{
    SKUIViewElementLayoutContext *_cellLayoutContext;
}

@property (nonatomic, readonly) SKUIRowComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (struct UIEdgeInsets)sectionContentInset;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (Class)_cellClassForViewElement:(id)arg1;
- (id)_firstChildForColumn:(id)arg1;
- (id)_reuseIdentifierForViewElement:(id)arg1;
- (struct UIEdgeInsets)_contentInsetForIndexPath:(id)arg1;
- (double)_interiorColumnSpacing;
- (double)_singleColumnWidth;
- (void)_enumerateViewElementsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_requestLayoutForCells;
- (Class)_cellClassForCardViewElement:(id)arg1;
- (Class)_cellClassForLockupViewElement:(id)arg1;
- (id)_reuseIdentifierForCardViewElement:(id)arg1;
- (id)_reuseIdentifierForLockupViewElement:(id)arg1;

@end
