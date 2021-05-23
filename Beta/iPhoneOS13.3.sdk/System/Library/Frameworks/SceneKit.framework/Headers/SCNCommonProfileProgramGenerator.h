/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNCommonProfileProgramGenerator : NSObject

{
    struct os_unfair_lock_s _programMutex;
    struct __CFDictionary *_shaders;
    struct __CFDictionary *_trackedResourcesToHashcode;
}

@property (nonatomic, readonly) int profile;

+ (id)generatorWithProfile:(int)arg1;
+ (id)deferredGeneratorWithProfile:(int)arg1;

- (id)init;
- (void)dealloc;
- (void)emptyShaderCache;
- (struct __C3DFXProgram *)programWithHashCode:(struct __C3DProgramHashCode *)arg1 engineContext:(struct __C3DEngineContext *)arg2 trackedResource:(id)arg3 introspectionDataPtr:(void *)arg4;
- (void)releaseProgramForResource:(id)arg1;

@end
