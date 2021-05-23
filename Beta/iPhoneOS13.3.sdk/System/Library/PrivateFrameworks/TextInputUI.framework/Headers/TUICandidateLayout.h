/*
 Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

#import <UIKitCore/UICollectionViewLayout.h>

@class NSIndexPath, NSMutableArray, NSMutableDictionary, TUICandidateLayoutAttributes;

@interface TUICandidateLayout : UICollectionViewLayout

{
    NSMutableArray *_candidateAttributes;
    NSMutableDictionary *_dummyCandidateAttributes;
    NSMutableArray *_lineAttributes;
    NSMutableArray *_slottedCellSeparatorAttributes;
    NSMutableArray *_groupHeaderAttributes;
    TUICandidateLayoutAttributes *_customHeaderAttributes;
    _Bool _dirty;
    _Bool _candidateNumberEnabled;
    _Bool _fillGridWithLines;
    long long _rowType;
    long long _transitionState;
    NSIndexPath *_oldFirstVisibleIndexPath;
    double _oldFirstVisibleOffset;
    double _customHeaderHeight;
    unsigned long long _columnsCount;
    double _singleSlottedCellMargin;
    struct CGPoint _gridLineOffset;
    struct UIEdgeInsets _gridPadding;
    struct UIEdgeInsets _gridLinePadding;
}

@property (nonatomic) long long rowType;
@property (nonatomic) long long transitionState;
@property (retain, nonatomic) NSIndexPath *oldFirstVisibleIndexPath;
@property (nonatomic) double oldFirstVisibleOffset;
@property (nonatomic) double customHeaderHeight;
@property (nonatomic) _Bool candidateNumberEnabled;
@property (nonatomic) unsigned long long columnsCount;
@property (nonatomic) double singleSlottedCellMargin;
@property (nonatomic) struct UIEdgeInsets gridPadding;
@property (nonatomic) struct UIEdgeInsets gridLinePadding;
@property (nonatomic) struct CGPoint gridLineOffset;
@property (nonatomic) _Bool fillGridWithLines;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidateLayout;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)clearLayoutAttributes;
- (void)prepareLayoutForSingleRow;
- (void)layoutSlottedCandidates;
- (void)prepareLayoutForMultiRow;
- (void)justify:(id)arg1 rowStartX:(double)arg2 maxWidth:(double)arg3 remainingWidth:(double)arg4 endOfSection:(_Bool)arg5;
- (id)keyForDummyCandidateIndexPath:(id)arg1;

@end
