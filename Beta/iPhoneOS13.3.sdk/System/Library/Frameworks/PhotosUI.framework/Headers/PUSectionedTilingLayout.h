/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTilingLayout.h>

@interface PUSectionedTilingLayout : PUTilingLayout

{
    long long _numberOfSections;
    struct _PUSectionedTilingLayoutSectionInfo *_sectionInfos;
    struct _NSRange _computedSections;
    long long _seedSection;
    struct CGPoint _seedSectionOrigin;
    _Bool _leftToRight;
    struct CGSize _interSectionSpacing;
}

@property (nonatomic, readonly) struct _NSRange computedSections;
@property (nonatomic) _Bool leftToRight;
@property (nonatomic) struct CGSize interSectionSpacing;

- (id)init;
- (void)dealloc;
- (void)prepareLayout;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)_numberOfSections;
- (struct CGRect)contentBounds;
- (void)setVisibleRect:(struct CGRect)arg1;
- (id)layoutInfosForTilesInRect:(struct CGRect)arg1;
- (void)addLayoutInfosForTilesInRect:(struct CGRect)arg1 section:(long long)arg2 toSet:(id)arg3;
- (struct CGSize)sizeForSection:(long long)arg1 numberOfItems:(long long)arg2;
- (struct CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2;
- (void)invalidateLayoutForUpdateWithItems:(id)arg1;
- (struct CGRect)boundsForSection:(long long)arg1;
- (_Bool)_scrollsHorizontallyNotVertically;
- (void)_ensureComputedSectionsHaveBeenSeeded;
- (void)_computeSeedSectionIfNeeded;
- (void)computeSectionsInRect:(struct CGRect)arg1;
- (struct _PUSectionedTilingLayoutSectionInfo *)_sectionInfoForSection:(long long)arg1;
- (void)invalidateSectionInfos;
- (void)_invalidateNumberOfSections;
- (void)_markAllSectionInfosInvalid;

@end
