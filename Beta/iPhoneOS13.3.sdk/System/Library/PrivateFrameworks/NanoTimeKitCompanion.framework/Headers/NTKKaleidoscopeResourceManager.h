/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSBundle;

@protocol MTLBuffer, MTLDevice, MTLRenderPipelineState, OS_dispatch_queue;

@interface NTKKaleidoscopeResourceManager : NSObject

{
    NSBundle *_bundle;
    id <MTLDevice> _device;
    unsigned long long _clients;
    unsigned long long _viewMtlPixelFormat;
    NSObject<OS_dispatch_queue> *_queue;
    id <MTLRenderPipelineState> _renderPipelines[4][2];
    id <MTLBuffer> _mtlBuffer;
}

@property (nonatomic, readonly) id <MTLBuffer> mtlBuffer;

+ (void)_deallocInstance:(id)arg1;
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)arg1;

- (void)dealloc;
- (id)initWithPixelFormat:(unsigned long long)arg1;
- (void)_asyncDeallocInstance;
- (void)addClient;
- (void)removeClient;
- (void)_queue_loadMTLBufferData;
- (void)_queue_loadPrograms;
- (void)_queue_setupPipelineForType:(unsigned long long)arg1 vertexFunction:(id)arg2 fragmentName:(id)arg3 inLibrary:(id)arg4 librarySPI:(id)arg5;
- (id)getPipelineForShaderType:(unsigned long long)arg1 blending:(_Bool)arg2;
- (id)getGeometryBuffer;

@end
