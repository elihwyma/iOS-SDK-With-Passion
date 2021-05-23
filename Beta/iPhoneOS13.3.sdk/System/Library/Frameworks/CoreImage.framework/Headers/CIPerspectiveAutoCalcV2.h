/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIPerspectiveAutoCalc.h>

@class CIImage, MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface CIPerspectiveAutoCalcV2 : CIPerspectiveAutoCalc

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
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>> vClusterInliers;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>> hClusterInliers;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>> vClusterOutliers;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>> hClusterOutliers;
    struct vector<LineCostProxy, std::__1::allocator<LineCostProxy>> vClusterInliersProxies;
    struct vector<LineCostProxy, std::__1::allocator<LineCostProxy>> hClusterInliersProxies;
    struct vector<LineCostProxy, std::__1::allocator<LineCostProxy>> vClusterOutliersProxies;
    struct vector<LineCostProxy, std::__1::allocator<LineCostProxy>> hClusterOutliersProxies;
    MISSING_TYPE *initialSimplexVerticesXYZ[64];
    MISSING_TYPE *initialSimplexVerticesXZ[16];
    MISSING_TYPE *initialSimplexVerticesYZ[16];
    int solutionType;
    struct Solution solution;
    double unlimitedPitch;
    double unlimitedYaw;
    double unlimitedRoll;
}

@property (readonly) double unlimitedPitch;
@property (readonly) double unlimitedYaw;
@property (readonly) double unlimitedRoll;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithContext:(id)arg1 image:(id)arg2 config:(const CDStruct_58ac58eb *)arg3;
- (_Bool)compute;
- (void)standardizeImage;
- (void)createGradientMap;
- (void)normalizeGradientMap;
- (void)thresholdGradientMap;
- (void)extractLineSegments;
- (void)clusterLineSegments;
- (void)setupCostFunction;
- (void)runOptimization;
- (void)computeConfidence;
- (float)evaluateCost: /* Error: Ran out of types for this method. */;
- (float)evaluateCostXZ: /* Error: Ran out of types for this method. */;
- (float)evaluateCostYZ: /* Error: Ran out of types for this method. */;

@end
