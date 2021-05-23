/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXTilingLayout.h>

@class PXCollectionTileLayoutTemplate, PXIndexPathSet, PXMemoriesFeedDataSource, PXMemoriesSpec, PXSectionedLayoutSnapshot;

@protocol PXMemoriesFeedTilingLayoutDelegate;

@interface PXMemoriesFeedTilingLayout : PXTilingLayout

{
    struct {
        _Bool contentsRectForItemAtIndexPathForAspectRatio;
        _Bool titleFontNameForItemAtIndexPath;
    } _delegateRespondsTo;
    PXMemoriesSpec *_spec;
    PXIndexPathSet *_selectedMemoryIndexPaths;
    id <PXMemoriesFeedTilingLayoutDelegate> _delegate;
    PXSectionedLayoutSnapshot *_layoutSnapshot;
    PXCollectionTileLayoutTemplate *__tileLayoutTemplate;
    struct PXSimpleIndexPath _highlightedMemoryIndexPath;
}

@property (nonatomic, readonly) PXCollectionTileLayoutTemplate *_tileLayoutTemplate;
@property (retain, nonatomic) PXMemoriesSpec *spec;
@property (nonatomic) struct PXSimpleIndexPath highlightedMemoryIndexPath;
@property (retain, nonatomic) PXIndexPathSet *selectedMemoryIndexPaths;
@property (weak, nonatomic) id <PXMemoriesFeedTilingLayoutDelegate> delegate;
@property (nonatomic, readonly) PXSectionedLayoutSnapshot *layoutSnapshot;
@property (nonatomic, readonly) PXMemoriesFeedDataSource *dataSource;

- (id)init;
- (void)prepareLayout;
- (struct CGRect)contentBounds;
- (void)setReferenceSize:(struct CGSize)arg1;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)getGeometry:(struct PXTileGeometry *)arg1 group:(unsigned long long *)arg2 userData:(id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)setLayoutSnapshot:(id)arg1;
- (struct CGRect)_contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg1 forAspectRatio:(double)arg2;
- (id)initWithSpec:(id)arg1 layoutSnapshot:(id)arg2;
- (struct PXSimpleIndexPath)indexPathForMemoryAtPoint:(struct CGPoint)arg1;
- (id)indexPathsForMemoriesInRect:(struct CGRect)arg1;
- (struct PXSimpleIndexPath)indexPathForTileIdentifier:(struct PXTileIdentifier)arg1;
- (long long)dataSourceIdentifierForTileIdentifier:(struct PXTileIdentifier)arg1;
- (long long)tileKindForTileIdentifier:(struct PXTileIdentifier)arg1;
- (struct PXTileIdentifier)tileIdentifierAtIndexPath:(struct PXSimpleIndexPath)arg1 withTileKind:(long long)arg2;
- (void)_enumerateTilesInLayoutItem:(id)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_addTileWithKind:(long long)arg1 entryIndex:(unsigned long long)arg2 memoryIndex:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)_viewSpecForTileWithIdentifier:(struct PXTileIdentifier)arg1 boundingSize:(struct CGSize)arg2;
- (id)_titleFontNameForMemoryAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (unsigned long long)_zPositionForTileWithIdentifier:(struct PXTileIdentifier)arg1;
- (long long)_itemKindForTileKind:(long long)arg1;
- (void)_invalidateSelectionTilesWithTag:(id)arg1;

@end
