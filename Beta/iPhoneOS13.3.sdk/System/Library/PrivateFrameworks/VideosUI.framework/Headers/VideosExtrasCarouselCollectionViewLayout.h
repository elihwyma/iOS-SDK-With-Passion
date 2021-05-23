/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VideosExtrasCarouselCollectionViewLayout : UICollectionViewLayout

{
    NSDictionary *_cachedLayoutAttributes;
    long long _indexOfVisibleItemForBoundsChange;
    struct CGSize _cachedCollectionViewContentSize;
}

@property (retain, nonatomic) NSDictionary *cachedLayoutAttributes;
@property (nonatomic) struct CGSize cachedCollectionViewContentSize;
@property (nonatomic) long long indexOfVisibleItemForBoundsChange;

- (id)init;
- (double)itemWidth;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (double)_spaceBetweenItems;
- (double)_neighboringItemVisibleWidth;
- (long long)_indexOfVisibleItemForContentOffset:(struct CGPoint)arg1 collectionViewBounds:(struct CGRect)arg2;
- (struct CGPoint)_contentOffsetForItemAtIndex:(long long)arg1 collectionViewBounds:(struct CGRect)arg2;
- (void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(_Bool)arg2;
- (unsigned long long)indexOfVisibleItem;
- (double)_spaceBetweenItemsForCollectionViewBounds:(struct CGRect)arg1;
- (void)setIndexOfVisibleItem:(unsigned long long)arg1;

@end
