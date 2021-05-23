/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class MTKTextureLoader, NSMutableArray, SCNMTLBufferAllocator, SCNMTLLibraryManager, SCNMTLShadableKey, SCNMTLShaderBindingsGenerator;

@protocol MTLCommandQueue, MTLDepthStencilState, MTLDevice, MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNMTLResourceManager : NSObject

{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    struct __C3DEngineStats *__engineStats;
    SCNMTLLibraryManager *_libraryManager;
    SCNMTLShaderBindingsGenerator *_bindingsGenerator;
    struct __CFDictionary *_availablePipelineStates;
    struct os_unfair_lock_s _availablePipelineStatesLock;
    SCNMTLBufferAllocator *_commonProfileBuffersAllocator;
    CDStruct_670bd187 _availableLightingSystemReflectionProbeTextures;
    CDStruct_670bd187 _availableIrradianceTextures;
    CDStruct_670bd187 _availableRadianceTextures;
    CDStruct_670bd187 _availableImages;
    CDStruct_670bd187 _availableImageProxy;
    CDStruct_670bd187 _availableSamplers;
    CDStruct_670bd187 _availableIESTextures;
    CDStruct_670bd187 _availableBuffers;
    CDStruct_670bd187 _availableMeshes;
    CDStruct_670bd187 _availableMeshSources;
    CDStruct_670bd187 _availableMeshElements;
    CDStruct_670bd187 _availableRasterizerStates;
    CDStruct_670bd187 _availableMorphs;
    CDStruct_670bd187 _availableSkins;
    CDStruct_670bd187 _availableComputePipelines;
    CDStruct_670bd187 _availableComputePipelinesWithStageDescriptor;
    CDStruct_670bd187 _availableTessellators;
    CDStruct_670bd187 _availableWireframeMaterials;
    CDStruct_670bd187 _availableShadables;
    SCNMTLShadableKey *_availableShadablesSearchKey;
    NSMutableArray *_availableStageDescriptors;
    struct os_unfair_lock_s _stageDescriptorsLock;
    id _nullStageDescriptor;
    id <MTLTexture> _areaLightPrecomputedDataTexture;
    id <MTLTexture> _specularDFGTexture;
    struct __C3DFXMetalProgram *_defaultProgram;
    struct __C3DFXMetalProgram *_defaultProgramForTessellation;
    struct __C3DFXMetalProgram *_isolateProgram;
    id <MTLDepthStencilState> _depthAndStencilStateWithReadWriteDepthDisabled;
    id <MTLTexture> _defaultTexture;
    id <MTLTexture> _defaultTexture3D;
    id <MTLTexture> _defaultCubeTexture;
    id <MTLTexture> _defaultLightingEnvironmentIrradianceTexture;
    id <MTLTexture> _defaultLightingEnvironmentRadianceTexture;
    MTKTextureLoader *_mtkTextureLoader;
}

@property (retain, nonatomic) SCNMTLLibraryManager *libraryManager;
@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) id <MTLCommandQueue> commandQueue;

+ (void)unregisterManagerForDevice:(id)arg1;
+ (id)resourceManagerForDevice:(id)arg1;

