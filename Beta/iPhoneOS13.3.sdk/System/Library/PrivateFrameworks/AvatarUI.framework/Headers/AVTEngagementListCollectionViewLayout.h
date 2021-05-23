/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionViewLayout.h>

@class AVTEngagementLayout, NSValue;

@interface AVTEngagementListCollectionViewLayout : UICollectionViewLayout

{
    AVTEngagementLayout *_engagementLayout;
    NSValue *_ignoredProposedContentOffset;
    NSValue *_targetContentOffset;
}

@property (retain, nonatomic) NSValue *targetContentOffset;
@property (retain, nonatomic) NSValue *ignoredProposedContentOffset;
@property (nonatomic, readonly) AVTEngagementLayout *engagementLayout;

- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;
- (struct CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect)arg2;
- (id)indexesForElementsInRect:(struct CGRect)arg1 visibleBounds:(struct CGRect)arg2 numberOfItems:(long long)arg3;
- (struct CGPoint)centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(struct CGSize)arg2 proposedOrigin:(struct CGPoint)arg3;
- (void)clearTargetContentOffsetForAnimations;
- (void)setTargetContentOffsetForAnimations:(struct CGPoint)arg1;
- (id)initWithEngagementLayout:(id)arg1;
- (struct UIEdgeInsets)engagementInsetsForCollectionViewBounds:(struct CGSize)arg1;
- (struct CGSize)contentSizeForVisibleBounds:(struct CGRect)arg1 numberOfItems:(long long)arg2;

@end
