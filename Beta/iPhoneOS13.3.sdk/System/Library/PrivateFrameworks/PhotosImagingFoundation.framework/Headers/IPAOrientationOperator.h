/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@interface IPAOrientationOperator : IPAGeometryOperator

{
    long long _orientation;
}

+ (id)operatorWithOrientation:(long long)arg1;
+ (id)operatorWithIdentifier:(id)arg1 orientation:(long long)arg2;

- (id)description;
- (id)transformForGeometry:(id)arg1;

@end
