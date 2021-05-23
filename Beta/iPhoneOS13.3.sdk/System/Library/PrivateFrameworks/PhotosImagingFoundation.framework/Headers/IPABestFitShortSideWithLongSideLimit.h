/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@interface IPABestFitShortSideWithLongSideLimit : IPAImageSizePolicy

{
    long long _nominalShortSide;
    long long _minLongSide;
    long long _maxLongSide;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (double)transformScaleForSize:(struct CGSize)arg1;
- (_Bool)isBestFitPolicy;
- (id)initWithNominalShortSide:(long long)arg1 minLongSide:(long long)arg2 maxLongSide:(long long)arg3;

@end
