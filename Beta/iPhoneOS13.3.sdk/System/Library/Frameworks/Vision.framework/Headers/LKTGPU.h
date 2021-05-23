/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class LKTMetalContext;

@protocol MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLTexture;

__attribute__((visibility("hidden")))
@interface LKTGPU : NSObject

{
    LKTMetalContext *_mtlContext;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _computePipelines[9];
    unsigned long long _maxThreadExecutionWidth;
    struct CGSize _pyramid_size[10];
    id <MTLTexture> _I_tex[2][10];
    id <MTLTexture> _I_u32_alias_tex[2][10];
    struct __CVBuffer *_G0_pxbuf;
    struct __CVBuffer *_G1_pxbuf;
    id <MTLTexture> _G0_tex[10];
    id <MTLTexture> _G1_tex[10];
    struct __CVBuffer *_C0_pxbuf;
    struct __CVBuffer *_C1_pxbuf;
    id <MTLTexture> _C0_tex[10];
    id <MTLTexture> _C1_tex[10];
    id <MTLBuffer> _Adiagb_buf[2];
    id <MTLBuffer> _Ixy_buf[2];
    struct __CVBuffer *_w_pxbuf;
    id <MTLTexture> _w_tex[10];
    struct __CVBuffer *_uv_pxbuf[2];
    id <MTLTexture> _uv_tex[2][10];
    id <MTLTexture> _uv_u32_alias_tex[2][10];
    int _current_frame_index;
    int _streamFrameCount;
    id <MTLTexture> _uv_tex_user_ref;
    _Bool _isValid;
    _Bool _needConversionBGRA2YUVA;
    _Bool _useNonLocalRegularization;
    int _width;
    int _height;
    int _nscales;
    int _nwarpings;
    int _nlreg_radius;
    int _nlreg_padding;
    float _nlreg_sigma_l;
    float _nlreg_sigma_c;
    float _nlreg_sigma_w;
}

@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic) _Bool needConversionBGRA2YUVA;
@property (nonatomic, readonly) int width;
@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) int nscales;
@property (nonatomic, readonly) int streamFrameCount;
@property (nonatomic) int nwarpings;
@property (nonatomic) _Bool useNonLocalRegularization;
@property (nonatomic) int nlreg_radius;
@property (nonatomic) int nlreg_padding;
@property (nonatomic) float nlreg_sigma_l;
@property (nonatomic) float nlreg_sigma_c;
@property (nonatomic) float nlreg_sigma_w;

- (void)dealloc;
- (void)reset;
- (void)waitUntilCompleted;
- (id)initWithMetalContext:(id)arg1 width:(int)arg2 height:(int)arg3 nscales:(int)arg4 error:(id *)arg5;
- (_Bool)setOutputUV:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (int)estimateFlowFromReference:(struct __CVBuffer *)arg1 target:(struct __CVBuffer *)arg2 error:(id *)arg3;
- (int)estimateFlowStream:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (_Bool)_initMemory:(int)arg1 height:(int)arg2 nscales:(int)arg3 error:(id *)arg4;
- (void)_setupPipelines;
- (_Bool)_setupBufferAndReturnError:(id *)arg1;
- (int)_computeOpticalFlow;
- (_Bool)_createImagePyramidWithCommandBuffer:(id)arg1 in_pixelbuf:(struct __CVBuffer *)arg2 I_idx:(int)arg3 error:(id *)arg4;
- (int)_zeroFlowWithCommandBuffer:(id)arg1 uv_tex:(id)arg2;
- (int)_downscale2XWithCommandBuffer:(id)arg1 in_u32_alias_tex:(id)arg2 out_u32_alias_tex:(id)arg3;
- (int)_computeFeaturesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (int)_computeFeaturesDerivativesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (int)_doSolverWithCommandBuffer:(id)arg1 scale:(int)arg2 scale_xy_inv:(id)arg3 coeff:(id)arg4 in_uv_tex:(id)arg5 out_uv_tex:out_w_tex: /* Error: Ran out of types for this method. */;
- (int)_doNLRegularizationWithCommandBuffer:(id)arg1 in_uv_tex:(id)arg2 join_tex:(id)arg3 w_tex:(id)arg4 out_uv_tex:(id)arg5;

@end
