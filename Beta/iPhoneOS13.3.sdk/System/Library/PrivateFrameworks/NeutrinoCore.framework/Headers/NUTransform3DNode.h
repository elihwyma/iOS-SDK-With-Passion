/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUTransformNode.h>

@class NUImageTransform3D;

@interface NUTransform3DNode : NUTransformNode

{
    NUImageTransform3D *_transform;
}

- (id)debugQuickLookObject;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)_evaluateImage:(out id *)arg1;
- (id)_transformWithError:(out id *)arg1;
- (id)initWithTransform3D:(id)arg1 input:(id)arg2;

@end
