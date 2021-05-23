/*
 Image: /System/Library/PrivateFrameworks/AppleCVA.framework/AppleCVA
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSArray, NSDictionary;

@interface GazeMesh : NSObject

{
    NSDictionary *_faceKitSemantics;
    struct shared_ptr<const shrek::IdentityTensor> _tensorModel;
    vector_7584168e _previousIdentityCoefficients;
    vector_1cb3ea33 _eyeOffsetsGeneric;
    vector_7584168e _landmarkWeights;
    vector_12da65de _landmarkIds;
    const float *_verticesNeutral;
    vector_12bd641b _eyeRegionTriangles;
    vector_12bd641b _eyeRegionIndices;
    int _vertexCount;
    int _triangleCount;
    vector_12bd641b _triangles;
    vector_1cb3ea33 _eyeOffsets;
    vector_7584168e _vertexWeightsFace;
    vector_7584168e _vertexWeightsEyes;
}

@property (nonatomic, readonly) int vertexCount;
@property (nonatomic, readonly) int triangleCount;
@property (nonatomic, readonly) vector_12bd641b triangles;
@property (nonatomic, readonly) vector_35647d6b eyeOffsets;
@property (nonatomic, readonly) vector_7584168e vertexWeightsFace;
@property (nonatomic, readonly) vector_7584168e vertexWeightsEyes;
@property (nonatomic, readonly) vector_7584168e landmarkWeights;
@property (nonatomic, readonly) vector_12da65de landmarkIds;
@property (nonatomic, readonly) NSArray *landmarkNames;

- (id)init;
- (id).cxx_construct;
- (void)neutralLabeling:(array_859211e7 *)arg1;
- (void)initQuadMesh:(quad_mesh_a92d3cab *)arg1;
- (void)updateEyeOffsetsWithIdentityCoefficients:(const float *)arg1;
- (_Bool)checkIdentityChangedWithIdentityCoefficients:(const float *)arg1;
- (MISSING_TYPE *)computeMeshCenterWithVertices:(const array_859211e7 *)arg1;
- (void)getEyePosWithVertices:(const array_859211e7 *)arg1 leftEyePos:(MISSING_TYPE **)arg2 rightEyePos:(MISSING_TYPE **)arg3;
- (_Bool)computeEyeOffsetsWithResourceDir:(id)arg1;
- (void)loadVerticesWithResourceFile:(id)arg1 ResourceDir:(id)arg2 Vertices:(vector_7584168e *)arg3;
- (void)loadIndicesWithResourceFile:(id)arg1 ResourceDir:(id)arg2 Indices:(vector_12bd641b *)arg3;
- (void)computeVertexWeights:(vector_7584168e *)arg1 sigma:(float)arg2 includedLandmarks:(id)arg3;
- (_Bool)deformationTransfer:(const array_859211e7 *)arg1 SourceOffsets:(MISSING_TYPE **)arg2 VerticesTarget:(const array_859211e7 *)arg3 VertexIndices:(const int *)arg4 Triangles:(const int *)arg5 VertexCount:(int)arg6 TriangleCount:(int)arg7 FixedVertexIdx:(int)arg8 VerticesTargetDeformed:(array_859211e7 *)arg9;
- (CDStruct_14d5dc5e)computeBoundBoxToModelWithVertices:(const array_859211e7 *)arg1;

@end
