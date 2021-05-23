/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class CAMetalLayer, MISSING_TYPE, MTLRenderPassDescriptor, NSMutableArray, NSMutableDictionary, NSString, SCNMTLMesh, SCNMTLMeshElement, SCNMTLRenderPipeline, SCNMTLResourceManager, SCNMTLShadable;

@protocol CAMetalDrawable, MTLBuffer, MTLCommandBuffer, MTLCommandQueue, MTLDepthStencilState, MTLDevice, MTLRenderCommandEncoder, MTLSamplerState, MTLTexture, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SCNMTLRenderContext : NSObject

{
    C3DColor4_a26f5c89 _rendererPremultipliedBackgroundColor;
    long long _currentFrameIndex;
    struct __C3DEngineStats *__engineStats;
    double _superSamplingFactor;
    struct SCNMatrix4 _screenTransform;
    long long _sampleCount;
    _Bool _needSuperSampling;
    SCNMTLResourceManager *_resourceManager;
    id <MTLDevice> _device;
    _Bool _isValidationEnabled;
    int _profile;
    unsigned int _features;
    struct __C3DEngineContext *_engineContext;
    unsigned int _wantsWideGamut:1;
    unsigned int _isOpaque:1;
    unsigned int _disableLinearRendering:1;
    unsigned int _enableARMode:1;
    unsigned int _shouldDelegateARCompositing:1;
    unsigned int _useFunctionConstants:1;
    unsigned int _reverseZ:1;
    id <MTLCommandQueue> _ownedCommandQueue;
    NSObject<OS_dispatch_semaphore> *_inFlightSemaphore;
    struct atomic<int> _pendingGPUFrameCount;
    id <MTLTexture> _textureTarget;
    CAMetalLayer *_layerTarget;
    id <CAMetalDrawable> _drawable;
    float _targetedFrameInterval;
    _Bool _shouldPresentAfterMinimumDuration;
    MTLRenderPassDescriptor *_currentRenderPassDescriptor;
    MTLRenderPassDescriptor *_originalRenderPassDescriptor;
    MISSING_TYPE *_renderSize;
    id <MTLCommandBuffer> _currentCommandBuffer;
    struct SCNMTLRenderCommandEncoder *_renderEncoder;
    id <MTLCommandBuffer> _resourceCommandBuffer;
    struct SCNMTLBlitCommandEncoder _resourceBlitEncoder;
    struct SCNMTLComputeCommandEncoder _resourceComputeEncoder;
    CDStruct_7e4e619b _renderPassParameters;
    CDStruct_21854d8c _currentStreamBufferIndices;
    struct SCNMTLBufferPool *_volatileBufferPools[3];
    struct SCNMTLBufferPool *_frameVolatileBufferPool;
    NSMutableArray *_volatileMeshes;
    NSMutableArray *_bufferPool;
    NSMutableArray *_usedVolatileMeshElements;
    NSMutableArray *_freeVolatileMeshElements;
    struct SCNMTLBufferPool *_constantBufferPools[3];
    struct SCNMTLBufferPool *_frameConstantBufferPool;
    struct SCNMTLTexturePool *_frameTexturePool;
    id <MTLDepthStencilState> _defaultDepthStencilState;
    id <MTLSamplerState> _defaultSamplerState;
    struct __C3DFXMetalProgram *_background2DProgram[3];
    struct __C3DFXMetalProgram *_backgroundCubeProgram[3];
    struct __C3DFXMetalProgram *_backgroundVideoProgram;
    struct __C3DFXMetalProgram *_backgroundVideoAlpha0Program;
    struct __C3DRasterizerStates *_backgroundRasterizerStates;
    double _initialTime;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSObject<OS_dispatch_group> *_resourceGroup;
    id <MTLBuffer> _shadowKernelBuffer;
    struct {
        struct __C3DFXPassInstance *passInstance;
        struct __C3DLightingSystem *lightingSystem;
        struct __C3DDynamicBatchingSystem *dynamicBatchingSystem;
        struct __C3DFXPass *pass;
        void *renderGraphPass;
        _Bool passRequiresLighting;
        struct __C3DTransformTree *transformTree;
    } _processingContext;
    unsigned int _seed;
    struct SCNSceneBuffer _frameUniforms[6];
    CDStruct_deec94a8 _sceneUniforms;
    struct {
        id <MTLBuffer> buffer;
        unsigned long long offset;
        unsigned long long size;
        id <MTLTexture> shadowMaps[256];
        id <MTLTexture> textureMaps[256];
        id <MTLSamplerState> samplerStates[256];
    } _lightsData;
    struct {
        struct float4x4 modelTransform;
        struct float4x4 lastFrameModelTransform;
        struct float4x4 normalTransform;
        struct float4x4 modelViewTransform;
        struct float4x4 modelViewProjectionTransform;
        struct float2x3 boundingBox;
        struct float2x3 worldBoundingBox;
        struct __C3DNode *instanceNode;
        unsigned int flags;
        unsigned int *probeCacheIndex;
        unsigned int boneTransformSizeWritten;
    } _nodeUniforms;
    struct {
        CDStruct_c6b9131d currentLightingSet;
        id <MTLTexture> currentShadowMaps[8];
        id <MTLTexture> currentGoboMaps[8];
        struct unordered_map<unsigned long long, SCNMTLLightSetData, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCNMTLLightSetData>>> frameLightingSetDatas;
        unsigned long long currentLightingHashKey;
        struct {
            long long count;
            struct __C3DLight *lights[8];
            struct __C3DLightRuntimeData *lightsData[8];
        } currentLightingDesc;
        CDStruct_14d5dc5e currentLightingSpace;
        CDStruct_14d5dc5e currentLightingSpaceShadow;
        _Bool needLightingSpaceTransformation;
        struct SCNMTLClusterSystem clusterSystem;
        struct Info clusterInfo;
        id <MTLTexture> reflectionProbesTextureArray;
    } _lighting;
    struct Cache {
        struct __C3DRasterizerStates *rasterizerStates;
        struct __C3DMesh *mesh;
        SCNMTLMesh *metalMesh;
        struct __C3DMeshElement *meshElement;
        SCNMTLMeshElement *metalMeshElement;
        struct __C3DFXProgram *program;
        struct __C3DMaterial *material;
        struct __C3DGeometry *geometry;
        SCNMTLShadable *metalShadable;
        struct __C3DEffectCommonProfile *commonProfile;
        struct __C3DBlendStates *blendStates;
        unsigned char colorBufferWriteMask;
        unsigned char topologyClass;
        struct __C3DNode *node;
        unsigned long long vertexDescriptorHash;
        unsigned char tessellationPipelineStateHash;
        SCNMTLRenderPipeline *renderPipeline;
    } _cache;
    struct {
        struct __C3DFXPass *debugLightMeshPass[7];
        struct __C3DFXPass *lightPasses[7];
        struct __C3DMesh *lightMeshes[7];
        _Bool resourcesAreReady;
    } _deferredRendering;
    struct {
        unsigned long long hash;
        SCNMTLRenderPipeline *pipeline;
    } _compositeRendering[2];
    SCNMTLRenderPipeline *_downSamplePipeline;
    struct {
        id <MTLTexture> backgroundTexture;
        id <MTLTexture> overlayTexture;
        id <MTLTexture> stencilDepthTexture;
    } _skCompositing;
    struct {
        unsigned long long pixelFormat;
        unsigned long long sampleCount;
        SCNMTLRenderPipeline *displayCubemapPipeline;
        SCNMTLRenderPipeline *displayTexture2DPipeline;
        SCNMTLRenderPipeline *displayDepth2DPipeline;
        SCNMTLRenderPipeline *displayDepthCubePipeline;
    } _debug;
    _Bool _showsAuthoringEnvironment;
    struct {
        _Bool collectEnabled;
        NSMutableDictionary *errors;
    } _compilationIssues;
    struct {
        unsigned int modelTransformBindingCount;
        unsigned int modelViewTransformBindingCount;
        unsigned int normalTransformBindingCount;
        unsigned int nodeOpacityBindingCount;
    } _counters;
    struct {
        unsigned long long passHash;
        struct __C3DMaterial *material;
    } _renderGraph;
    _Bool enablesDeferredShading;
    MTLRenderPassDescriptor *_clientRenderPassDescriptor;
    id <MTLRenderCommandEncoder> _clientRenderCommandEncoder;
    id <MTLCommandBuffer> _clientCommandBuffer;
    unsigned long long _debugOptions;
    double _contentScaleFactor;
    id <MTLCommandQueue> _clientCommandQueue;
    NSString *_generatedTexturePath;
}

