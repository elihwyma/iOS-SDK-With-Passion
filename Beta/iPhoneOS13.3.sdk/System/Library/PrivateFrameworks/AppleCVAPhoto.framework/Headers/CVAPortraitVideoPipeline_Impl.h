/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class CVAFilterAlphaBlend, NSDictionary, NSString, VideoMattingMetal, VideoRelightingMetal;

@protocol CVAVideoPipelineProperties, CVAVideoPipelinePropertiesSPI, MTLTexture, OS_dispatch_queue;

@interface CVAPortraitVideoPipeline_Impl : NSObject

{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id <CVAVideoPipelinePropertiesSPI> _properties;
    struct __CVBuffer *_untransformedCanonicalDisparityPixelBuffer;
    struct __CVPixelBufferPool *_canonicalDisparityPixelBufferPool;
    struct VideoPostprocessingParams _vmPostprocessingParams;
    struct VideoMattingStaticParams _vmStaticParams;
    struct VideoMattingDynamicParams _vmDynamicParams;
    struct DynamicMetaParams _vmDynamicMetaParams;
    struct Preferences _preferences;
    struct unique_ptr<DisparityConversion, std::__1::default_delete<DisparityConversion>> _disparityConversion;
    struct unique_ptr<GeometricTransformation, std::__1::default_delete<GeometricTransformation>> _disparityGeometricTransformation;
    struct unique_ptr<FocusStatsPostprocessing, std::__1::default_delete<FocusStatsPostprocessing>> _focusStatsPostprocessing;
    struct unique_ptr<DisparityAutofocus, std::__1::default_delete<DisparityAutofocus>> _disparityAutofocus;
    struct unique_ptr<DisparityStatistics, std::__1::default_delete<DisparityStatistics>> _disparityStatistics;
    struct unique_ptr<cva::FocusStateMachine, std::__1::default_delete<cva::FocusStateMachine>> _focusStateMachine;
    struct unique_ptr<StageLightStateMachine, std::__1::default_delete<StageLightStateMachine>> _stageLightStateMachine;
    struct unique_ptr<SdofStateMachine, std::__1::default_delete<SdofStateMachine>> _sdofIntensityStateMachine;
    VideoMattingMetal *_vmAccelerator;
    VideoRelightingMetal *_vrAccelerator;
    CVAFilterAlphaBlend *_filterAlphaBlend;
    RetainPtr_64b82504 _intermediateRelightSourceBuffer;
    RetainPtr_64b82504 _intermediateTransitionBufferFrom;
    RetainPtr_64b82504 _intermediateTransitionBufferTo;
    NSDictionary *_faceKitProcessOutput;
    float _portraitStyleStrength;
    struct TransitionData _transitionData;
    float _referenceLensPosition_um;
    struct CVAPhotoMetalContext _metalContext;
    int _debugGPUCaptureFrameNumber;
    _Bool _debugLogTransition;
    _Bool _debugLogTransitionPrintTrivial01;
    id <MTLTexture> _yuvSourceDownsampledAlias;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) id <CVAVideoPipelineProperties> videoPipelineProperties;

+ (void)drawDisparity:(struct __CVBuffer *)arg1 onColor:(struct __CVBuffer *)arg2 canonical:(_Bool)arg3 rawShiftInvalidThreshold:(int)arg4 focusMachineState:(int)arg5 offsetX:(unsigned long long)arg6 offsetY:(unsigned long long)arg7;
+ (int)pixelBufferPoolCreateWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 pool:(struct __CVPixelBufferPool **)arg4;

- (void)dealloc;
- (id).cxx_construct;
- (int)renderWithRequest:(id)arg1 requestTo:(id)arg2 mixValue:(float)arg3 destinationColorPixelBuffer:(struct __CVBuffer *)arg4 error:(id *)arg5 disparityPostprocessingCompletionHandler:(CDUnknownBlockType)arg6 mattingCompletionHandler:(CDUnknownBlockType)arg7 portraitCompletionHandler:(CDUnknownBlockType)arg8;
- (int)renderWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(CDUnknownBlockType)arg2 mattingCompletionHandler:(CDUnknownBlockType)arg3 portraitCompletionHandler:(CDUnknownBlockType)arg4;
- (int)extractMatteWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(CDUnknownBlockType)arg2 mattingCompletionHandler:(CDUnknownBlockType)arg3;
- (int)postprocessDisparityWithRequest:(id)arg1;
- (int)postprocessDisparityWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithProperties:(id)arg1 error:(id *)arg2;
- (_Bool)validateSegmentationPixelBuffer:(struct __CVBuffer *)arg1 matchFormat:(id)arg2 error:(id *)arg3;
- (_Bool)validateDisparityPostprocessingRequest:(id)arg1 error:(id *)arg2;
- (_Bool)validateMattingRequest:(id)arg1 error:(id *)arg2;
- (_Bool)validatePortraitRequest:(id)arg1 error:(id *)arg2;
- (id)internal_postprocessDisparityWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(CDUnknownBlockType)arg2 isFinalStage:(_Bool)arg3 status:(int *)arg4;
- (int)internal_fixFocusPositionWithDisparityPostprocessingRequest:(id)arg1;
- (id)internal_extractMatteWithRequest:(id)arg1 disparityPostprocessingResult:(id)arg2 usePostprocessedDisparity:(_Bool)arg3 dilateForegroundMask:(_Bool)arg4 gravity:(struct CVAVector)arg5 transitionData:(const struct TransitionData *)arg6 mattingCompletionHandler:(CDUnknownBlockType)arg7 isFinalStage:(_Bool)arg8 status:(int *)arg9;
- (void)internal_renderWithRequest:(id)arg1 dstBuffer:(struct __CVBuffer *)arg2 mattingResult:(id)arg3 portraitCompletionHandler:(CDUnknownBlockType)arg4 status:(int *)arg5 timestamp:(long long)arg6;
- (void)internal_renderStageLightWithRequest:(id)arg1 mattingResult:(id)arg2 portraitCompletionHandler:(CDUnknownBlockType)arg3 status:(int *)arg4;
- (void)internal_relightWithRequest:(id)arg1 intermediateSourceBuffer:(struct __CVBuffer *)arg2 faceKitProcessOutput:(id)arg3 portraitStyleStrength:(float)arg4 mattingResult:(id)arg5 singleCubeData:(id)arg6 portraitCompletionHandler:(CDUnknownBlockType)arg7 timestamp:(long long)arg8 status:(int *)arg9;
- (int)extractMatteWithRequest:(id)arg1;
- (int)renderWithRequest:(id)arg1;
- (int)renderSingleEffectWithRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer *)arg2 error:(id *)arg3 disparityPostprocessingCompletionHandler:(CDUnknownBlockType)arg4 mattingCompletionHandler:(CDUnknownBlockType)arg5 portraitCompletionHandler:(CDUnknownBlockType)arg6 requestFrom:(id)arg7 requestTo:(id)arg8;

@end
