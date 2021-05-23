/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderNode.h>

@class NSString;

@interface NUFilterNode : NURenderNode

{
    NSString *_filterName;
}

@property (readonly) NSString *filterName;

- (unsigned long long)hash;
- (id)debugQuickLookObject;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (void)nu_updateDigest:(id)arg1;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (_Bool)requiresVideoComposition;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)_evaluateImage:(out id *)arg1;
- (_Bool)isEqualToRenderNode:(id)arg1;
- (_Bool)isGeometryNode;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)descriptionSubClassHook;
- (id)initWithFilterName:(id)arg1 settings:(id)arg2 inputs:(struct NSDictionary *)arg3;
- (id)initWithFilter:(id)arg1 settings:(id)arg2 inputs:(struct NSDictionary *)arg3;

@end
