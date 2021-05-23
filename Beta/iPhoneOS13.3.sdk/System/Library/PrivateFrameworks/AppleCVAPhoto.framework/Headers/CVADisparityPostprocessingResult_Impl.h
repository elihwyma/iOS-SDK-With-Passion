/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface CVADisparityPostprocessingResult_Impl : NSObject

{
    float _focusDisparity;
    float _deltaCanonicalDisparity;
    float _backgroundDisparitySum;
    float _backgroundDisparitySumVariance;
    float _backgroundDisparityRatio;
    float _invalidDisparityRatio;
    float _invalidDisparityRatioVariance;
    float _backgroundSeparationLikelihood;
    float _closeCanonicalDisparityAverage;
    float _foregroundRatio;
    float _erodedForegroundRatio;
    struct __CVBuffer *_postprocessedDisparityPixelBuffer;
    NSArray *_faceCanonicalDisparityAverage;
    NSArray *_faceInvalidDisparityRatio;
    struct __CVBuffer *_canonicalDisparityPixelBuffer;
}

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
@property (readonly) struct __CVBuffer *canonicalDisparityPixelBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithPostprocessedDisparityBuffer:(struct __CVBuffer *)arg1 canonicalDisparityPixelBuffer:(struct __CVBuffer *)arg2 focusCanonicalDisparity:(float)arg3 backgroundDisparitySum:(float)arg4 backgroundDisparitySumVariance:(float)arg5 backgroundDisparityRatio:(float)arg6 invalidDisparityRatio:(float)arg7 invalidDisparityRatioVariance:(float)arg8 deltaCanonicalDisparity:(float)arg9 backgroundSeparationLikelihood:(float)arg10 closeCanonicalDisparityAverage:(float)arg11 faceCanonicalDisparityAverage:(id)arg12 faceInvalidDisparityRatio:(id)arg13 foregroundRatio:(float)arg14 erodedForegroundRatio:(float)arg15;

@end
