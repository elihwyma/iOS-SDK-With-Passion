/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSAffineTransform.h>

@interface NSAffineTransform (PAImaging)

+ (id)pa_transformWithCGAffineTransform:(struct CGAffineTransform)arg1;

- (id)description;
- (struct CGAffineTransform)pa_CGAffineTransform;

@end
