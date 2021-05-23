/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutGenerator.h>

@class NSDictionary, PXCompositeEditorialLayoutMetrics;

@interface PXCompositeEditorialLayoutGenerator : PXLayoutGenerator

{
    struct _PXLayoutGeometry *_geometries;
    unsigned long long _geometriesCount;
    double *_layoutItemWeights;
    unsigned long long _layoutItemWeightsCount;
    struct CGSize _contentSize;
    _Bool _isPrepared;
    NSDictionary *_templatesByTileCount;
    long long _minTemplateItemCount;
    long long _maxTemplateItemCount;
    long long _minNumberOfColumns;
}

@property (copy, nonatomic) PXCompositeEditorialLayoutMetrics *metrics;

- (void)dealloc;
- (void)invalidate;
- (struct CGSize)size;
- (id)initWithMetrics:(id)arg1;
- (struct CGSize)estimatedSize;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (void)_prepareIfNeeded;
- (void)_computeTemplatesByTileCountIfNeeded;
- (void)_enumerateTemplatesWithBlock:(CDUnknownBlockType)arg1;
- (id)_minCostingTemplateAmongTemplates:(id)arg1 forFittingInputItems:(id)arg2 inRange:(struct _NSRange)arg3 minCost:(out double *)arg4;
- (void)_normalizeWeightsForInputItems:(id)arg1;
- (void)_prepareLayoutItemWeightsBufferForCount:(unsigned long long)arg1;
- (void)_prepareGeometriesBufferForCount:(unsigned long long)arg1;
- (id)_layoutInputsInRange:(struct _NSRange)arg1;
- (struct _PXLayoutGeometry)_geometryFromFrame:(struct CGRect)arg1 index:(unsigned long long)arg2;

@end
