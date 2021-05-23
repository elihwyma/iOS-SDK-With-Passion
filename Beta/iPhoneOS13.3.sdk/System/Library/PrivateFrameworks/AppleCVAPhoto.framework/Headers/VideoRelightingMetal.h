/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <AppleCVAPhoto/ImageSaverAndFileConfigRegistrator.h>

@class CVAFilterColorAlphaToFgBg, CVAFilterMaskedVariableBlur, CVAPhotoMTLRingBuffer, MISSING_TYPE, MTLRenderPassDescriptor, NSData, NSObject, UIColor;

@protocol CVAVideoPipelinePropertiesSPI, MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDepthStencilState, MTLDeviceSPI, MTLLibrary, MTLRenderPipelineState, MTLTexture, OS_dispatch_queue, OS_dispatch_semaphore;

@interface VideoRelightingMetal : ImageSaverAndFileConfigRegistrator

{
    id <MTLDeviceSPI> _device;
    id <MTLLibrary> _library;
    id <MTLCommandQueue> _commandQueue;
    struct CVAPhotoMetalContext *_metalContext;
    id <CVAVideoPipelinePropertiesSPI> _properties;
    MTLRenderPassDescriptor *_tcRenderDesc;
    id <MTLRenderPipelineState> _tcKernel;
    id <MTLTexture> _tcDepthTexture;
    id <MTLTexture> _tcTexture;
    id <MTLTexture> _lightTexture;
    struct TC_MatrixUniforms _tcMatrixUniformsBuffer;
    id <MTLDepthStencilState> _depthStencilState;
    id <MTLComputePipelineState> _kernel_CountVertical;
    id <MTLComputePipelineState> _kernel_Count;
    id <MTLComputePipelineState> _kernel_Slide;
    id <MTLComputePipelineState> _kernel_Relight[2][2][2];
    id <MTLComputePipelineState> _kernel_AlphaBlendRGBATextureArray;
    id <MTLTexture> _texStub;
    NSData *_colorCubeUserData;
    id <MTLTexture> _texColorCubeUserData;
    id <MTLTexture> _texColorCubeStaticArray[7];
    _Bool _apiTransitionPeriod;
    id <MTLTexture> _texSelectedColorCube;
    id <MTLTexture> _srcTexture;
    id <MTLTexture> _dstTexture;
    id <MTLTexture> _dstUVTexture;
    long long _frameIndex;
    long long _frameIndexWhenFacekitAllowed;
    id <MTLTexture> _alphaTexture;
    _Bool _trustAlpha;
    id <MTLTexture> _vertCountTexture;
    id <MTLTexture> _countTexture;
    id <MTLTexture> _slideTexture;
    id <MTLTexture> _rgbTransformMapContourNearTexture[2];
    id <MTLTexture> _rgbTransformMapStudioNearTexture[2];
    id <MTLTexture> _rgbTransformMapContourFarTexture[2];
    id <MTLTexture> _rgbTransformMapStudioFarTexture[2];
    id <MTLTexture> _rgbTransformMapCurrentNearTexturePtr;
    id <MTLTexture> _rgbTransformMapCurrentFarTexturePtr;
    id <MTLTexture> _rgbTransformMapCurrentTextureInterpolated;
    id <MTLTexture> _rgbTransformMapTextureSelectedPtr;
    float _lightMapsNearFarLerp;
    struct SlideUniforms _uniformBuffer_slide;
    // Error: parsing type: '{RelightUniforms="outSizeInv""backgroundColor""proxyToFaceEffectLerp" "blurStrengthByDistance" "portraitStyleStrength" "colorCubeMaskLerp" "colorCubeIntensity" "vignetteIntensity" "vignettingScale" "faceCenter01""faceAngleYawRad" "faceRotMat"{half2x2="columns"[2]}"rightSideTrapezoidU"{TrapezoidUniforms="l0"{LerpUniforms="m" "b" }"l1"{LerpUniforms="m" "b" }"ymin" "ymax" }"leftSideTrapezoidU"{TrapezoidUniforms="l0"{LerpUniforms="m" "b" }"l1"{LerpUniforms="m" "b" }"ymin" "ymax" }"horAngleLerpClampU"{LerpClampUniforms="l"{LerpUniforms="m" "b" }"y0" "y1" }}', name: _uniformBuffer_relight
    struct float4x4 _modelViewProjectionMatrix;
    struct float4x4 _modelViewMatrix;
    struct float4x4 _projectionMatrix;
    MISSING_TYPE *_face3DCenter;
    MISSING_TYPE *_faceModelCenterProjected;
    UIColor *_backgroundColor;
    float _proxyToFaceEffectLerpTemporal;
    float _proxyToFaceEffectLerpFinal;
    float _portraitStyleStrength;
    float _focusDistance;
    NSObject<OS_dispatch_queue> *_synchronousRelightingCallbackQueue;
    NSObject<OS_dispatch_semaphore> *_inflightSemaphore;
    MTLRenderPassDescriptor *_faceRenderDesc1;
    MTLRenderPassDescriptor *_faceRenderDesc2;
    MTLRenderPassDescriptor *_faceRenderDesc3;
    id <MTLRenderPipelineState> _kernel_Face;
    id <MTLTexture> _facemaskRegionTexture;
    struct vector<FaceVertex, std::__1::allocator<FaceVertex>> _modelVertices;
    CVAPhotoMTLRingBuffer *_vertexBuffer;
    struct FaceKitStreamedData _faceKitStreamedData;
    _Bool _faceDetected;
    _Bool _faceDetectedReal;
    struct circular_buffer<bool, std::__1::allocator<bool>> _faceDetectedRealHistory;
    struct optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_variance, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void>> _faceConfidenceRollingVariance;
    struct optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void>> _faceRelightingAngleFactorsRollingMean;
    struct vector<unsigned short, std::__1::allocator<unsigned short>> _faceKitMeshTris;
    id <MTLBuffer> _indexBufferImmutable;
    NSData *_faceKitMeshTexcoords;
    _Bool _debugFace;
    _Bool _debugFaceDraw;
    unsigned long long _indexOfCheekLandmark_topLeft;
    unsigned long long _indexOfCheekLandmark_bottomLeft;
    unsigned long long _indexOfCheekLandmark_topRight;
    unsigned long long _indexOfCheekLandmark_bottomRight;
    struct optional<unsigned long> _closestLeftCheekVertexID;
    optional_6c86f56e _cheekAngle;
    CVAFilterColorAlphaToFgBg *_colorAlphaToFgBg;
    CVAFilterMaskedVariableBlur *_blurPyramidForSkinFg;
    id <MTLTexture> _texSkinRGBAPyramid;
    id <MTLTexture> _texSkinSegmentationAlias;
    float _vignettingScale;
    float _relightingStability;
    double _gpuStartTime;
    double _gpuEndTime;
}

