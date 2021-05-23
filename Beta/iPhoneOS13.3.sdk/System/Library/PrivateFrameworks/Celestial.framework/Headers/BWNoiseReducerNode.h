/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class NSDictionary;

@interface BWNoiseReducerNode : BWNode

{
    NSDictionary *_cameraTuningOptions;
    NSDictionary *_noiseReductionOptions;
    struct opaqueCMFormatDescription *_outputFormatDescription;
    struct NoiseReductionCtx_s *_context;
    int _contextSynchronization;
    int _gpuPriority;
    _Bool _threaded;
    _Bool _processLuma;
    _Bool _useInPlaceAlgorithm;
    _Bool _quadraHighResStillImageCaptureEnabled;
    struct __CVBuffer *_quadraResampledIntermediateBuffer;
    struct opaqueCMFormatDescription *_quadraResampledIntermediaBufferFormatDescription;
    struct OpaqueVTPixelTransferSession *_quadraResampledTransferSession;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)setQuadraHighResStillImageCaptureEnabled:(_Bool)arg1;
- (_Bool)quadraHighResStillImageCaptureEnabled;
- (id)_outputRequirementsForInputFormat:(id)arg1;
- (struct opaqueCMSampleBuffer *)_newQuadraResampledSampleBufferFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2;
- (id)initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2;

@end
