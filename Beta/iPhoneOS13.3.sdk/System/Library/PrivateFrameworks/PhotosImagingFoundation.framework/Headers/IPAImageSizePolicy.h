/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@interface IPAImageSizePolicy : NSObject

+ (id)originalSizePolicy;
+ (id)scalePolicyWithScale:(double)arg1;
+ (id)bestFitPolicyInSize:(struct CGSize)arg1;
+ (id)bestFitPolicyInSquare:(double)arg1;
+ (id)bestFitPolicyShortestEdge:(double)arg1;
+ (id)bestFitPolicyWithWidth:(double)arg1;
+ (id)bestFitPolicyWithHeight:(double)arg1;
+ (id)bestFitPolicyThumbnail;
+ (id)bestFitPolicyWithTotalPixelCount:(long long)arg1;
+ (id)bestFitPolicyWithEvenTotalPixelCount:(long long)arg1;
+ (id)bestFitPolicyWithEvenWidthTotalPixelCount:(long long)arg1;
+ (id)largestPolicyWithPolicies:(id)arg1;
+ (id)bestFitPolicyWithNominalShortSide:(long long)arg1 minLongSide:(long long)arg2 maxLongSide:(long long)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (struct PFIntSize_st)integralTransformSize:(struct CGSize)arg1;
- (double)transformScaleForSize:(struct CGSize)arg1;
- (_Bool)isBestFitPolicy;
- (_Bool)isOriginalSizePolicy;

@end
