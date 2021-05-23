/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <AppleCVAPhoto/Swift-Protocol.h>

@class NSArray;

@protocol CVADisparityPostprocessingResult <Swift>

@property (readonly) struct __CVBuffer *postprocessedDisparityPixelBuffer;
@property (readonly) float focusDisparity;
@property (readonly) float deltaCanonicalDisparity;
@property (readonly) float backgroundDisparitySum;
@property (readonly) float backgroundDisparitySumVariance;
@property (readonly) float backgroundDisparityRatio;
@property (readonly) float invalidDisparityRatio;
@property (readonly) float invalidDisparityRatioVariance;
@property (readonly) float backgroundSeparationLikelihood;
@property (readonly) float closeCanonicalDisparityAverage;
@property (readonly) NSArray *faceCanonicalDisparityAverage;
@property (readonly) NSArray *faceInvalidDisparityRatio;
@property (readonly) float foregroundRatio;
@property (readonly) float erodedForegroundRatio;

@end
