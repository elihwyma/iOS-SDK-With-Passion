/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@interface IPAScaleImageSizePolicy : IPAImageSizePolicy

{
    double _scale;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (id)initWithScale:(double)arg1;
- (double)transformScaleForSize:(struct CGSize)arg1;

@end
