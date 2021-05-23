/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutGenerator.h>

@class NSIndexSet, PXEditorialLayoutMetrics, PXMagazineLayoutTileMaker;

@interface PXEditorialLayoutGenerator : PXLayoutGenerator

{
    _Bool _isPrepared;
    PXMagazineLayoutTileMaker *_tileMaker;
    struct CGSize _actualSize;
    struct _PXLayoutGeometry *_geometries;
    struct CGRect *_rects;
    unsigned long long _geometriesCount;
    NSIndexSet *_geometrySet;
}

@property (copy, nonatomic) PXEditorialLayoutMetrics *metrics;

- (void)dealloc;
- (void)invalidate;
- (struct CGSize)size;
- (id)initWithMetrics:(id)arg1;
- (struct CGSize)estimatedSize;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (void)_prepareIfNeeded;
- (struct _PXLayoutGeometry)_geometryFromFrame:(struct CGRect)arg1 index:(unsigned long long)arg2;
- (id)geometryKinds;
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;
- (void)_getContentGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2;
- (void)_getHeaderGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2;
- (void)_prepareBuffersForCount:(unsigned long long)arg1;

@end
