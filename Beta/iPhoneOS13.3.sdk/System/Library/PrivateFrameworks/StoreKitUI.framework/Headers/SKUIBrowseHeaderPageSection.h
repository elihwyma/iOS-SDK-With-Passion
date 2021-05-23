/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIBrowseHeaderPageComponent;

__attribute__((visibility("hidden")))
@interface SKUIBrowseHeaderPageSection : SKUIStorePageSection

@property (nonatomic, readonly) SKUIBrowseHeaderPageComponent *pageComponent;

- (id)initWithPageComponent:(id)arg1;
- (struct UIEdgeInsets)sectionContentInset;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;

@end
