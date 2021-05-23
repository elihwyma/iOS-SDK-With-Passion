/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@class NSArray;

@interface IPAImageTransformSequence : NSObject

{
    NSArray *_transforms;
}

- (id)description;
- (id)inverseTransform;
- (_Bool)canAlignToPixelsExactly;
- (id)intrinsicGeometry;
- (id)inputGeometry;
- (struct CGPoint)mapPoint:(struct CGPoint)arg1;
- (id)initWithTransforms:(id)arg1;

@end
