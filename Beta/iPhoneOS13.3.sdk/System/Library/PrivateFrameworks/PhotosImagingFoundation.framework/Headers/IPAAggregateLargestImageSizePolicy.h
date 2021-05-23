/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@class NSArray;

@interface IPAAggregateLargestImageSizePolicy : IPAImageSizePolicy

{
    NSArray *_policies;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (id)initWithPolicies:(id)arg1;
- (double)transformScaleForSize:(struct CGSize)arg1;
- (_Bool)isBestFitPolicy;

@end
