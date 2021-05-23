/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NURenderJob.h>

@class CIImage, VNImageHomographicAlignmentObservation;

@interface PILongExposureRegistrationJob : NURenderJob

{
    CIImage *_stillImage;
    VNImageHomographicAlignmentObservation *_observation;
    CDStruct_996ac03c _guideExtent;
}

@property (nonatomic) CDStruct_996ac03c guideExtent;
@property (retain, nonatomic) CIImage *stillImage;
@property (retain, nonatomic) VNImageHomographicAlignmentObservation *observation;

- (id)result;
- (_Bool)render:(out id *)arg1;
- (_Bool)prepare:(out id *)arg1;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputImage;
- (_Bool)wantsRenderScaleClampedToNativeScale;
- (id)scalePolicy;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (id)registrationRequest;

@end
