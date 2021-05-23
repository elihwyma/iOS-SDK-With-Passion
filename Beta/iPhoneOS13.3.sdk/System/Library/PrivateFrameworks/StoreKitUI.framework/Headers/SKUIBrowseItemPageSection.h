/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIBrowseItemComponent, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIBrowseItemPageSection : SKUIStorePageSection

{
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIBrowseItemComponent *_component;
}

@property (nonatomic, readonly) SKUIBrowseItemComponent *pageComponent;

- (id)initWithPageComponent:(id)arg1;
- (struct UIEdgeInsets)sectionContentInset;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (id)_imageForImageViewElement:(id)arg1 styleColor:(id)arg2;

@end
