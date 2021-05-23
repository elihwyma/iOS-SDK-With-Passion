/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetCollectionViewLayout.h>

@interface PXMessagesCMMSuggestionsCollectionGadgetLayout : PXGadgetCollectionViewLayout

{
    long long _numberOfItems;
    long long _numberOfColumns;
    struct UIEdgeInsets _margins;
    struct CGSize _itemSize;
    struct CGSize _interitemSpacing;
    struct CGSize _contentSize;
    double _itemAspectRatio;
    struct CGSize _containerSizeOverride;
}

@property (nonatomic) struct CGSize containerSizeOverride;
@property (nonatomic) double itemAspectRatio;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (long long)scrollDirection;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)_fetchItemsInfoForRect:(struct CGRect)arg1;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;
- (struct CGRect)_frameForItemAtIndex:(long long)arg1;

@end
