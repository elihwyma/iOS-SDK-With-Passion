/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAImageTransform.h>

@protocol IPAQuadGeometry;

__attribute__((visibility("hidden")))
@interface IPAPerspectiveTransform : IPAImageTransform

{
    struct Matrix4d _projectionTransform;
    struct Matrix4d _viewingTransform;
    id <IPAQuadGeometry> _intrinsicGeometry;
    _Bool _isInverse;
}

- (id).cxx_construct;
- (id)inverseTransform;
- (struct Vector2d)mapVector:(struct Vector2d)arg1;
- (_Bool)canAlignToPixelsExactly;
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 projectionTransform:(const struct Matrix4d *)arg3 viewingTransform:(const struct Matrix4d *)arg4;
- (id)intrinsicGeometry;

@end