- (void)dealloc;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)initWithDevice:(id)arg1;
- (void)flush;
- (id)newComputePipelineStateWithFunctionName:(id)arg1;
- (id)newRenderPipelineStateWithDesc:(CDStruct_0aa79a9f)arg1;
- (id)renderResourceForMesh:(struct __C3DMesh *)arg1 dataKind:(unsigned char)arg2;
- (id)computePipelineStateForKernel:(id)arg1;
- (id)newComputePipelineStateForKernel:(id)arg1 withStageDescriptor:(id)arg2 constants:(id)arg3 constantsHash:(id)arg4;
- (id)renderResourceForMorph:(struct __C3DMorph *)arg1 baseGeometry:(struct __C3DGeometry *)arg2;
- (id)renderResourceForSkinner:(struct __C3DSkinner *)arg1 baseMesh:(struct __C3DMesh *)arg2 baseGeometry:(struct __C3DGeometry *)arg3;
- (id)renderResourcesForEffectSlot:(struct __C3DEffectSlot *)arg1 withEngineContext:(struct __C3DEngineContext *)arg2;
- (id)defaultLightingEnvironmentRadianceTexture;
- (void)_meshSourceWillDie:(id)arg1;
- (void)_meshElementWillDie:(id)arg1;
- (void)_meshWillDie:(id)arg1;
- (void)_imageWillDie:(id)arg1;
- (void)_imageProxyWillDie:(id)arg1;
- (void)_programWillDie:(id)arg1;
- (void)_passWillDie:(id)arg1;
- (void)_materialWillDie:(id)arg1;
- (void)_geometryWillDie:(id)arg1;
- (void)_morphWillDie:(id)arg1;
- (void)_skinWillDie:(id)arg1;
- (void)_programHashCodeWillDie:(id)arg1;
- (void)_removeMatchingProgram:(struct __C3DFXProgram *)arg1 pass:(struct __C3DFXPass *)arg2;
- (id)renderResourceForMeshElement:(struct __C3DMeshElement *)arg1;
- (id)_bufferForData:(struct __CFData *)arg1 bytesPerIndex:(unsigned long long)arg2;
- (void)__updateMutableMesh:(struct __C3DMesh *)arg1 withMetalMesh:(id)arg2;
- (id)renderResourceForMeshSource:(struct __C3DMeshSource *)arg1;
- (id)newConstantBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)renderResourceForSampler:(struct __C3DTextureSampler *)arg1;
- (void)removeAllShaders;
- (void)resetRasterizerStates;
- (id)renderResourceForRasterizerState:(struct __C3DRasterizerStates *)arg1 reverseZ:(_Bool)arg2;
- (id)renderResourceForTessellatedGeometry:(struct __C3DGeometry *)arg1;
- (id)wireframeResourceForRendererElement:(struct __C3DRendererElement *)arg1 engineContext:(struct __C3DEngineContext *)arg2 passInstance:(struct __C3DFXPassInstance *)arg3 hashPass:(unsigned long long)arg4;
- (id)newIndexBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)renderResourceForMaterial:(struct __C3DMaterial *)arg1 geometry:(struct __C3DGeometry *)arg2 renderPipeline:(id)arg3 engineContext:(struct __C3DEngineContext *)arg4;
- (void)dispatchForTexture:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;
- (void)dispatchForCubemap:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;
- (struct __C3DEngineStats *)stats;
- (id)depthAndStencilStateWithReadWriteDepthDisabled;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 constantValues:(id)arg2;
- (id)cubemapTextureForLatlongTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 engineContext:(struct __C3DEngineContext *)arg3 needsMipmap:(_Bool)arg4;
- (id)renderResourceForImageProxy:(struct __C3DImageProxy *)arg1 sampler:(struct __C3DTextureSampler *)arg2 engineContext:(struct __C3DEngineContext *)arg3;
- (id)renderResourceForImage:(struct __C3DImage *)arg1 sampler:(struct __C3DTextureSampler *)arg2 options:(int)arg3 engineContext:(struct __C3DEngineContext *)arg4;
- (id)_textureDescriptorFromImage:(struct __C3DImage *)arg1 needsMipMap:(_Bool)arg2 textureOptions:(int)arg3;
- (_Bool)_copyImage:(struct __C3DImage *)arg1 toTexture:(id)arg2 desc:(id)arg3 textureOptions:(int)arg4 needsMipMapGeneration:(_Bool)arg5;
- (id)convertTextureToCubeMapIfApplicable:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 needsMipmap:(_Bool)arg3;
- (id)newTextureUsingMTKTextureLoaderWithURL:(id)arg1 options:(id)arg2;
- (void)_enqueueCopyFromTexture:(id)arg1 toTexture:(id)arg2 blitEncoder:(struct SCNMTLBlitCommandEncoder *)arg3 generateMipMaps:(_Bool)arg4;
- (id)latlongTextureForCubemap:(id)arg1 pixelFormat:(unsigned long long)arg2 renderContext:(id)arg3 needsMipmap:(_Bool)arg4;
- (id)unstageTexture:(id)arg1 commandBuffer:(id)arg2;
- (id)defaultTexture;
- (id)defaultCubeTexture;
- (id)defaultTexture3D;
- (id)iesTextureForProfile:(id)arg1 renderContext:(id)arg2;
- (void)reloadPipelinesIfNeeded;
- (id)irradianceTextureForEnvironmentTexture:(id)arg1 renderContext:(id)arg2 applySH:(CDUnknownBlockType)arg3;
- (id)radianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 commandBuffer:(id)arg3;
- (id)renderResourceForProgramDesc:(CDStruct_1c56e179)arg1 renderPassDescriptor:(id)arg2;
- (id)specularDFGTextureWithRenderContext:(id)arg1;
- (id)areaLightPrecomputedDataTexture;
- (id)defaultLightingEnvironmentIrradianceTexture;
- (struct __C3DFXProgram *)defaultProgramUsingTessellation:(_Bool)arg1;
- (void)_bakeSphericalHamonicsBasedIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 renderContext:(id)arg3 applySH:(CDUnknownBlockType)arg4;
- (id)sphericalHarmonicsForEnvironmentTexture:(id)arg1 order:(unsigned long long)arg2 commandBuffer:(id)arg3;
- (id)newRadianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 cpuAccessible:(_Bool)arg3 commandBuffer:(id)arg4;
- (void)_bakeStochasticIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 mipmapLevelForSampling:(unsigned long long)arg3 useTextureView:(_Bool)arg4 renderContext:(id)arg5;
- (id)textureForSamplingTexture:(id)arg1 atSize:(unsigned long long)arg2 mipmapLevelCount:(unsigned long long *)arg3 renderContext:(id)arg4;
- (id)shFromCPU:(id)arg1 commandBuffer:(id)arg2;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2;
- (void)_createPipelineStateWithDescriptor:(id)arg1 desc:(CDStruct_0aa79a9f)arg2 pipeline:(id)arg3;
- (id)_newComputeDescriptorForPipelineDesc:(CDStruct_4cea7480)arg1 library:(id)arg2;
- (void)_configureComputePipeline:(id)arg1 withDescriptor:(id)arg2;
- (id)newComputePipelineStateForDesc:(CDStruct_4cea7480)arg1 library:(id)arg2;
- (id)getUniqueStageDescriptor:(id)arg1;
- (id)computePipelineStateForKernel:(id)arg1 threadGroupSizeIsMultipleOfThreadExecutionWidth:(_Bool)arg2;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2 constantValues:(id)arg3;

@end
