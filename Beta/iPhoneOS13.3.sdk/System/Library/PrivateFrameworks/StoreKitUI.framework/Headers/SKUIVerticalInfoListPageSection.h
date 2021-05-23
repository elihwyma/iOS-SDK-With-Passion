/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class NSMutableArray, NSString, SKUIInfoListViewElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIVerticalInfoListPageSection : SKUIStorePageSection

{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    double _columnHeight;
    NSMutableArray *_columns;
    double _columnWidth;
    SKUIInfoListViewElement *_infoList;
    long long _numberOfColumns;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (struct UIEdgeInsets)sectionContentInset;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (long long)numberOfCells;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_requestCellLayout;
- (struct UIEdgeInsets)_contentInsetForIndexPath:(id)arg1;
- (id)_reloadColumnDataIfNecessary;
- (void)_enumerateVisibleIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)_numberOfColumnsForWidth:(double)arg1;

@end
