/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUSectionedTilingLayout.h>

@interface PUGridTilingLayout : PUSectionedTilingLayout

{
    long long _numberOfColumns;
    struct CGSize _itemSize;
    struct CGSize _interItemSpacing;
}

@property (nonatomic) struct CGSize itemSize;
@property (nonatomic) struct CGSize interItemSpacing;

- (id)init;
- (void)prepareLayout;
- (void)setVisibleRect:(struct CGRect)arg1;
- (long long)_numberOfColumns;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)preferredScrollInfo;
- (struct CGSize)estimatedSectionSize;
- (void)addLayoutInfosForTilesInRect:(struct CGRect)arg1 section:(long long)arg2 toSet:(id)arg3;
- (struct CGSize)sizeForSection:(long long)arg1 numberOfItems:(long long)arg2;
- (struct CGRect)_frameForItemAtIndexPath:(id)arg1;

@end
