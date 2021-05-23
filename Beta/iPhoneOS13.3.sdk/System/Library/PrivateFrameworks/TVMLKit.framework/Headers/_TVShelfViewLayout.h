/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, _TVShelfLayoutHelper;

@interface _TVShelfViewLayout : UICollectionViewLayout

{
    _Bool _shouldSnapContent;
    double _minimumInteritemSpacing;
    double _minimumLineSpacing;
    long long _rowCount;
    long long _prominentSectionIndex;
    double _headerSelectionMargin;
    double _headerBottomMargin;
    _TVShelfLayoutHelper *_layoutHelper;
    NSArray *_shelfLayoutSections;
    struct CGSize _itemSize;
    struct CGSize _headerReferenceSize;
    struct UIEdgeInsets _sectionInset;
}

@property (retain, nonatomic) _TVShelfLayoutHelper *layoutHelper;
@property (retain, nonatomic) NSArray *shelfLayoutSections;
@property (nonatomic) _Bool shouldSnapContent;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) struct CGSize itemSize;
@property (nonatomic) long long rowCount;
@property (nonatomic) long long prominentSectionIndex;
@property (nonatomic) struct CGSize headerReferenceSize;
@property (nonatomic) double headerSelectionMargin;
@property (nonatomic) double headerBottomMargin;
@property (nonatomic) struct UIEdgeInsets sectionInset;

+ (double)defaultHeaderSelectionMargin;

- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (long long)computedRowCount;
- (void)snapContent;
- (id)indexPathForSnappedContent;
- (void)snapContentToIndexPath:(id)arg1;
- (_Bool)_bumpHeaderForLayoutSection:(id)arg1 forIndexPath:(id)arg2;
- (double)computedContentHeight;
- (id)_indexPathForItemAtProposedContentOffset:(struct CGPoint)arg1;
- (struct CGRect)boundingSelectionFrameForFrame:(struct CGRect)arg1;

@end
