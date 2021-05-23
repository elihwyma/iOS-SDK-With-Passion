/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, UICollectionViewLayoutAttributes;

@interface SBStarkNotificationLayout : UICollectionViewLayout

{
    UICollectionViewLayoutAttributes *_notificationAttributes;
    UICollectionViewLayoutAttributes *_previousNotificationAttributes;
    NSArray *_subActionsAttributes;
    NSArray *_previousSubActionsAttributes;
    UICollectionViewLayoutAttributes *_backgroundAttributes;
    UICollectionViewLayoutAttributes *_previousBackgroundAttributes;
    double _notificationHeight;
    double _transitionSpacing;
    struct UIEdgeInsets _subActionsInsets;
    double _subActionPadding;
    double _subActionHeight;
}

@property (nonatomic) double notificationHeight;
@property (nonatomic) double transitionSpacing;
@property (nonatomic) struct UIEdgeInsets subActionsInsets;
@property (nonatomic) double subActionPadding;
@property (nonatomic) double subActionHeight;

- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)_transitionAttributesForAction:(long long)arg1 withLayoutAttributes:(id)arg2;

@end
