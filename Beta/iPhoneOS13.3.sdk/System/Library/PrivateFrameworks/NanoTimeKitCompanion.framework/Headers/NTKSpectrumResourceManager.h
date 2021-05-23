/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@protocol MTLBuffer, MTLDevice, MTLRenderPipelineState, MTLTexture;

@interface NTKSpectrumResourceManager : NSObject

{
    id <MTLDevice> _device;
    unsigned long long _clients;
    unsigned long long _pixelFormat;
    id <MTLBuffer> _verticesBuffer;
    id <MTLRenderPipelineState> _pipelineStates[4];
    id <MTLTexture> _vignetteTexture;
}

+ (void)_deallocInstance:(id)arg1;
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)arg1;

- (void)dealloc;
- (id)initWithPixelFormat:(unsigned long long)arg1;
- (void)_asyncDeallocInstance;
- (void)_loadPrograms;
- (void)addClient;
- (void)removeClient;
- (void)_loadGeometry;
- (id)vignetteTexture;
- (id)renderPipelineForOpacity:(_Bool)arg1 masking:(_Bool)arg2;
- (id)verticesBuffer;

@end
