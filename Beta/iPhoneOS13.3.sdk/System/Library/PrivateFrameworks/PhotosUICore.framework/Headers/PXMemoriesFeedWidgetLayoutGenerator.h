/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXMemoriesFeedLayoutGenerator.h>

@class PXMemoriesFeedWidgetLayoutMetrics;

@interface PXMemoriesFeedWidgetLayoutGenerator : PXMemoriesFeedLayoutGenerator

{
    struct _LayoutContext _context;
}

@property (copy, nonatomic) PXMemoriesFeedWidgetLayoutMetrics *metrics;

- (struct CGSize)size;
- (id)initWithMetrics:(id)arg1;
- (struct CGSize)estimatedSize;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (id)geometryKinds;

@end
