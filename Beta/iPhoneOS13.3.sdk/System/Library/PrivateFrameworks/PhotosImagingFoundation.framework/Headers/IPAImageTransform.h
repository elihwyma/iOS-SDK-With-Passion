/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@protocol IPAImageGeometry;

@interface IPAImageTransform : NSObject

{
    id <IPAImageGeometry> _inputGeometry;
    id <IPAImageGeometry> _intrinsicGeometry;
}

+ (id)identityTransformForGeometry:(id)arg1;
+ (id)compositeTransforms:(id)arg1;

- (id)init;
- (id)description;
- (id)inverseTransform;
- (struct Vector2d)mapVector:(struct Vector2d)arg1;
- (_Bool)canAlignToPixelsExactly;
- (id)intrinsicGeometry;
- (id)inputGeometry;
- (struct CGPoint)mapPoint:(struct CGPoint)arg1;
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2;

@end
