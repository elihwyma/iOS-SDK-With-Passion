/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;

@protocol SFCollectionViewDelegateLayout;

__attribute__((visibility("hidden")))
@interface SFCollectionViewLayout : UICollectionViewLayout

{
    id <SFCollectionViewDelegateLayout> _fallbackDelegate;
    double _evaluatedHorizontalItemOffset;
    NSArray *_preparedLayoutAttributes;
    NSArray *_preparedUpdateItems;
    struct CGSize _evaluatedItemSize;
    struct CGSize _evaluatedContentSize;
    struct UIEdgeInsets _evaluatedInset;
}

@property (nonatomic) struct UIEdgeInsets evaluatedInset;
@property (nonatomic) struct CGSize evaluatedItemSize;
@property (nonatomic) struct CGSize evaluatedContentSize;
@property (nonatomic) double evaluatedHorizontalItemOffset;
@property (copy, nonatomic) NSArray *preparedLayoutAttributes;
@property (copy, nonatomic) NSArray *preparedUpdateItems;
@property (weak, nonatomic) id <SFCollectionViewDelegateLayout> fallbackDelegate;

- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (_Bool)_shouldScrollToContentBeginningInRightToLeft;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)_indexPathsForItemsInSection:(long long)arg1;
- (struct CGSize)_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1;
- (struct UIEdgeInsets)_evaluateInsetForSectionAtIndex:(long long)arg1;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (_Bool)shouldReverseLayoutDirection;
- (void)invalidateGroupViewLayoutAnimated:(_Bool)arg1;
- (void)calculateLayoutValuesForIndexPaths:(id)arg1 containerWidth:(double)arg2;
- (double)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize)arg1 inset:(struct UIEdgeInsets)arg2 containerWidth:(double)arg3 offscreenPeekInFactor:(float)arg4;
- (struct CGPoint)firstItemCenterForContainerWidth:(double)arg1;

@end
