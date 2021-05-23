/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIPerspectiveAutoCalc.h>

@class CIImage, MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface CIPerspectiveAutoCalcV1 : CIPerspectiveAutoCalc

{
    struct float3x3 K;
    struct float3x3 invK;
    struct float3x3 T;
    struct float3x3 invT;
    CIImage *gradMap;
    unsigned long long gradMapW;
    unsigned long long gradMapH;
    MISSING_TYPE **gradMapBmp;
    unsigned long long gradMapRb;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>> vLines;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>> hLines;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>> vLineCluster;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>> hLineCluster;
    _Bool vGuidesValid;
    _Bool hGuidesValid;
    float vGuidesAOE;
    float hGuidesAOE;
    CDStruct_ec37f00f vGuide0;
    CDStruct_ec37f00f vGuide1;
    CDStruct_ec37f00f hGuide0;
    CDStruct_ec37f00f hGuide1;
    struct PseudoRand pseudoRando;
    float rX;
    float rY;
    float rZ;
    float pitchCorrectionAreaCoverage;
    float yawCorrectionAreaCoverage;
    double minimumPitchCorrectionAreaCoverage;
    double minimumYawCorrectionAreaCoverage;
}

@property double minimumPitchCorrectionAreaCoverage;
@property double minimumYawCorrectionAreaCoverage;
@property (readonly) float pitchCorrectionAreaCoverage;
@property (readonly) float yawCorrectionAreaCoverage;

- (void)dealloc;
- (double)confidence;
- (id).cxx_construct;
- (id)initWithContext:(id)arg1 image:(id)arg2 config:(const CDStruct_58ac58eb *)arg3;
- (_Bool)compute;
- (void)standardizeImage;
- (void)createGradientMap;
- (void)normalizeGradientMap;
- (void)thresholdGradientMap;
- (void)extractLineSegments;
- (void)clusterLineSegments;
- (void)rangeLimitGradientMap;
- (void)computeGuides;
- (void)computeTransform;

@end
