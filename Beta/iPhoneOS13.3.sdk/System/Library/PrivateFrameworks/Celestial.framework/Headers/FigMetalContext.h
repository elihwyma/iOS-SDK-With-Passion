/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class MTLVertexDescriptor;

@protocol MTLBuffer, MTLCommandBuffer, MTLCommandQueue, MTLDevice, MTLLibrary, MTLPipelineLibrarySPI;

@interface FigMetalContext : NSObject

{
    _Bool _allowCommandBufferCommitsOnlyByForceCommit;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLLibrary> _library;
    id <MTLCommandBuffer> _commandBuffer;
    id <MTLPipelineLibrarySPI> _pipelineLibrary;
    id <MTLBuffer> _fullRangeVertexBuf;
    MTLVertexDescriptor *_fullRangeVertexDesc;
}

@property (retain, nonatomic) id <MTLDevice> device;
@property (retain, nonatomic) id <MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id <MTLLibrary> library;
@property (retain, nonatomic) id <MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) id <MTLPipelineLibrarySPI> pipelineLibrary;
@property (nonatomic) _Bool allowCommandBufferCommitsOnlyByForceCommit;
@property (retain, nonatomic) id <MTLBuffer> fullRangeVertexBuf;
@property (retain, nonatomic) MTLVertexDescriptor *fullRangeVertexDesc;

- (id)init;
- (int)setQueuePriority:(int)arg1;
- (void)commit;
- (void)insertDebugCaptureBoundary;
- (int)commonInitWithOptionalCommandQueue:(id)arg1;
- (int)initRangeVertex;
- (void)forceCommit;
- (void)commitAndWait;
- (_Bool)WriteMetalTextureToFile:(const char *)arg1 texture:(id)arg2 mipmapLevel:(int)arg3;
- (_Bool)ReadMetalTextureFromFile:(const char *)arg1 texture:(id)arg2 mipmapLevel:(int)arg3;
- (id)CreateMetalTextureFromFile:(const char *)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4;
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface *)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 plane:(unsigned long long)arg6;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 textureSize:(struct CGSize)arg4 plane:(unsigned long long)arg5;
- (id)rebindTex:(id)arg1 format:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(int)arg4 xFactor:(int)arg5;
- (id)create2DTextureFromBuffer:(id)arg1 offset:(unsigned long long)arg2 width:(int)arg3 height:(int)arg4 format:(unsigned long long)arg5 usage:(unsigned long long)arg6;
- (id)initWithbundle:(id)arg1 andOptionalCommandQueue:(id)arg2;
- (id)initWithLibraryData:(char *)arg1 ofSize:(unsigned long long)arg2 andOptionalCommandQueue:(id)arg3;
- (void)waitForIdle;
- (void)waitForSchedule;
- (id)computePipelineStateFor:(id)arg1 constants:(id)arg2;
- (_Bool)WriteMetalTextureToFile:(const char *)arg1 texture:(id)arg2;
- (_Bool)ReadMetalTextureFromFile:(const char *)arg1 texture:(id)arg2;
- (id)CreateMetalTextureFromFile:(const char *)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (unsigned long long)getPixelSizeInBytes:(unsigned long long)arg1;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4 alignmentFactor:(unsigned long long)arg5;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 plane:(unsigned long long)arg3;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 textureSize:(struct CGSize)arg3 plane:(unsigned long long)arg4;
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface *)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 plane:(unsigned long long)arg5;
- (id)rebindTex:(id)arg1 format:(unsigned long long)arg2 plane:(int)arg3 xFactor:(int)arg4;
- (void)prewarmInternalMetalShadersForFormatsList:(id)arg1;
- (id)create2DTextureFromBuffer:(id)arg1 offset:(unsigned long long)arg2 width:(int)arg3 height:(int)arg4 format:(unsigned long long)arg5;

@end
