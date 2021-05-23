/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPPnPSolver : NSObject

{
    float _fu;
    float _fv;
    float _uc;
    float _vc;
    const float *_points2D;
    const float *_points3D;
    int _numPoints;
    float _controlPointsWorld[4][3];
    float _controlPointsCamera[4][3];
    const float *_pointsWorld;
    const float *_pointsImage;
    float *_alphas;
    float *_points3DCamera;
    float _cameraOrientation;
    CDStruct_14d5dc5e _pose;
}

@property CDStruct_14d5dc5e pose;

- (void)dealloc;
- (void)computeControlPointsCamera:(const float *)arg1 Vt:(Matrix_6037f6fe *)arg2;
- (void)computePoints3DCamera;
- (int)correctSigns;
- (int)computeRT:(float [3][3])arg1 T:(float [3])arg2;
- (float)computeProjectionError:(float [3][3])arg1 T:(float [3])arg2;
- (int)configureGaussNewton:(Matrix_6037f6fe *)arg1 R6x1:(Matrix_6037f6fe *)arg2 betas:(float [4])arg3 jacobian:(Matrix_6037f6fe *)arg4 residual:(Matrix_6037f6fe *)arg5;
- (int)getControlPoints;
- (int)computeBarycentricCoordinates;
- (int)computeSVDVt:(Matrix_6037f6fe *)arg1 Vt:(Matrix_6037f6fe *)arg2;
- (int)computeL6x10:(Matrix_6037f6fe *)arg1 L6x10:(Matrix_6037f6fe *)arg2;
- (void)computeR6x1:(Matrix_6037f6fe *)arg1;
- (int)estimateBetasN1:(Matrix_6037f6fe *)arg1 R6x1:(Matrix_6037f6fe *)arg2 betas:(float *)arg3;
- (int)estimateBetasN2:(Matrix_6037f6fe *)arg1 R6x1:(Matrix_6037f6fe *)arg2 betas:(float *)arg3;
- (int)estimateBetasN3:(Matrix_6037f6fe *)arg1 R6x1:(Matrix_6037f6fe *)arg2 betas:(float *)arg3;
- (int)optimizeBetas:(Matrix_6037f6fe *)arg1 R6x1:(Matrix_6037f6fe *)arg2 betas:(float [4])arg3;
- (int)estimateRT:(Matrix_6037f6fe *)arg1 betas:(const float *)arg2 R:(float [3][3])arg3 T:(float [3])arg4 projectionError:(float *)arg5;
- (int)estimatePose:(float *)arg1;
- (id)initWithFocalLengthInPixels:(float)arg1 principalPoint:(struct CGPoint)arg2 cameraTowardsPositiveZ:(_Bool)arg3;
- (void)updateIntrinsic:(float)arg1 vc:(float)arg2;
- (void)updateFocalLengthInPixels:(float)arg1;
- (int)estimateExtrinsicsWith:(const float *)arg1 andPoints3D:(const float *)arg2 andNumPoints:(int)arg3;

@end
