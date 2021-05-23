/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class IKViewElementStyle, SKUIShelfLayoutData, SKUIStorePageSectionContext, SKUIViewElementLayoutContext, UICollectionView, UIColor;

@protocol SKUIShelfPageSectionConfigurationDataSource, UICollectionViewDataSource, UICollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIShelfPageSectionConfiguration : NSObject

{
    long long _lockupType;
    UICollectionView *_shelfCollectionView;
    _Bool _needsShelfCollectionViewReload;
    _Bool _needsShelfCollectionViewLayout;
    _Bool _rendersWithParallax;
    _Bool _rendersWithPerspective;
    _Bool _topSection;
    _Bool _wantsZoomingShelfLayout;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    id <SKUIShelfPageSectionConfigurationDataSource> _dataSource;
    SKUIStorePageSectionContext *_pageSectionContext;
    long long _sectionIndex;
    UIColor *_shelfCollectionViewBackgroundColor;
    id <UICollectionViewDataSource> _shelfCollectionViewDataSource;
    id <UICollectionViewDelegate> _shelfCollectionViewDelegate;
    SKUIShelfLayoutData *_shelfLayoutData;
    IKViewElementStyle *_shelfViewElementStyle;
    double _zoomingShelfLayoutFocusedItemHorizontalCenterOffset;
    double _zoomingShelfLayoutInterItemSpacing;
    double _zoomingShelfLayoutItemWidth;
    double _zoomingShelfLayoutScaledItemWidth;
}

@property (retain, nonatomic) SKUIViewElementLayoutContext *cellLayoutContext;
@property (weak, nonatomic) id <SKUIShelfPageSectionConfigurationDataSource> dataSource;
@property (nonatomic, readonly) UICollectionView *existingShelfCollectionView;
@property (nonatomic) _Bool needsShelfCollectionViewReload;
@property (nonatomic) _Bool needsShelfCollectionViewLayout;
@property (nonatomic, readonly) unsigned long long numberOfIterations;
@property (retain, nonatomic) SKUIStorePageSectionContext *pageSectionContext;
@property (nonatomic) _Bool rendersWithParallax;
@property (nonatomic) _Bool rendersWithPerspective;
@property (nonatomic) long long sectionIndex;
@property (nonatomic, readonly) UICollectionView *shelfCollectionView;
@property (retain, nonatomic) UIColor *shelfCollectionViewBackgroundColor;
@property (nonatomic) id <UICollectionViewDataSource> shelfCollectionViewDataSource;
@property (nonatomic) id <UICollectionViewDelegate> shelfCollectionViewDelegate;
@property (nonatomic, readonly) SKUIShelfLayoutData *shelfLayoutData;
@property (retain, nonatomic) IKViewElementStyle *shelfViewElementStyle;
@property (nonatomic, getter=isTopSection) _Bool topSection;
@property (nonatomic, readonly) _Bool wantsZoomingShelfLayout;
@property (nonatomic, readonly) double zoomingShelfLayoutFocusedItemHorizontalCenterOffset;
@property (nonatomic, readonly) double zoomingShelfLayoutInterItemSpacing;
@property (nonatomic, readonly) double zoomingShelfLayoutItemWidth;
@property (nonatomic, readonly) double zoomingShelfLayoutScaledItemWidth;

- (void)scrollViewDidScroll:(id)arg1;
- (id)backgroundColorForShelfViewElement:(id)arg1;
- (id)cellForShelfViewElement:(id)arg1 indexPath:(id)arg2;
- (struct CGSize)cellSizeForShelfViewElement:(id)arg1 indexPath:(id)arg2 numberOfShelfItems:(long long)arg3;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (long long)numberOfSectionCells;
- (struct UIEdgeInsets)sectionContentInsetAdjustedFromValue:(struct UIEdgeInsets)arg1 forShelfViewElement:(id)arg2 withSectionIndex:(long long)arg3;
- (void)registerReusableClassesForCollectionView:(id)arg1;
- (void)reloadShelfLayoutDataForShelfViewElement:(id)arg1 withShelfItemViewElements:(id)arg2 requestCellLayouts:(_Bool)arg3 numberOfShelfItems:(long long)arg4;
- (_Bool)supportsDuplicateShelfItems;
- (id)cellForShelfItemViewElement:(id)arg1 indexPath:(id)arg2;
- (unsigned long long)numberOfCellsForNumberOfShelfItems:(unsigned long long)arg1;
- (void)shelfItemsCollectionView:(id)arg1 willApplyLayoutAttributes:(id)arg2 forViewElement:(id)arg3 withItemIndex:(long long)arg4;
- (id)normalizedShelfItemIndexPathFromActualIndexPath:(id)arg1 numberOfShelfItems:(unsigned long long)arg2;
- (void)reloadLockupTypeForShelfViewElement:(id)arg1;
- (id)effectiveViewElementForShelfItemViewElement:(id)arg1;
- (id)actualIndexPathOfShelfItemClosestToVisibleBoundsForNormalizedIndexPath:(id)arg1 numberOfShelfItems:(unsigned long long)arg2;
- (_Bool)prefetchResourcesForShelfItemViewElement:(id)arg1 reason:(long long)arg2;
- (long long)lockupTypeForLockup:(id)arg1;
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (id)_styledShelfCollectionViewLayoutForExistingLayout:(id)arg1;
- (void)_updateShelfLayoutDataContentInset;
- (double)_perspectiveHeightForContentSize:(double)arg1;
- (id)_reloadShelfLayoutDataWithNumberOfShelfItems:(long long)arg1;
- (Class)_cellClassForEffectiveShelfItemViewElement:(id)arg1;
- (double)_columnSpacingForShelfItemViewElements:(id)arg1;
- (id)_shelfItemViewElementAtIndex:(long long)arg1;
- (void)requestCellLayoutForViewElement:(id)arg1 withColumnWidth:(double)arg2;
- (Class)_lockupCellClassWithLockup:(id)arg1;

@end
