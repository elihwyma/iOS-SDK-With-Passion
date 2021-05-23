/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderNode.h>

@interface NUTransformNode : NURenderNode

+ (id)transformNodeWithInput:(id)arg1 transform:(id)arg2 error:(out id *)arg3;

- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (_Bool)requiresVideoComposition;
- (id)_transformWithError:(out id *)arg1;
- (_Bool)isGeometryNode;
- (id)_evaluateGeometrySpaceMap:(out id *)arg1;
- (id)descriptionSubClassHook;

@end
