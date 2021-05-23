/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, VCPFaceTensorModel, VCPPnPSolver;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPFaceShapeModel : NSObject

{
    VCPFaceTensorModel *_tensorModel;
    int _numVertices;
    float *_curMesh;
    float *_cur2D;
    int _numInternalLms;
    int *_lmCoord;
    float *_lmWeight;
    int _numBoundaryLms;
    int *_boundaryLmIndices;
    int _numBoundaryVertices;
    int *_boundaryVertices;
    _Bool *_boundaryLandmarkValidity;
    struct {
        float x;
        float y;
        int index;
    } _chPts[200];
    _Bool _chPtSelected[200];
    _Bool _boundaryLmUpdated;
    int _chCount;
    float *_curBlendshapes;
    float *_curCoeff;
    float *_curExprWeights;
    float *_prevExprWeights;
    float *_exprWeightDiagMatrix;
    float *_transformedCoeff;
    float *_blendShapeDelta;
    float _trans[8];
    float _intrinsicMatrix[9];
    float _extrinsicMatrix[12];
    float _eulerAngle[3];
    float _rotMatrix[9];
    float _LM2D[126];
    float _LM3D[189];
    float *_lm3dBlendshapes;
    float *_lm3dMeanBlendshapes;
    float *_lm3dBlendshapeComponents;
    int _numFrmsSinceLastShapeUpdate;
    _Bool _shapeUpdateInProgress;
    VCPPnPSolver *_poseSolver;
    NSObject<OS_dispatch_queue> *_updateShapeQueue;
    float *_asyncBlendshapes;
    float *_asyncLmBlendshapes;
    float _asyncExtMat[12];
    float _asyncLm2d[126];
    float _asyncWeights[51];
    _Bool _identityInit;
    int _processingMode;
    int _detectionModeCounterShapeModel;
    MISSING_TYPE **_meshVertices;
    unsigned long long _vertexCount;
}

@property int processingMode;
@property _Bool identityInit;
@property (readonly) MISSING_TYPE **meshVertices;
@property (readonly) unsigned long long vertexCount;
@property int detectionModeCounterShapeModel;

- (void)dealloc;
- (id)initWithMode:(int)arg1;
- (id)blendShapes;
- (int)setupModel:(int)arg1;
- (void)updateIntrinsic:(float)arg1 vc:(float)arg2;
- (void)updateFocalLengthInPixels:(float)arg1;
- (void)getInternal3dLandmarksCoordinates:(const float *)arg1 lm3dPos:(float *)arg2;
- (void)getOneInternalLandmarkCoordinates:(const float *)arg1 lmCoord:(const int *)arg2 lmWeight:(const float *)arg3 lm3dPos:(float *)arg4;
- (void)updateBoundaryLandmarkCoordinates:(const float *)arg1 pts2D:(const float *)arg2 lm2D:(const float *)arg3 lm3dPos:(float *)arg4;
- (void)project3Dto2D:(float *)arg1 intrinsinc:(float *)arg2 extrinsic:(float *)arg3 numVert:(int)arg4 out2dpts:(float *)arg5;
- (void)updateBoundaryLmForShapeOptimization;
- (void)updateShapeCoeff:(float *)arg1 extrinsicMatrix:(float *)arg2 pts2D:(float *)arg3 exprWeights:(float *)arg4 outputblendshapes:(float *)arg5;
- (void)moveBoundaryLandmarks:(const float *)arg1 output:(float *)arg2 isInput:(_Bool)arg3;
- (void)projectAndUpdateBoundary;
- (_Bool)optimizeProjectionMatrix:(int)arg1 tracking:(_Bool)arg2 firstPass:(_Bool)arg3;
- (void)updateBoundary3dLandmarkBlendshapes:(const float *)arg1 numBlendshapes:(int)arg2 pts2D:(const float *)arg3 lm2D:(const float *)arg4 lmBlendshapes:(float *)arg5;
- (void)calculateBlendshapeWeights:(float *)arg1 prevWeights:(float *)arg2 lmBlendshapes:(float *)arg3 maxIter:(int)arg4;
- (void)updateMeshAndLm3dAfterExpressionChange;
- (void)calculateIdentityCoefficients:(float *)arg1 extrinsicMatrix:(float *)arg2 pts2D:(float *)arg3 exprWeights:(float *)arg4 lm3DMeanBlendshapes:(float *)arg5 lm3DComponents:(float *)arg6 maxIter:(int)arg7;
- (void)calculatePosePnpSolver:(int)arg1;
- (void)reestimateProjectionMatrixPnP;
- (void)updateIdentityShape:(float *)arg1;
- (matrix_3c21c366)getPoseParam;
- (int)setCameraIntrinsics:(float)arg1 uc:(float)arg2 vc:(float)arg3;
- (void)getEulerAngle:(float *)arg1;
- (void)resetIdentityAndExpressions;
- (_Bool)trackFaceMesh:(float *)arg1;
- (_Bool)fitOneImage:(float *)arg1;
- (CDStruct_14d5dc5e)getPose;
- (void)updateMeshVertices;

@end
