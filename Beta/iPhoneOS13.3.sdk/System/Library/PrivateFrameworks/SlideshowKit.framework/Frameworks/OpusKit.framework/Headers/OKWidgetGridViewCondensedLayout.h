/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;

@interface OKWidgetGridViewCondensedLayout : UICollectionViewLayout

{
    float _spacingRatio;
    unsigned long long _numberOfRows;
    _Bool _snappingEnabled;
    NSMutableArray *_attributes;
    double _largestWidth;
    struct CGSize _contentSize;
    struct CGRect _oldBounds;
}

@property float spacingRatio;
@property unsigned long long numberOfRows;
@property _Bool snappingEnabled;

- (id)init;
- (void)dealloc;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (void)finalizeAnimatedBoundsChange;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
- (_Bool)shouldUpdateVisibleCellLayoutAttributes;

@end
