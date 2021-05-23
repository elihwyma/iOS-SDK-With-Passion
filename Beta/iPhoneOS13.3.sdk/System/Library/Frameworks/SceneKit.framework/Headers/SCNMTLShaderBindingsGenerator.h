/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCNMTLShaderBindingsGenerator : NSObject

{
    struct os_unfair_lock_s _generateLock;
    struct {
        int stage;
        NSArray *arguments;
        NSDictionary *customBlocks;
        struct __C3DFXPass *pass;
    } _current;
    NSMutableDictionary *_nodeBindings;
    NSMutableDictionary *_frameBindings;
    NSMutableDictionary *_shadableBindings;
    NSMutableDictionary *_passBindings;
    NSMutableDictionary *_lightBindings;
    CDStruct_21854d8c _sceneBuffer;
}

+ (void)allocateRegistry;
+ (void)registerSemantic:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)registerShadableArgumentBindingBlockForBuffers:(CDUnknownBlockType)arg1 textures:(CDUnknownBlockType)arg2 samplers:(CDUnknownBlockType)arg3;
+ (void)registerArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
+ (void)registerArgument:(id)arg1 frequency:(int)arg2 block:(CDUnknownBlockType)arg3;
+ (void)registerUserBlockTrampoline:(CDUnknownBlockType)arg1;
+ (void)deallocateRegistry;

- (id)init;
- (void)dealloc;
- (void)addResourceBindingsForArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (_Bool)addPassResourceBindingsForArgument:(id)arg1;
- (void)_parseArguments:(id)arg1 function:(id)arg2 renderPipeline:(id)arg3;
- (long long)_searchArguments:(id)arg1 forArgumentNamed:(id)arg2 type:(unsigned long long)arg3;
- (id)_dictionaryForFrequency:(int)arg1;
- (void)_checkForAssociatedSamplerOnBinding:(id)arg1 argument:(id)arg2;
- (void)generateBindingsForPipeline:(id)arg1 withReflection:(id)arg2 program:(struct __C3DFXProgram *)arg3 material:(struct __C3DMaterial *)arg4 geometry:(struct __C3DGeometry *)arg5 pass:(struct __C3DFXPass *)arg6;

@end
