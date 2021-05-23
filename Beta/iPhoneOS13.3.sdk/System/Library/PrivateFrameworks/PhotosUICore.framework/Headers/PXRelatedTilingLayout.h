/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXTilingLayout.h>

@class PXRelatedDataSource, PXRelatedSpec;

@protocol PXRelatedTilingLayoutDelegate;

@interface PXRelatedTilingLayout : PXTilingLayout

{
    unsigned long long _dataSourceIdentifier;
    long long _numberOfEntries;
    long long _numberOfColumns;
    long long _numberOfRows;
    struct UIEdgeInsets _margins;
    struct CGSize _itemSize;
    struct CGSize _interItemSpacing;
    struct CGRect _contentBounds;
    _Bool _isDataSourceTransient;
    struct {
        _Bool isPlaceholderEntryAtIndexPath;
        _Bool fontNameForEntryAtIndexPath;
        _Bool contentsRectForItemAtIndexPathForAspectRatio;
    } _delegateRespondsTo;
    id <PXRelatedTilingLayoutDelegate> _delegate;
    PXRelatedDataSource *_dataSource;
    PXRelatedSpec *_spec;
    long long _maximumNumberOfRows;
    struct PXSimpleIndexPath _highlightedIndexPath;
    struct PXSimpleIndexPath _focusedIndexPath;
}

@property (weak, nonatomic) id <PXRelatedTilingLayoutDelegate> delegate;
@property (retain, nonatomic) PXRelatedDataSource *dataSource;
@property (retain, nonatomic) PXRelatedSpec *spec;
@property (nonatomic) long long maximumNumberOfRows;
@property (nonatomic) struct PXSimpleIndexPath highlightedIndexPath;
@property (nonatomic) struct PXSimpleIndexPath focusedIndexPath;

- (id)init;
- (void)prepareLayout;
- (struct CGRect)contentBounds;
- (void)setReferenceSize:(struct CGSize)arg1;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (struct PXSimpleIndexPath)indexPathForTileIdentifier:(struct PXTileIdentifier)arg1;
- (long long)tileKindForTileIdentifier:(struct PXTileIdentifier)arg1;
- (struct PXTileIdentifier)tileIdentifierForTileKind:(long long)arg1 entryIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct PXSimpleIndexPath)indexPathForEntryAtPoint:(struct CGPoint)arg1;
- (struct CGRect)rectOfInterestForEntryAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXTileIdentifier)_tileIdentifierForTileKind:(long long)arg1 entryIndex:(long long)arg2;
- (void)_enumerateEntryIndexesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)_rectForEntryAtIndex:(long long)arg1;
- (_Bool)_shouldShowActivityIndicator;
- (struct CGRect)_rectForActivityIndicator;
- (_Bool)_shouldShowEmptyPlaceholder;
- (struct CGRect)_rectForEmptyPlaceholder;

@end
