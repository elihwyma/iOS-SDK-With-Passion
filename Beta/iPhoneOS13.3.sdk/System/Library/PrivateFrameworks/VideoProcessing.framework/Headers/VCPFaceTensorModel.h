/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPFaceTensorModel : NSObject

{
    int _numBlendshapePlusOne;
    int _numComponents;
    int _numIdentities;
    float *_transformedCoeff;
    float *_blendShapeDelta;
    int _numVertices;
    float *_meanBlendshape;
    float *_tensorCoeff;
    float *_componentsBlendshape;
    int *_blendshapeComponentIndex;
}

@property (readonly) int numVertices;
@property (readonly) float *meanBlendshape;
@property (readonly) float *tensorCoeff;
@property (readonly) float *componentsBlendshape;
@property (readonly) int *blendshapeComponentIndex;

- (void)dealloc;
- (id)initWithModelFile:(struct __sFILE *)arg1;
- (void)calculateMesh:(float *)arg1 numVertices:(int)arg2 blendshapes:(float *)arg3 outputMesh:(float *)arg4;
- (void)calculateModelBlendshapes:(float *)arg1 outputBlendshapes:(float *)arg2;

@end
