/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionFocusingLayout.h>

@class NSDictionary;

@interface GKCollectionHorizontalLayout : GKCollectionFocusingLayout

{
    _Bool _centersItemsInExcessSpace;
    _Bool _alignItemsToTop;
    double _extraSectionHeaderToCellSpace;
    NSDictionary *_itemAttributes;
    NSDictionary *_headerAttributes;
    double _scrollStepIntegral;
}

@property (retain, nonatomic) NSDictionary *itemAttributes;
@property (retain, nonatomic) NSDictionary *headerAttributes;
@property (nonatomic) double scrollStepIntegral;
@property (nonatomic) _Bool centersItemsInExcessSpace;
@property (nonatomic) _Bool alignItemsToTop;
@property (nonatomic) double extraSectionHeaderToCellSpace;

- (void)dealloc;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (double)maxHeaderHeight;
- (long long)lastValidSection;
- (void)applyDefaults;
- (long long)firstValidSection;

@end
