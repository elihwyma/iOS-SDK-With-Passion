/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString, NUCacheNodeRegistry, NUGLContext, NUGLContextPool, NUJSContextPool, NUPlatform, NUPurgeableStoragePool, NURenderNodeCache, NURenderPipelineRegistry, NUScheduler, NUSchemaRegistry;

@protocol NUSlowMotionVideoFactory, NUStorageFactory;

@interface NUFactory : NSObject

{
    NUSchemaRegistry *_schemaRegistry;
    NURenderPipelineRegistry *_renderPipelineRegistry;
    NSString *_defaultNameSpace;
    NUScheduler *_scheduler;
    NUPurgeableStoragePool *_bufferStoragePool;
    NUPurgeableStoragePool *_surfaceStoragePool;
    id <NUStorageFactory> _bufferFactory;
    id <NUStorageFactory> _surfaceFactory;
    NUGLContext *_sharedOpenGLContext;
    NUGLContextPool *_sharedOpenGLContextPool;
    NURenderNodeCache *_renderNodeCache;
    NUPlatform *_platform;
    NUJSContextPool *_sharedJavaScriptContextPool;
    NUCacheNodeRegistry *_cacheNodeRegistry;
    id <NUSlowMotionVideoFactory> _slomoFactory;
}

@property (retain, nonatomic) NUSchemaRegistry *schemaRegistry;
@property (retain, nonatomic) NURenderPipelineRegistry *renderPipelineRegistry;
@property (copy, nonatomic) NSString *defaultNameSpace;
@property (retain, nonatomic) NUScheduler *scheduler;
@property (retain, nonatomic) NUPurgeableStoragePool *bufferStoragePool;
@property (retain, nonatomic) NUPurgeableStoragePool *surfaceStoragePool;
@property (retain, nonatomic) id <NUStorageFactory> bufferFactory;
@property (retain, nonatomic) id <NUStorageFactory> surfaceFactory;
@property (retain, nonatomic) NUGLContext *sharedOpenGLContext;
@property (retain, nonatomic) NUGLContextPool *sharedOpenGLContextPool;
@property (retain, nonatomic) NURenderNodeCache *renderNodeCache;
@property (retain, nonatomic) NUPlatform *platform;
@property (retain, nonatomic) NUJSContextPool *sharedJavaScriptContextPool;
@property (retain, nonatomic) NUCacheNodeRegistry *cacheNodeRegistry;
@property (retain, nonatomic) id <NUSlowMotionVideoFactory> slomoFactory;

+ (void)reset;
+ (id)sharedFactory;
+ (void)setSharedFactory:(id)arg1;

- (void)start;
- (void)shutdown;

@end
