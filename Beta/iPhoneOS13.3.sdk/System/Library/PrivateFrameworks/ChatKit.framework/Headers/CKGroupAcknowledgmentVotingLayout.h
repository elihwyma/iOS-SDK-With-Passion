/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKGroupAcknowledgmentVotingLayout : UICollectionViewLayout

{
    _Bool _isAnimatedLayoutChange;
    unsigned long long _layoutMode;
    long long _expandedSection;
    NSArray *_ballotItems;
    NSArray *_fromBallotItems;
    struct CGPoint _previousCollapsedContentOffset;
    struct CGSize _fromContentSize;
    struct CGPoint _fromContentOffset;
}

@property (copy, nonatomic) NSArray *ballotItems;
@property (nonatomic) long long expandedSection;
@property (nonatomic) _Bool isAnimatedLayoutChange;
@property (retain, nonatomic) NSArray *fromBallotItems;
@property (nonatomic) struct CGSize fromContentSize;
@property (nonatomic) struct CGPoint fromContentOffset;
@property (nonatomic) unsigned long long layoutMode;
@property (nonatomic) struct CGPoint previousCollapsedContentOffset;

- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeAnimatedBoundsChange;
- (void)preapareForLayoutAnimationAroundSection:(long long)arg1;
- (void)_setupAnimatedCollapsedLayout;
- (void)cleanupAnimationCache;
- (long long)_numberOfBallots;
- (_Bool)_shouldFillInFromCenter;
- (double)_totalBallotContainersWidth;
- (void)_initializeBallotItems;
- (void)_setupCollapsedLayout;
- (void)_setupExpandedLayout;

@end
