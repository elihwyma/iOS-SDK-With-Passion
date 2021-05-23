/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewLayout.h>

@class HUQuickControlCollectionViewControllerLayoutOptions, HUQuickControlCollectionViewLayoutInfo, HUQuickControlGridLayoutManager, NSLayoutConstraint, NSMutableDictionary;

@interface HUQuickControlCollectionViewLayout : UICollectionViewLayout

{
    HUQuickControlCollectionViewControllerLayoutOptions *_layoutOptions;
    HUQuickControlGridLayoutManager *_layoutManager;
    NSLayoutConstraint *_heightConstraint;
    NSMutableDictionary *_cachedLayoutAttributesByIndexPath;
    NSMutableDictionary *_cachedSectionHeaderLayoutAttributes;
    HUQuickControlCollectionViewLayoutInfo *_layoutInfo;
    struct UIEdgeInsets _contentInset;
}

@property (nonatomic, readonly) NSMutableDictionary *cachedLayoutAttributesByIndexPath;
@property (nonatomic, readonly) NSMutableDictionary *cachedSectionHeaderLayoutAttributes;
@property (retain, nonatomic) HUQuickControlCollectionViewLayoutInfo *layoutInfo;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (retain, nonatomic) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions;
@property (retain, nonatomic) HUQuickControlGridLayoutManager *layoutManager;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;

+ (Class)layoutAttributesClass;

- (id)init;
- (id)delegate;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)_computeLayoutInfo;
- (void)_computeGridLayoutAttributesForLayoutInfo:(id)arg1;
- (id)_computeRowLayoutsForGridLayout:(id)arg1 gridLayoutSettings:(id)arg2;
- (id)_intrinsicSizeDescriptorForItemAtIndexPath:(id)arg1 itemSize:(unsigned long long)arg2;
- (id)_computeSizingLayoutInfo;
- (id)_computeRowLayoutOriginsFromLayoutDetails:(id)arg1 forSectionSettings:(id)arg2;

@end
