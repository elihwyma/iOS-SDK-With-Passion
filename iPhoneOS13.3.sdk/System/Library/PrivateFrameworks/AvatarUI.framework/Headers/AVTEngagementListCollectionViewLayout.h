//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <AvatarUI/AVTCollectionViewLayout-Protocol.h>

@class AVTEngagementLayout, NSValue;

@interface AVTEngagementListCollectionViewLayout : UICollectionViewLayout <AVTCollectionViewLayout>
{
    AVTEngagementLayout *_engagementLayout;
    NSValue *_ignoredProposedContentOffset;
    NSValue *_targetContentOffset;
}

@property(retain, nonatomic) NSValue *targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(retain, nonatomic) NSValue *ignoredProposedContentOffset; // @synthesize ignoredProposedContentOffset=_ignoredProposedContentOffset;
@property(readonly, nonatomic) AVTEngagementLayout *engagementLayout; // @synthesize engagementLayout=_engagementLayout;
// - (void).cxx_destruct;
- (CGSize)contentSizeForVisibleBounds:(CGRect)arg1 numberOfItems:(long long)arg2;
- (CGPoint)centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(CGSize)arg2 proposedOrigin:(CGPoint)arg3;
- (id)indexesForElementsInRect:(CGRect)arg1 visibleBounds:(CGRect)arg2 numberOfItems:(long long)arg3;
- (CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(CGRect)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (CGSize)collectionViewContentSize;
- (void)invalidateLayout;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1;
- (void)clearTargetContentOffsetForAnimations;
- (void)setTargetContentOffsetForAnimations:(CGPoint)arg1;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)initWithEngagementLayout:(id)arg1;
- (UIEdgeInsets)engagementInsetsForCollectionViewBounds:(CGSize)arg1;

@end

