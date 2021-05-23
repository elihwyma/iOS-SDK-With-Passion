/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderJob.h>

@class NUSaliencyRequest, VNSaliencyImageObservation;

@interface NUSaliencyJob : NURenderJob

{
    VNSaliencyImageObservation *_saliencyObservation;
}

@property (nonatomic, readonly) NUSaliencyRequest *saliencyRequest;
@property (retain, nonatomic) VNSaliencyImageObservation *saliencyObservation;

- (id)result;
- (_Bool)render:(out id *)arg1;
- (id)initWithRequest:(id)arg1;
- (void)cleanUp;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithSaliencyRequest:(id)arg1;
- (id)saliencyObservationForImage:(id)arg1 error:(out id *)arg2;

@end
