/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath, NSMapTable;

@interface MiroEditorFlowLayout : UICollectionViewFlowLayout

{
    NSIndexPath *_snappedIndexPath;
    double _maximumCenterItemLoupeSpacing;
    NSIndexPath *_currentIndexPath;
    NSIndexPath *_neighboringIndexPath;
    double _transitionProgress;
    double _abscissa;
    NSMapTable *_initalIndexPathToCGRectMap;
    NSMapTable *_layoutIndexPathToCGRectMap;
    struct UIEdgeInsets _sectionInsets;
}

@property (weak, nonatomic) NSIndexPath *currentIndexPath;
@property (weak, nonatomic) NSIndexPath *neighboringIndexPath;
@property (nonatomic) double transitionProgress;
@property (nonatomic) double abscissa;
@property (retain, nonatomic) NSMapTable *initalIndexPathToCGRectMap;
@property (retain, nonatomic) NSMapTable *layoutIndexPathToCGRectMap;
@property (nonatomic) struct UIEdgeInsets sectionInsets;
@property (retain, nonatomic) NSIndexPath *snappedIndexPath;
@property (nonatomic, readonly) NSIndexPath *centerCellIndexPath;
@property (nonatomic) double maximumCenterItemLoupeSpacing;

- (void)invalidateLayout;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGSize)_sizeForItemAtIndexPath:(id)arg1;
- (struct CGPoint)_snappedContentOffsetForProposedContentOffset:(struct CGPoint)arg1 chosenLayoutAttributes:(id *)arg2;
- (struct CGRect)_rectForItemAtIndexPath:(id)arg1 withLoupe:(_Bool)arg2;
- (double)_transitionProgressFrom:(id)arg1 abscissa:(double)arg2 outNeighborIndexPath:(id *)arg3;
- (_Bool)wantsLoupe;
- (double)_loupeAmountForIndexPath:(id)arg1;
- (double)_horizontalOffsetForIndexPath:(id)arg1;
- (struct CGPoint)contentOffsetForScrollingToIndexPath:(id)arg1 transitionProgress:(double)arg2;

@end
