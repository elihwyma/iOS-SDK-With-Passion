/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/AVTEngagementListCollectionViewLayout.h>

@class AVTUIEnvironment, NSIndexPath, UICollectionViewUpdateItem;

@interface AVTZIndexEngagementListCollectionViewLayout : AVTEngagementListCollectionViewLayout

{
    NSIndexPath *_backIndexPath;
    NSIndexPath *_plusButtonIndexPath;
    UICollectionViewUpdateItem *_currentUpdateItem;
    double _minAlphaFactor;
    AVTUIEnvironment *_environment;
}

@property (retain, nonatomic) UICollectionViewUpdateItem *currentUpdateItem;
@property (nonatomic) double minAlphaFactor;
@property (retain, nonatomic) AVTUIEnvironment *environment;
@property (retain, nonatomic) NSIndexPath *backIndexPath;
@property (retain, nonatomic) NSIndexPath *plusButtonIndexPath;

- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initWithEngagementLayout:(id)arg1 minAlphaFactor:(double)arg2 environment:(id)arg3;
- (struct UIEdgeInsets)engagementInsetsForCollectionViewBounds:(struct CGSize)arg1;
- (double)alphaForSunflowerElementWithEngagement:(double)arg1;
- (long long)zIndexForElementWithAttributes:(id)arg1;
- (double)alphaForElementWithAttributes:(id)arg1;

@end
