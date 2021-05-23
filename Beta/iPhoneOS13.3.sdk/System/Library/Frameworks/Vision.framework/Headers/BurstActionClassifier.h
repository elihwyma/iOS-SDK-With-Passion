/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface BurstActionClassifier : NSObject

{
    _Bool hasBeenScaled;
    double testVector[7];
    float testAverageCameraTravelDistance;
    float testMaxRegistrationErrorIntegral;
    float testMaxPeakRegistrationError;
    float testMeanPeakRegistrationError;
    float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
    float testInOutRatio;
    float testMaxInnerDistance;
    float testAverageRegistrationErrorSkewness;
    float testMinRegionOfInterestSize;
    float testMaxRegistrationErrorSkewness;
    struct __SVMParameters *_svmParameters;
}

@property float testMaxInnerDistance;
@property float testInOutRatio;
@property float testMaxPeakRegistrationError;
@property float testMeanPeakRegistrationError;
@property float testMinRegionOfInterestSize;
@property float testMaxRegistrationErrorSkewness;
@property float testMaxRegistrationErrorIntegral;
@property float testAverageCameraTravelDistance;
@property float testAverageRegistrationErrorSkewness;
@property float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
@property struct __SVMParameters *svmParameters;

- (id)init;
- (double)computeKernelValueWithSupportVector:(const struct BurstSupportVector *)arg1;
- (void)scaleVector;
- (float)predictResult;
- (id)initWithVersion:(int)arg1;
- (_Bool)isBurstAction;

@end
