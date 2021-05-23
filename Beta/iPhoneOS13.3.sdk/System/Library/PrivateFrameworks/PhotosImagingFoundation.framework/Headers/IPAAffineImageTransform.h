/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAImageTransform.h>

@interface IPAAffineImageTransform : IPAImageTransform

{
    _Bool _canAlignToPixelsExactly;
    struct Matrix4d _matrix;
}

- (id)description;
- (id).cxx_construct;
- (struct Matrix4d)matrix;
- (id)inverseTransform;
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 matrix:(const struct Matrix4d *)arg3 canAlignToPixelsExactly:(_Bool)arg4;
- (struct Vector2d)mapVector:(struct Vector2d)arg1;
- (_Bool)canAlignToPixelsExactly;

@end
