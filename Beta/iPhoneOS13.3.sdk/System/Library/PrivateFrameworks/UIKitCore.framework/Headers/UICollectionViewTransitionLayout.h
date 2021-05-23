/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableArray, NSMutableDictionary;

@interface UICollectionViewTransitionLayout : UICollectionViewLayout

{
    UICollectionViewLayout *_fromLayout;
    UICollectionViewLayout *_toLayout;
    struct CGRect _fromVisibleBounds;
    struct CGRect _toVisibleBounds;
    struct CGSize _contentSize;
    _Bool _haveValidInfos;
    double _transitionProgress;
    NSMutableDictionary *_transitionInformationsDict;
    NSMutableDictionary *_currentLayoutInfos;
    _Bool _layoutIsValid;
    NSMutableArray *_disappearingLayoutAttributes;
    NSMutableArray *_appearingLayoutAttributes;
    double _accuracy;
}

@property (nonatomic) double transitionProgress;
@property (nonatomic, readonly) UICollectionViewLayout *currentLayout;
@property (nonatomic, readonly) UICollectionViewLayout *nextLayout;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidateLayout;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)_setCollectionView:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (void)_prepareForTransitionFromLayout:(id)arg1;
- (_Bool)_supportsAdvancedTransitionAnimations;
- (void)_finalizeLayoutTransition;
- (id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2;
- (struct CGRect)_oldVisibleBounds;
- (struct CGRect)_newVisibleBounds;
- (id)interpolatedLayoutAttributesFromLayoutAttributes:(id)arg1 toLayoutAttributes:(id)arg2 progress:(double)arg3;
- (void)updateValue:(double)arg1 forAnimatedKey:(id)arg2;
- (double)valueForAnimatedKey:(id)arg1;

@end
