/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWColorLookupCache, BWMetalColorCubeRenderer, BWPixelBufferPool, BWRenderList, BWRenderListProcessor, BWStillImageMetalBlurMapRenderer, BWStillImageMetalSDOFRenderer, NSDictionary, NSObject, NSString;

@protocol BWRendererResourceProvider, MTLCommandQueue, OS_dispatch_queue;

@interface BWStillImageFilterNode : BWNode

{
    BWRenderList *_renderList;
    BWRenderListProcessor *_renderListProcessor;
    id <BWRendererResourceProvider> _rendererProvider;
    BWStillImageMetalSDOFRenderer *_metalSDOFRenderer;
    BWStillImageMetalBlurMapRenderer *_metalBlurMapRenderer;
    BWMetalColorCubeRenderer *_metalFilterRenderer;
    BWColorLookupCache *_colorLookupCache;
    _Bool _depthDataDeliveryEnabled;
    CDStruct_79c71658 _depthDataMapDimensions;
    NSDictionary *_sensorIDDictionary;
    BWPixelBufferPool *_processingBufferPool;
    NSObject<OS_dispatch_queue> *_emitQueue;
    id <MTLCommandQueue> _mtlCommandQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)sensorIDDictionary;
- (void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 forInput:(id)arg4;
- (id)provideStreamingCVAFilterRenderer;
- (id)provideCoreImageFilterRenderer;
- (id)provideStillImageMetalSDOFRenderer;
- (id)provideStillImageMetalBlurMapRenderer;
- (id)provideMetalFilterRenderer;
- (id)provideColorLookupCache;
- (id)initWithNodeConfiguration:(id)arg1 depthDataDeliveryEnabled:(_Bool)arg2 personSegmentationEnabled:(_Bool)arg3 refinedDepthEnabled:(_Bool)arg4;
- (void)setSensorIDDictionary:(id)arg1;
- (id)_initWithNodeConfiguration:(id)arg1 depthDataDeliveryEnabled:(_Bool)arg2 personSegmentationEnabled:(_Bool)arg3 refinedDepthEnabled:(_Bool)arg4 renderResourceProvider:(id)arg5;
- (int)_allocateOutputBufferPoolWithVideoFormat:(id)arg1;
- (void)_prepareStillImageFilterRenderersForOriginalFilters:(id)arg1 processedFilters:(id)arg2;
- (void)_emitSampleBufferAsync:(struct opaqueCMSampleBuffer *)arg1;
- (void)_emitNodeErrorForErrorStatus:(int)arg1 numberOfNodeErrors:(int)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4;
- (id)_debugStringForBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
