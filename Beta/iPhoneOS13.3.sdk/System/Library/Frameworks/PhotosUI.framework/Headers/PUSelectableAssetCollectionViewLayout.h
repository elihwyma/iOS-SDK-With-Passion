/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUHorizontalCollectionViewLayout.h>

@class NSSet;

@protocol PUSelectableAssetCollectionViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUSelectableAssetCollectionViewLayout : PUHorizontalCollectionViewLayout

{
    NSSet *_floatingCellIndexPaths;
    struct UIOffset _sharingBadgeOffset;
    struct CGSize _layoutReferenceSize;
}

@property (nonatomic) struct UIOffset sharingBadgeOffset;
@property (retain, nonatomic) NSSet *floatingCellIndexPaths;
@property (nonatomic) struct CGSize layoutReferenceSize;
@property (weak, nonatomic) id <PUSelectableAssetCollectionViewLayoutDelegate> delegate;

- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)_supportsAdvancedTransitionAnimations;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;
- (struct CGRect)_floatingSelectionBadgeFrameForItemFrame:(struct CGRect)arg1 visibleItemFrame:(struct CGRect)arg2 atIndexPath:(id)arg3;
- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1;
- (_Bool)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGRect)collectionViewBounds;

@end
