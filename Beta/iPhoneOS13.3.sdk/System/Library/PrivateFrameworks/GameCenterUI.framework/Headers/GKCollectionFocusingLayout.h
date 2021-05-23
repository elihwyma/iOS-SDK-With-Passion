/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath, UICollectionViewLayoutAttributes;

@interface GKCollectionFocusingLayout : UICollectionViewFlowLayout

{
    double _topHeaderHeight;
    double _focusScaleFactor;
    NSIndexPath *_focusedIndexPath;
    double _focusHeaderOffset;
    double _headerToItemSpacing;
    UICollectionViewLayoutAttributes *_topHeaderAttributes;
}

@property (nonatomic) double topHeaderHeight;
@property (nonatomic) double focusScaleFactor;
@property (retain, nonatomic) NSIndexPath *focusedIndexPath;
@property (nonatomic) double focusHeaderOffset;
@property (nonatomic) double headerToItemSpacing;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *topHeaderAttributes;

- (id)init;
- (void)dealloc;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)awakeFromNib;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct UIEdgeInsets)sectionInset;
- (_Bool)shouldUpdateVisibleCellLayoutAttributes;
- (struct CGSize)sizeForHeaderInSection:(long long)arg1;
- (double)minimumInteritemSpacingForSectionAtIndex:(long long)arg1;
- (double)minimumLineSpacingForSectionAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (struct CGSize)sizeForFooterInSection:(long long)arg1;
- (id)focusAdjustedAttributesForItemAttributes:(id)arg1;
- (id)focusAdjustedAttributesForSupplementaryViewAttributes:(id)arg1;
- (void)applyDefaults;
- (void)_updateFocusOffsetsForSectionHeadersWithAnimationCoordinator:(id)arg1;
- (void)_updateFocusFrameForCellAtIndexPath:(id)arg1;

@end
