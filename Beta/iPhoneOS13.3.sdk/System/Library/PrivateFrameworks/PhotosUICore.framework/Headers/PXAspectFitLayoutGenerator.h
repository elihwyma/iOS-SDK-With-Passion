/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutGenerator.h>

@class PXAspectFitLayoutMetrics;

@interface PXAspectFitLayoutGenerator : PXLayoutGenerator

{
    struct _PXLayoutGeometry *_geometries;
    unsigned long long _geometriesCount;
    long long _lastGeometryIndex;
    struct CGSize _contentSize;
    double _currentRowUnmodifiedHeight;
    double _currentRowFinalHeight;
}

@property (copy, nonatomic) PXAspectFitLayoutMetrics *metrics;

- (void)dealloc;
- (void)invalidate;
- (struct CGSize)size;
- (id)initWithMetrics:(id)arg1;
- (struct CGSize)estimatedSize;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (void)_prepareGeometriesForCount:(unsigned long long)arg1;
- (struct _PXLayoutGeometry)_lastGeometry;
- (void)_computeGeometriesIfNeeded;
- (void)_fillRowFromIndex:(long long *)arg1 withCount:(long long)arg2;
- (double)_rowHeightForItemsInRange:(struct _NSRange)arg1;
- (struct _PXLayoutGeometry)_geometryForItemAtIndex:(unsigned long long)arg1 atPosition:(struct CGPoint)arg2 withHorizontalGap:(double)arg3;

@end
