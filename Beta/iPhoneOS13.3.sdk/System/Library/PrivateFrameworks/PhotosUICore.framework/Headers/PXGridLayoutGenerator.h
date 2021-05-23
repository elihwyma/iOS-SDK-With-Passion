/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutGenerator.h>

@class NSIndexSet, PXGridLayoutMetrics;

@interface PXGridLayoutGenerator : PXLayoutGenerator

{
    long long _numberOfItemsWide;
    NSIndexSet *_geometrySet;
}

@property (copy, nonatomic) PXGridLayoutMetrics *metrics;

- (struct CGSize)size;
- (id)initWithMetrics:(id)arg1;
- (struct CGSize)estimatedSize;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (id)geometryKinds;
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;
- (void)_getContentGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2;
- (void)_getHeaderGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2;
- (void)_getAdditionalGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2;
- (void)getGeometry:(struct _PXLayoutGeometry *)arg1 forItemAtIndex:(unsigned long long)arg2;

@end