@property (nonatomic, readonly) long long pendingGPUFrameCount;
@property (nonatomic) long long sampleCount;
@property (nonatomic) double contentScaleFactor;
@property (nonatomic) double superSamplingFactor;
@property (nonatomic) struct SCNMatrix4 screenTransform;
@property (nonatomic) _Bool wantsWideGamut;
@property (nonatomic) _Bool disableLinearRendering;
@property (nonatomic) _Bool enableARMode;
@property (nonatomic) _Bool shouldDelegateARCompositing;
@property (nonatomic) _Bool isOpaque;
@property (nonatomic, readonly) long long currentFrameIndex;
@property (nonatomic) _Bool showsAuthoringEnvironment;
@property (nonatomic) _Bool enablesDeferredShading;
@property (nonatomic) _Bool reverseZ;
@property (nonatomic) _Bool collectsCompilationErrors;
@property (nonatomic, readonly) NSMutableDictionary *compilationErrors;
@property (retain, nonatomic) NSString *generatedTexturePath;
@property (nonatomic, readonly) unsigned int features;
@property (nonatomic, readonly) int profile;
@property (nonatomic, readonly) SCNMTLResourceManager *resourceManager;
@property (nonatomic) unsigned long long debugOptions;
@property (nonatomic, readonly) id <MTLRenderCommandEncoder> currentRenderCommandEncoder;
@property (nonatomic, readonly) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (nonatomic, readonly) id <MTLCommandBuffer> currentCommandBuffer;
@property (nonatomic, readonly) id <MTLCommandBuffer> resourceCommandBuffer;
@property (nonatomic, readonly) struct SCNMTLComputeCommandEncoder *resourceComputeEncoder;
@property (nonatomic, readonly) struct SCNMTLBlitCommandEncoder *resourceBlitEncoder;
@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) struct __C3DEngineContext *engineContext;
@property (nonatomic, readonly) id <MTLTexture> textureTarget;
@property (nonatomic, readonly) CAMetalLayer *layerTarget;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) _Bool shouldPresentAfterMinimumDuration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *resourceGroup;
@property (retain, nonatomic) MTLRenderPassDescriptor *clientRenderPassDescriptor;
@property (retain, nonatomic) id <MTLRenderCommandEncoder> clientRenderCommandEncoder;
@property (retain, nonatomic) id <MTLCommandBuffer> clientCommandBuffer;
@property (retain, nonatomic) id <MTLCommandQueue> clientCommandQueue;
@property (nonatomic, readonly) id <MTLCommandQueue> commandQueue;
@property (nonatomic, readonly) void *frameConstantBufferPool;
@property (nonatomic, readonly) void *frameTexturePool;
@property (nonatomic, readonly) void *renderEncoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)registerBindings;

