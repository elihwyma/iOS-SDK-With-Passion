/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAImageTransform.h>

@interface IPAImageIdentityTransform : IPAImageTransform

- (id)description;
- (id)inverseTransform;
- (struct Vector2d)mapVector:(struct Vector2d)arg1;
- (_Bool)canAlignToPixelsExactly;

@end
