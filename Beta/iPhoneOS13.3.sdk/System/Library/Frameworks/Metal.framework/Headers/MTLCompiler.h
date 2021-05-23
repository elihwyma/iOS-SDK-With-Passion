/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSString, _MTLDevice;

@protocol OS_dispatch_queue;

@interface MTLCompiler : NSObject

{
    _MTLDevice *_device;
    NSString *_pluginPath;
    NSObject<OS_dispatch_queue> *_compilerQueue;
    struct MTLCompilerConnectionManager *_compilerConnectionManager;
    unsigned int _compilerId;
    unsigned long long _compilerFlags;
    struct MTLCompilerCache *_shaderCache;
}

@property (copy, readonly) NSString *pluginPath;
@property (readonly) NSObject<OS_dispatch_queue> *compilerQueue;
@property (readonly) struct MTLCompilerConnectionManager *compilerConnectionManager;
@property (readonly) unsigned int compilerId;
@property (readonly) unsigned long long compilerFlags;

- (void)dealloc;
- (void)unloadShaderCaches;
- (CDStruct_c0454aff)libraryCacheStats;
- (CDStruct_c0454aff)pipelineCacheStats;
- (_Bool)copyShaderCacheToPath:(id)arg1;
- (void *)getShaderCacheKeys;
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)compileRequest:(id)arg1 pipelineCache:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)compileRequest:(id)arg1 pipelineCache:(id)arg2 sync:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long long)arg4 frameworkLinking:(_Bool)arg5 options:(unsigned int)arg6 pipelineCache:(id)arg7 sync:(_Bool)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)compileFunctionInternal:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 frameworkLinking:(_Bool)arg4 linkDataSize:(unsigned long long)arg5 pipelineCache:(id)arg6 options:(unsigned int)arg7 sync:(_Bool)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long long)arg4 frameworkLinking:(_Bool)arg5 options:(unsigned int)arg6 sync:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (id)initWithTargetData:(id)arg1 cacheUUID:(CDStruct_41a22ec7 *)arg2 pluginPath:(id)arg3 device:(id)arg4 compilerFlags:(unsigned long long)arg5;
- (void)compileRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 sync:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)compileFunction:(id)arg1 serializedData:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
