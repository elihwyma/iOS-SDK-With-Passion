/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARImageBasedTechnique.h>

@class AR2DSkeletonDetectionPostProcessGPU, AR2DSkeletonRawEspressoResult, NSObject;

@protocol OS_dispatch_queue;

@interface AR2DSkeletonDetectionPostProcessingTechnique : ARImageBasedTechnique

{
    AR2DSkeletonDetectionPostProcessGPU *_postProcessorGPU;
    struct SkeletonJointFilter<float> _extrapolationFilter2D;
    struct SkeletonJointFilter<float> _extrapolationFilter2DForLiftingData;
    NSObject<OS_dispatch_queue> *_processingQueue;
    AR2DSkeletonRawEspressoResult *_previousRawEspressoResult;
}

@property (retain, nonatomic) AR2DSkeletonRawEspressoResult *previousRawEspressoResult;

- (id)init;
- (id).cxx_construct;
- (id)processData:(id)arg1;
- (double)requiredTimeInterval;

@end
