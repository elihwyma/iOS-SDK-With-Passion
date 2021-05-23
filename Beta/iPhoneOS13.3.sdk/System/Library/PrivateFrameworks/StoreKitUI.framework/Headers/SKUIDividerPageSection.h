/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class NSString, SKUIDividerPageComponent, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIDividerPageSection : SKUIStorePageSection

{
    SKUIViewElementLayoutContext *_layoutContext;
}

@property (nonatomic, readonly) SKUIDividerPageComponent *pageComponent;
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
- (long long)numberOfCells;
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_enumerateVisibleCellsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_requestCellLayout;

@end
