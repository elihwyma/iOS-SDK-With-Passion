/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@interface IPABestFitImageSizePolicy : IPAImageSizePolicy

{
    struct CGSize _fitSize;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (double)transformScaleForSize:(struct CGSize)arg1;
- (_Bool)isBestFitPolicy;
- (id)initWithFitSize:(struct CGSize)arg1;

@end
