/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class MTLPipelineBufferDescriptor, MTLRenderPipelineDescriptor, NSMutableDictionary, PKLRUCache, PKMetalResourceHandlerBuffer, PKMetalShader;

@protocol MTLBuffer, MTLComputePipelineState, MTLDevice, MTLLibrary, MTLPipelineLibrarySPI, MTLTexture, OS_dispatch_queue;

@interface PKMetalResourceHandler : NSObject

{
    id <MTLComputePipelineState> _particleShaderKernelPipelineState;
    id <MTLComputePipelineState> _particleShaderKernelPipelineStateWithVariableSpacing;
    id <MTLComputePipelineState> _paintShaderKernelPipelineState;
    id <MTLComputePipelineState> _paintShaderKernelPipelineStateWithLiveStroke;
    PKMetalShader *_particleShader;
    PKMetalShader *_particleShaderWithAspectRatioSupport;
    PKMetalShader *_paintShader;
    PKMetalShader *_particleShaderForAccumulator;
    PKMetalShader *_particleShaderForAccumulatorWithAspectRatioSupport;
    PKMetalShader *_paintShaderForAccumulator;
    PKMetalShader *_erasePaintShader;
    PKMetalShader *_erasePaintAccumulatorShader;
    PKMetalShader *_eraseOriginalBackShader;
    PKMetalShader *_paperShader;
    PKMetalShader *_blitIntoPaintShader;
    PKMetalShader *_blitShader;
    PKMetalShader *_singleAttachmentBlitShader;
    PKMetalShader *_eraseShader;
    PKMetalShader *_copyAccumulatorIntoPaintShader;
    PKMetalShader *_linesShader;
    PKMetalShader *_paintCircleShader;
    PKMetalShader *_invertShader;
    id <MTLBuffer> _cachedQuadVertexBuffer;
    id <MTLBuffer> _cachedQuadTexCoordBuffer;
    NSMutableDictionary *_inkTextures;
    struct unordered_map<unsigned long long, PKMetalShader *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, PKMetalShader *>>> _uberShaders;
    id <MTLLibrary> _defaultLibrary;
    id <MTLTexture> _paperTexture;
    struct CGSize _paperTextureSize;
    MTLRenderPipelineDescriptor *_sharedPipelineDescriptor;
    MTLRenderPipelineDescriptor *_singleColorPipelineDescriptor;
    MTLRenderPipelineDescriptor *_singlePaintPipelineDescriptor;
    PKLRUCache *_strokeRenderCache;
    id <MTLBuffer> _particleIndexBuffer;
    id <MTLBuffer> _randomNumberBuffer;
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _signpost_id;
    PKMetalResourceHandlerBuffer *_purgeableResourceBuffer;
    PKMetalResourceHandlerBuffer *_resourceBuffer;
    PKMetalResourceHandlerBuffer *_gpuResourceBuffer;
    id <MTLPipelineLibrarySPI> _pipelineLibrary;
    id <MTLDevice> _device;
    unsigned long long _pixelFormat;
    unsigned long long _paintAndParticlePixelFormat;
    unsigned long long _stencilPixelFormat;
}

@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) unsigned long long paintAndParticlePixelFormat;
@property (nonatomic, readonly) unsigned long long stencilPixelFormat;
@property (nonatomic, readonly) id <MTLTexture> paperTexture;
@property (nonatomic, readonly) struct CGSize paperTextureSize;
@property (nonatomic, readonly) MTLPipelineBufferDescriptor *sharedPipelineDescriptor;

+ (id)sharedResourceHandlerWithDevice:(id)arg1;
+ (id)sharedResourceHandlerWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 paintAndParticlePixelFormat:(unsigned long long)arg3 stencilPixelFormat:(unsigned long long)arg4;
+ (id)inkBundle;

