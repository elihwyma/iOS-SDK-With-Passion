/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@interface IPABestFitImageWidthPolicy : IPAImageSizePolicy

{
    double _fitWidth;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (id)initWithWidth:(double)arg1;
- (double)transformScaleForSize:(struct CGSize)arg1;
- (_Bool)isBestFitPolicy;

@end
