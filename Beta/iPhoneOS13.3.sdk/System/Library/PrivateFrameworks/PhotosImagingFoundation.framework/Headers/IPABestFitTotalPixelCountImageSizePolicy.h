/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@interface IPABestFitTotalPixelCountImageSizePolicy : IPAImageSizePolicy

{
    long long _totalPixelCount;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (double)transformScaleForSize:(struct CGSize)arg1;
- (_Bool)isBestFitPolicy;
- (id)initWithTotalPixelCount:(long long)arg1;
- (struct CGSize)_transformSize:(struct CGSize)arg1 scale:(double *)arg2;

@end
