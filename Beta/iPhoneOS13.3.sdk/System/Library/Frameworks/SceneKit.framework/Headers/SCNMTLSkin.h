/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class MTLStageInputOutputDescriptor, SCNMTLComputePipeline;

@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLSkin : NSObject

{
    unsigned int _vertexCount;
    _Bool _needNormal;
    _Bool _needTangent;
    id <MTLBuffer> _vertexWeightIndicesBuffer;
    id <MTLBuffer> _boneIndicesBuffer;
    id <MTLBuffer> _boneWeightsBuffer;
    SCNMTLComputePipeline *_computePS;
    MTLStageInputOutputDescriptor *_computeStageDesc;
}

- (void)dealloc;
- (id)initWithSkinner:(struct __C3DSkinner *)arg1 baseMesh:(struct __C3DMesh *)arg2 baseGeometry:(struct __C3DGeometry *)arg3 resourceManager:(id)arg4;
- (void)skinMesh:(id)arg1 with:(id)arg2 skinner:(struct __C3DSkinner *)arg3 renderContext:(id)arg4;

@end
