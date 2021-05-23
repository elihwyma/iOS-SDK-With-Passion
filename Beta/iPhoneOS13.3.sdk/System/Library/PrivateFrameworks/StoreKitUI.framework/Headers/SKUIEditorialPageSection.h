/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIColorScheme, SKUIEditorialComponent, SKUIEditorialLayout, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIEditorialPageSection : SKUIStorePageSection

{
    SKUIColorScheme *_colorScheme;
    SKUIEditorialLayout *_editorialLayout;
    _Bool _hasValidColorScheme;
    _Bool _isExpanded;
    SKUIViewElementLayoutContext *_layoutContext;
}

@property (nonatomic, readonly) SKUIEditorialComponent *pageComponent;

- (id)_colorScheme;
- (id)initWithPageComponent:(id)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)_editorialLayout;

@end
