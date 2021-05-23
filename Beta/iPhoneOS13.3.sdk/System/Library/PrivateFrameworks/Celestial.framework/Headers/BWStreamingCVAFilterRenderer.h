/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWFigVideoCaptureDevice, BWPixelBufferPool, BWSpringSimulation, BWStreamingCVAFilterRendererAnimator, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@protocol CVAPortraitGenericRequest, CVAPortraitVideoPipeline, OS_dispatch_queue;

@interface BWStreamingCVAFilterRenderer : NSObject

{
    NSObject<OS_dispatch_queue> *_sharedContextQueue;
    struct {
        _Bool depthFilterEnabled;
        struct __CVBuffer *mostRecentPostprocessedDisparityBuffer;
        float mostRecentFocusDisparity;
        float mostRecentDeltaDisparity;
        float mostRecentPortraitStability;
        int numberOfFramesSinceLastStableFocus;
        float clientSuppliedSimulatedAperture;
        float clientSuppliedPortraitLightingEffectStrength;
        _Bool mostRecentStructuredLightOcclusion;
        NSArray *mostRecentDetectedFaces;
        NSArray *mostRecentFilteredFaces;
        id <CVAPortraitGenericRequest> previousPortraitRequest;
        int previousStagePreviewStatus;
    } _sharedContext;
    id <CVAPortraitVideoPipeline> _portraitVideoPipeline;
    BWPixelBufferPool *_postprocessedDisparityBufferPool;
    struct __CVBuffer *_mattingBuffer;
    int _depthDataSource;
    BWFigVideoCaptureDevice *_captureDevice;
    _Bool _studioAndContourRenderingEnabled;
    _Bool _stageRenderingEnabled;
    BWSpringSimulation *_stageProxyLiveRenderingSpringSimulation;
    BWStreamingCVAFilterRendererAnimator *_animator;
    NSMutableDictionary *_faceVisibilityByFaceID;
    NSMutableArray *_postprocessedFaces;
}

@property (nonatomic, readonly) _Bool studioAndContourRenderingEnabled;
@property (nonatomic, readonly) _Bool stageRenderingEnabled;
@property float simulatedAperture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) _Bool supportsAnimation;
@property (nonatomic, readonly) _Bool adjustsMetadata;

+ (void)initialize;

- (void)dealloc;
- (float)portraitLightingEffectStrength;
- (void)setPortraitLightingEffectStrength:(float)arg1;
- (int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (void)renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 originalPixelBuffer:(struct __CVBuffer *)arg4 processedPixelBuffer:(struct __CVBuffer *)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithCaptureDevice:(id)arg1 studioAndContourRenderingEnabled:(_Bool)arg2 stageRenderingEnabled:(_Bool)arg3 depthDataSource:(int)arg4;
- (void)disparityPostprocessingRequest:(id)arg1 didCompleteDisparityPostprocessingWithResult:(id)arg2;
- (void)mattingRequest:(id)arg1 didCompleteMattingWithResult:(id)arg2;
- (void)portraitRequest:(id)arg1 didCompletePortraitWithResult:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeFaceVisibilityForFacesMissingFromDetectedFaces:(id)arg1;

@end
