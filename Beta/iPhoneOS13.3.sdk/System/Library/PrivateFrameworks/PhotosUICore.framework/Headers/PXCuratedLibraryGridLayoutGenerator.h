/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutGenerator.h>

@interface PXCuratedLibraryGridLayoutGenerator : PXLayoutGenerator

{
    struct CGSize _itemSize;
    double _interItemSpacing;
    struct UIEdgeInsets _insets;
    _Bool _isPrepared;
    struct _PXLayoutGeometry *_geometries;
    unsigned long long _geometriesCount;
    struct CGSize _actualSize;
    double _lastFullRowBottomEdge;
    struct _PXCornerSpriteIndexes _cornerSpriteIndexes;
}

@property (nonatomic, readonly) double lastFullRowBottomEdge;

- (void)dealloc;
- (void)invalidate;
- (struct CGSize)size;
- (id)initWithMetrics:(id)arg1;
- (struct CGSize)estimatedSize;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (void)_prepareIfNeeded;
- (void)_prepareGeometriesBufferForCount:(unsigned long long)arg1;
- (struct _NSRange)geometriesRangeCoveringRect:(struct CGRect)arg1;
- (struct _PXCornerSpriteIndexes)cornerSpriteIndexes;

@end
