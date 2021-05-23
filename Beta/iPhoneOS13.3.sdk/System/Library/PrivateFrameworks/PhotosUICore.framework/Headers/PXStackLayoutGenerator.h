/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutGenerator.h>

@interface PXStackLayoutGenerator : PXLayoutGenerator

{
    struct _PXLayoutGeometry *_layoutGeometries;
}

- (void)dealloc;
- (void)invalidate;
- (struct CGSize)size;
- (struct CGSize)estimatedSize;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (void)_generateLayout;

@end
