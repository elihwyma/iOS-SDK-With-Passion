/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUHorizontalCollectionViewLayout.h>

@class NSIndexPath;

@protocol PUAvalancheReviewCollectionViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUAvalancheReviewCollectionViewLayout : PUHorizontalCollectionViewLayout

{
    NSIndexPath *_zoomingCellIndexPath;
    struct UIOffset _sharingBadgeOffset;
}

@property (nonatomic) struct UIOffset sharingBadgeOffset;
@property (retain, nonatomic) NSIndexPath *zoomingCellIndexPath;
@property (weak, nonatomic) id <PUAvalancheReviewCollectionViewLayoutDelegate> delegate;

- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)_supportsAdvancedTransitionAnimations;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;
- (struct CGRect)_floatingSelectionBadgeFrameForItemFrame:(struct CGRect)arg1 visibleItemFrame:(struct CGRect)arg2 atIndexPath:(id)arg3;
- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1;
- (_Bool)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect)arg1;

@end