- (void)dealloc;
- (id).cxx_construct;
- (void)pushDebugGroup:(id)arg1;
- (void)popDebugGroup;
- (MISSING_TYPE *)renderSize;
- (void)writeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (_Bool)mapVolatileMesh:(struct __C3DMesh *)arg1 verticesCount:(long long)arg2;
- (void)unmapVolatileMesh:(struct __C3DMesh *)arg1 modifiedVerticesCount:(long long)arg2;
- (void)drawRenderElement:(struct __C3DRendererElement *)arg1 withPass:(struct __C3DFXPass *)arg2;
- (id)textureForEffectSlot:(struct __C3DEffectSlot *)arg1;
- (void)_drawFullScreenTexture:(id)arg1 over:(_Bool)arg2;
- (void)renderSKSceneWithRenderer:(id)arg1 overlay:(_Bool)arg2 atTime:(double)arg3;
- (unsigned long long)cubeArrayTypeIfSupported;
- (id)_finalRenderTexture;
- (void)beginRenderPass:(id)arg1 renderEncoder:(void *)arg2 parameters:(CDStruct_7e4e619b)arg3;
- (void)endRenderPass;
- (struct __C3DEngineStats *)stats;
- (void)renderMesh:(struct __C3DMesh *)arg1 meshElement:(struct __C3DMeshElement *)arg2 withProgram:(struct __C3DFXProgram *)arg3 engineContext:(struct __C3DEngineContext *)arg4 transform:(union C3DMatrix4x4)arg5 color:(const C3DColor4_0cad58d8 *)arg6 rasterizerStates:(struct __C3DRasterizerStates *)arg7 blendState:(struct __C3DBlendStates *)arg8 texture:(struct __C3DImage *)arg9 depthBias:(_Bool)arg10;
- (void)renderVideoBackground:(struct __C3DImageProxy *)arg1 engineContext:(struct __C3DEngineContext *)arg2;
- (void)renderBackground:(struct __C3DEffectSlot *)arg1 engineContext:(struct __C3DEngineContext *)arg2 passInstance:(struct __C3DFXPassInstance *)arg3;
- (_Bool)supportsMTLFeatureSet:(unsigned long long)arg1;
- (void)resetVolatileMeshes;
- (void)resetVolatileMeshElements;
- (void)_createResourceCommandBufferIfNeeded;
- (void)_clearRenderCaches;
- (void)_updateProjectionMatrixForOrthographicSkyboxRenderingIfNeeded:(union C3DMatrix4x4 *)arg1;
- (void)setRasterizerStates:(struct __C3DRasterizerStates *)arg1;
- (float)_zFarForSkyboxRenderingProjectionMatrix:(const union C3DMatrix4x4 *)arg1 defaultZFar:(float)arg2;
- (void)_setMeshBuffers:(id)arg1;
- (void)_drawMeshElement:(id)arg1 instanceCount:(unsigned long long)arg2;
- (void)startProcessingRendererElementsWithEngineIterationContext:(CDStruct_65434d98 *)arg1;
- (void)beginDeferredLighting;
- (void)renderLight:(struct __C3DNode *)arg1 lightType:(int)arg2 lightData:(struct __C3DLightRuntimeData *)arg3;
- (void)endDeferredLighting;
- (void)drawWireframeOverlayForElements:(CDStruct_d65e47c4 *)arg1 range:(CDStruct_912cb5d2)arg2 store:(struct __C3DRendererElementStore *)arg3 passInstance:(struct __C3DFXPassInstance *)arg4;
- (void)stopProcessingRendererElements:(_Bool)arg1;
- (void)_drawPBRTextures;
- (void)_drawShadowMaps;
- (id)irradianceTextureForEffectSlot:(struct __C3DEffectSlot *)arg1;
- (id)_newMTLBufferFromPoolWithLength:(unsigned long long)arg1;
- (void)_recycleMTLBufferToPool:(id)arg1;
- (struct __C3DFXPass *)_createPassWithVertex:(id)arg1 fragment:(id)arg2;
- (id)radianceTextureForEffectSlot:(struct __C3DEffectSlot *)arg1;
- (void)_reduceStatsOfConstantBuffer:(id)arg1;
- (id)initWithDevice:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2;
- (void)_clearUnusedBindingPoints;
- (void)setRendererPremultipliedBackgroundColor:(C3DColor4_0cad58d8)arg1;
- (void)beginFrame:(id)arg1;
- (void)endFrameSceneSpecifics;
- (void)endFrameWaitingUntilCompleted:(_Bool)arg1;
- (id)_reflectionProbeArrayTexture;
- (void)_setReflectionProbeArrayTexture:(id)arg1;
- (void *)_clusterInfo;
- (id)newRenderTargetWithDescription:(CDStruct_ace98575 *)arg1 size:(unsigned long long)arg2 arrayLength: /* Error: Ran out of types for this method. */;
- (void)_logLightingInformation;
- (void)_setSceneBufferAtVertexIndex:(long long)arg1 fragmentIndex:(long long)arg2;
- (void)_drawPatchForMeshElement:(id)arg1 instanceCount:(unsigned long long)arg2;
- (void)processRendererElements:(CDStruct_d65e47c4 *)arg1 count:(unsigned int)arg2 engineIterationContext:(CDStruct_65434d98 *)arg3;
- (void)_prepareMaterialTextures:(struct __C3DMaterial *)arg1;
- (struct __C3DMeshElement *)createVolatileMeshElementOfType:(BOOL)arg1 primitiveCount:(long long)arg2 bytesPerIndex:(long long)arg3;
- (void)unmapVolatileMeshElement:(struct __C3DMeshElement *)arg1;
- (void)drawFullScreenQuadForPass:(struct __C3DFXPass *)arg1;
- (float)renderTime;
- (void)endRenderCommandEncoding;
- (void)setCurrentPassHash:(unsigned long long)arg1;
- (void)setCurrentPassMaterial:(struct __C3DMaterial *)arg1;
- (unsigned long long)getCurrentPassHash;
- (struct __C3DMaterial *)getCurrentPassMaterial;

@end
