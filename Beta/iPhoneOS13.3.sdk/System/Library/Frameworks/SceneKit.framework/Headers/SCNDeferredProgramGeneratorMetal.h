/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNCommonProfileProgramGenerator.h>

__attribute__((visibility("hidden")))
@interface SCNDeferredProgramGeneratorMetal : SCNCommonProfileProgramGenerator

- (id)init;
- (void)dealloc;
- (int)profile;
- (struct __C3DFXProgram *)_newProgramWithHashCode:(struct __C3DProgramHashCode *)arg1 engineContext:(struct __C3DEngineContext *)arg2 introspectionDataPtr:(void *)arg3;

@end