- (id)init;
- (id).cxx_construct;
- (id)initWithDevice:(id)arg1;
- (void)replaceInkTexture:(id)arg1 image:(struct CGImage *)arg2;
- (id)strokeRenderCache;
- (id)newPurgeableBufferWithLength:(unsigned long long)arg1 bytes:(const void *)arg2 outOffset:(unsigned long long *)arg3;
- (id)erasePaintAccumulatorShader;
- (id)erasePaintShader;
- (id)copyAccumulatorIntoPaintShader;
- (id)blitIntoPaintShader;
- (id)singleAttachmentBlitShader;
- (id)blitShader;
- (id)cachedQuadVertexBuffer;
- (id)cachedQuadTexCoordBuffer;
- (id)paintShader;
- (id)particleShader;
- (id)particleShaderWithAspectRatioSupport;
- (id)particleIndexBuffer;
- (id)randomNumberBuffer;
- (id)paintCircleShader;
- (id)paperShader;
- (id)linesShader;
- (id)compositeOverShaderWithMode:(long long)arg1 clipping:(_Bool)arg2 colorAttachmentIndex:(unsigned long long)arg3 renderMask:(_Bool)arg4;
- (id)compositeSoftWhiteShaderWithMode:(long long)arg1 clipping:(_Bool)arg2 colorAttachmentIndex:(unsigned long long)arg3 renderMask:(_Bool)arg4;
- (id)compositeMultiplyShaderWithMode:(long long)arg1 clipping:(_Bool)arg2 targetMultiple:(_Bool)arg3 colorAttachmentIndex:(unsigned long long)arg4 renderMask:(_Bool)arg5;
- (id)compositeEraseShaderWithMode:(long long)arg1 clipping:(_Bool)arg2 colorAttachmentIndex:(unsigned long long)arg3;
- (id)compositePaperShaderWithMode:(long long)arg1 colorAttachmentIndex:(unsigned long long)arg2;
- (id)paintShaderKernelPipelineState;
- (id)newGPUBufferWithLength:(unsigned long long)arg1 outOffset:(unsigned long long *)arg2;
- (id)paintShaderKernelPipelineStateWithLiveStroke;
- (id)particleShaderKernelPipelineStateWithVariableSpacing;
- (id)particleShaderKernelPipelineState;
- (id)newBufferWithLength:(unsigned long long)arg1 bytes:(const void *)arg2 outOffset:(unsigned long long *)arg3;
- (id)invertShader;
- (id)paintShaderForAccumulator;
- (id)particleShaderForAccumulatorWithAspectRatioSupport;
- (id)particleShaderForAccumulator;
- (id)inkTextureNamed:(id)arg1;
- (const float *)randomNumberArray;
- (id)eraseShader;
- (id)eraseOriginalBackShader;
- (id)initWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 paintAndParticlePixelFormat:(unsigned long long)arg3 stencilPixelFormat:(unsigned long long)arg4;
- (id)_signpostLog;
- (void)_setupCachedQuad;
- (void)_preloadShaders;
- (id)newComputePipelineDescriptor;
- (id)newPaintCircleShader;
- (id)newInvertShader;
- (id)eraseShaderWithColorAttachmentIndex:(unsigned int)arg1 sharedPipelineDescriptor:(_Bool)arg2;
- (id)newRenderPipelineDescriptor;
- (id)particleShaderWithColorAttachmentIndex:(unsigned int)arg1 aspectRatioSupport:(_Bool)arg2;
- (id)paintShaderWithColorAttachmentIndex:(unsigned int)arg1;
- (id)eraseShaderWithColorAttachmentIndex:(unsigned int)arg1;
- (id)newPaperShader;
- (id)blitShaderWithColorAttachmentIndex:(unsigned int)arg1 sharedPipelineDescriptor:(_Bool)arg2;
- (id)newLinesShader;
- (id)copyFramebufferShaderWithSourceColorAttachmentIndex:(unsigned int)arg1 destinationColorAttachmentIndex:(unsigned int)arg2;
- (id)_inkTextureNamed:(id)arg1;
- (id)uberShaderForKey:(CDStruct_3c89fc14)arg1;
- (id)constantValuesForKey:(long long)arg1 clipping:(_Bool)arg2 colorAttachmentIndex:(unsigned int)arg3 renderMask:(_Bool)arg4;
- (id)_uberShaderForKey:(CDStruct_3c89fc14)arg1;
- (void)_preloadUberShadersForBaseKey:(CDStruct_3c89fc14)arg1;
- (id)textureByUnpremultiplyingAlphaInTexture:(id)arg1;
- (void)_setupPaperTextureIfNecessary;
- (void)_setupRandomNumberBufferIfNecessary;
- (void)_setupParticleIndexBufferIfNecessary;
- (void)_preloadInkTextures;
- (void)_preloadUberShaders;
- (void)preloadPaperTexture;
- (void)preloadParticleResources;

@end
