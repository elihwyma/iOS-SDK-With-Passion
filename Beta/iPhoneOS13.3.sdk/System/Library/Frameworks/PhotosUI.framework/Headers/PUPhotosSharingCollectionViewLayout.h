/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUHorizontalTiledCollectionViewLayout.h>

@class NSIndexPath, NSMutableDictionary;

@protocol PUPhotosSharingCollectionViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingCollectionViewLayout : PUHorizontalTiledCollectionViewLayout

{
    NSMutableDictionary *_cachedItemSublayouts;
    unsigned long long _sharingBadgesCorner;
    NSIndexPath *_zoomingCellIndexPath;
    struct UIOffset _sharingBadgesOffset;
}

@property (nonatomic) struct UIOffset sharingBadgesOffset;
@property (nonatomic) unsigned long long sharingBadgesCorner;
@property (retain, nonatomic) NSIndexPath *zoomingCellIndexPath;
@property (weak, nonatomic) id <PUPhotosSharingCollectionViewLayoutDelegate> delegate;

- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)_supportsAdvancedTransitionAnimations;
- (void)_didFinishLayoutTransitionAnimations:(_Bool)arg1;
- (void)invalidateCachedLayout;
- (struct CGRect)_floatingBadgeContainerFrameForBadgeContainerFrame:(struct CGRect)arg1 itemFrame:(struct CGRect)arg2 visibleItemFrame:(struct CGRect)arg3;
- (struct UIOffset)_floatingBadgeOffsetForBadgesContainerFrame:(struct CGRect)arg1 ItemFrame:(struct CGRect)arg2 visibleItemFrame:(struct CGRect)arg3;
- (id)_sublayoutForItemLayoutAttributes:(id)arg1;

@end
