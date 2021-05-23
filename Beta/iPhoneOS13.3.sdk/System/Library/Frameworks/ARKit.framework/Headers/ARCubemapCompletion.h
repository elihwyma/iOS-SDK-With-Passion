/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARGPUCubemapConverter, ARGPUSphericalBlur;

@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice, MTLTexture;

@interface ARCubemapCompletion : NSObject

{
    void *_espresso_ctx;
    void *_espresso_plan;
    CDStruct_2bc666a5 _espresso_net;
    CDStruct_b527887c _espresso_processing_params;
    _Bool _espressoInitialized;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _randomNumbers;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _srgbToLogLUT;
    struct vImage_Buffer _vImageBuffer;
    ARGPUCubemapConverter *_cubemapConverter;
    ARGPUSphericalBlur *_sphericalBlur;
    id <MTLTexture> _roughness;
    double _bias_exposure_threshold;
    unsigned long long _bias_height;
    float _r_bias;
    float _g_bias;
    float _b_bias;
    int _bias_mask;
    float _r_avg;
    float _g_avg;
    float _b_avg;
    float _alpha_threshold;
    unsigned long long _gan_size;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _queue;
    id <MTLComputePipelineState> _combineBuffersToHDR;
    _Bool _generateHDROutput;
}

@property (nonatomic) _Bool generateHDROutput;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)completeCubemap:(id)arg1 cameraExposure:(double)arg2 rotationWorldFromCube:(CDStruct_8e0628e6)arg3;
- (id)generateSeamSmoothingTexture;
- (unsigned char)srgbToLog:(unsigned char)arg1;
- (id)grayCubemapOfSize:(unsigned long long)arg1;
- (id)completeLatLongImage:(id)arg1;
- (struct vImage_Buffer)toVImageBuffer:(id)arg1;
- (id)toTexture:(CDStruct_cf098810)arg1;

@end
