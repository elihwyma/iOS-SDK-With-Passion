/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIBilateralSolverCPU : NSObject

{
    int _width;
    int _height;
    unsigned long long _maxVertices;
    float *_Dn_buf;
    float *_Dm_buf;
    float *_A_buf;
    float *_b_buf;
    float *_x_buf;
    float *_M_buf;
    float *_Sc_buf;
    float *_q_buf;
    float *_r_buf;
    float *_d_buf;
    _Bool _useTrilinearInterpolation;
}

@property (nonatomic) _Bool useTrilinearInterpolation;

+ (void)_computeAx:(id)arg1 A:(const float *)arg2 Dn:(const float *)arg3 lambda:(float)arg4 x:(const float *)arg5 output:(float *)arg6;

- (void)dealloc;
- (void)_doBistochastize:(id)arg1 nIterations:(int)arg2;
- (void)_doSolve:(id)arg1 t:(const struct __CVBuffer *)arg2 c:(const struct __CVBuffer *)arg3 x:(float *)arg4 lambda:(float)arg5 pcgMaxIterations:(int)arg6;
- (void)_pcg:(id)arg1 A:(const float *)arg2 lambda:(float)arg3 b:(const float *)arg4 x:(float *)arg5 M:(const float *)arg6 tol:(float)arg7 maxIterations:(int)arg8;
- (id)initWithWidth:(int)arg1 height:(int)arg2 maxVertices:(unsigned long long)arg3;
- (int)doSolveWithBilateralGridhash:(id)arg1 reference:(struct __IOSurface *)arg2 disparity:(struct __CVBuffer *)arg3 confidence:(struct __CVBuffer *)arg4 output:(struct __CVBuffer *)arg5 lambda:(float)arg6 maxIterations:(int)arg7;

@end
