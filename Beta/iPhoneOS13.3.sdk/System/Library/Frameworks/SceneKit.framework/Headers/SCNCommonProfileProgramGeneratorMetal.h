/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNCommonProfileProgramGenerator.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator

{
    _Bool _useFunctionConstants;
    NSString *_originalSourceCode;
    NSArray *_injectionPointRanges;
    NSString *_originalLightingSourceCode;
    NSArray *_lightingInjectionPointRanges;
}

- (id)init;
- (void)dealloc;
- (int)profile;
- (void)emptyShaderCache;
- (struct __C3DFXProgram *)_newProgramWithHashCode:(struct __C3DProgramHashCode *)arg1 engineContext:(struct __C3DEngineContext *)arg2 introspectionDataPtr:(void *)arg3;
- (void)_loadSourceCode;
- (struct __C3DFXProgram *)_newProgramWithHashCodeWithFunctionConstants:(struct __C3DProgramHashCode *)arg1 engineContext:(struct __C3DEngineContext *)arg2 introspectionDataPtr:(void *)arg3;

@end
