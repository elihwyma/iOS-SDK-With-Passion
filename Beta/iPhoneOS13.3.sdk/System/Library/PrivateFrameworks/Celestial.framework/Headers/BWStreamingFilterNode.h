/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWColorLookupCache, BWFigVideoCaptureDevice, BWRenderList, BWRenderListAnimator, BWRenderListProcessor, BWStreamingCVAFilterRenderer, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface BWStreamingFilterNode : BWNode

{
    _Bool _preparedToBecomeLive;
    _Bool _depthDataDeliveryEnabled;
    _Bool _focusBlurMapDeliveryEnabled;
    _Bool _metadataProcessingEnabled;
    _Bool _attachesInputPixelBufferAfterRendering;
    _Bool _studioAndContourRenderingEnabled;
    _Bool _stageRenderingEnabled;
    struct os_unfair_lock_s _renderListLock;
    BWRenderList *_currentRenderList;
    BWRenderListAnimator *_currentAnimator;
    BWRenderList *_nextRenderList;
    BWRenderList *_mostRecentRenderListRequested;
    BWRenderListAnimator *_nextAnimator;
    BWStreamingCVAFilterRenderer *_streamingCVAFilterRenderer;
    BWRenderListProcessor *_renderListProcessor;
    BWColorLookupCache *_colorLookupCache;
    NSObject<OS_dispatch_queue> *_processorPreparationQueue;
    BWFigVideoCaptureDevice *_captureDevice;
    _Bool _receivedInitialFixedPointDisparityBuffer;
    _Bool _receivedOccludedFixedPointDisparityBuffer;
}

@property (nonatomic, getter=isDepthDataDeliveryEnabled) _Bool depthDataDeliveryEnabled;
@property (nonatomic, getter=isFocusBlurMapDeliveryEnabled) _Bool focusBlurMapDeliveryEnabled;
@property (nonatomic, getter=isMetadataProcessingEnabled) _Bool metadataProcessingEnabled;
@property (nonatomic) _Bool attachesInputPixelBufferAfterRendering;
@property (nonatomic) _Bool studioAndContourRenderingEnabled;
@property (nonatomic) _Bool stageRenderingEnabled;
@property float simulatedAperture;
@property float portraitLightingEffectStrength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)videoOutput;
- (id)provideStreamingCVAFilterRenderer;
- (id)provideCoreImageFilterRenderer;
- (id)provideStillImageMetalSDOFRenderer;
- (id)provideStillImageMetalBlurMapRenderer;
- (id)provideMetalFilterRenderer;
- (id)provideColorLookupCache;
- (void)filterDetectedFacesInSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithCaptureDevice:(id)arg1 usingDepth:(_Bool)arg2;
- (void)prepareForRenderingWithPreparedPixelBufferPool;
- (void)changeToFilters:(id)arg1 animated:(_Bool)arg2;
- (id)videoInput;

@end