@property (readonly) double gpuStartTime;
@property (readonly) double gpuEndTime;
@property (readonly) float relightingStability;

- (id).cxx_construct;
- (void)initCommon;
- (id)initWithMetalContext:(struct CVAPhotoMetalContext *)arg1;
- (id)create3DTextureWithSize:(unsigned long long)arg1;
- (void)createTexturesWith:(unsigned long long)arg1 imgHeight:(unsigned long long)arg2;
- (void)initKernelFunctions;
- (id)loadCube:(id)arg1;
- (id)getInternalColorCube:(int)arg1;
- (void)saveTexture:(id)arg1 toImage:(id)arg2;
- (void)configureRenderPipeline;
- (void)updateModelAndPose:(vector_f9ed6fc8 *)arg1 camera:(vector_f9ed6fc8 *)arg2;
- (void)setModelVertices;
- (void)generateModelNormals;
- (void)updateMatrixWithWidth:(int)arg1 height:(int)arg2 camera:(const vector_f9ed6fc8 *)arg3 pose:(const vector_f9ed6fc8 *)arg4;
- (void)updateUniforms:(_Bool)arg1;
- (void)loadRGBTransformMapsOnceTo:(id *)arg1 namePrefix:(const basic_string_7c0a1c0b *)arg2 forIntermediateResults:(_Bool)arg3;
- (void)loadRGBTransformMapsForEffectVersion:(_Bool)arg1;
- (void)encodeTCKernelToCommandBuffer:(id)arg1;
- (void)encodeRelightKernelToCommandBuffer:(id)arg1;
- (void)encodeVertCountKernelToCommandBuffer:(id)arg1;
- (void)encodeCountKernelToCommandBuffer:(id)arg1;
- (void)encodeSlideKernelToCommandBuffer:(id)arg1;
- (void)updateFaceKitStreamedDataFromProcessOutput:(id)arg1;
- (void)encodeAlphaBlendRGBATextureArrayToCommandBuffer:(id)arg1 inTexFirst:(id)arg2 inTexSecond:(id)arg3 outTex:(id)arg4 alpha:(const float *)arg5;
- (void)encodeLerpNearFarMapsToCommandBuffer:(id)arg1;
- (void)renderWithSrcImage:(struct __CVBuffer *)arg1 srcAlpha:(struct __CVBuffer *)arg2 trustAlpha:(_Bool)arg3 yuvSourceDownsampled:(id)arg4 skinSegmentation:(struct __CVBuffer *)arg5 dstImage:(struct __CVBuffer *)arg6 faceKitProcessOutput:(id)arg7 portraitStyleStrength:(float)arg8 colorSim:(id)arg9 disparity:(id)arg10 focusDistance:(float)arg11 singleCubeData:(id)arg12 properties:(id)arg13 callbackQueue:(id)arg14 callback:(CDUnknownBlockType)arg15;

@end
