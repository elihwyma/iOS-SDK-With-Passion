/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <MetalKit/MTKView.h>

@class JTImage, MISSING_TYPE, MTKTextureLoader, NSString;

@protocol MTLCommandQueue, MTLLibrary, MTLRenderPipelineState, MTLSamplerState, MTLTexture;

@interface JTImageMTKView : MTKView

{
    id <MTLLibrary> _library;
    id <MTLCommandQueue> _commandQueue;
    id <MTLRenderPipelineState> _renderPipelineState;
    MTKTextureLoader *_textureLoader;
    id <MTLTexture> _mtlTexture_RGBA;
    id <MTLTexture> _mtlTexture_YUV_Luma;
    id <MTLTexture> _mtlTexture_YUV_Chroma;
    id <MTLSamplerState> _sampler;
    struct __CVMetalTextureCache *_textureCache;
    struct __CVBuffer *_texture_RGBA;
    struct __CVBuffer *_texture_YUV_Luma;
    struct __CVBuffer *_texture_YUV_Chroma;
    void *_pixelBufferColorAttachments;
    struct CGSize _viewSize;
    struct CGSize _textureSize;
    _Bool _needsUpdateVertices;
    _Bool _needsUpdateTexture;
    struct {
        struct {
            MISSING_TYPE *position__texCoords;
        } vertices[4];
    } _quad;
    _Bool _flipX;
    _Bool _flipY;
    _Bool _enableDebugDrawing;
    JTImage *_jtImage;
    long long _renderingType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) JTImage *jtImage;
@property (nonatomic, readonly) long long renderingType;
@property (nonatomic) _Bool flipX;
@property (nonatomic) _Bool flipY;
@property (nonatomic) _Bool enableDebugDrawing;

+ (id)buildSamplerStateWithDevice:(id)arg1 addressMode:(unsigned long long)arg2 filter:(unsigned long long)arg3;
+ (id)buildRenderPipelineWithLabel:(id)arg1 vertexFunction:(id)arg2 fragmentFunction:(id)arg3 device:(id)arg4 view:(id)arg5 error:(id *)arg6;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateTexture;
- (id)initWithFrame:(struct CGRect)arg1 device:(id)arg2;
- (void)setRenderingType:(long long)arg1;
- (void)updateDebugDrawing;
- (void)cleanupTextures;
- (void)cleanupTextureCache;
- (void)setupTextureCache;
- (void)JTImageMTKView_commonInit;
- (void)configureRenderPipelineForColorAttachments:(void *)arg1;
- (void)updateVertices;

@end
