/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@interface IPACropOperator : IPAGeometryOperator

{
    struct CGRect _cropRect;
}

+ (id)operatorWithCropRect:(struct CGRect)arg1;
+ (id)operatorWithIdentifier:(id)arg1 cropRect:(struct CGRect)arg2;

- (id)description;
- (id)transformForGeometry:(id)arg1;

@end
