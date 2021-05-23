/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface EspressoFDOverfeatNetwork : NSObject

{
    struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net>>> gpu_nets;
    struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net>>> ecpu_nets;
    struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long>>> net_scales;
    struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long>>> full_scales;
    struct vector<double, std::__1::allocator<double>> scalesc;
    struct vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>>> resizers_for_batching;
    int n_resizers_for_batching;
    struct vector<std::__1::shared_ptr<Espresso::blob<float, 3>>, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3>>>> probBlobs;
    struct vector<std::__1::shared_ptr<Espresso::blob<float, 3>>, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3>>>> boxBlobs;
    NSMutableDictionary *_errorForLayers;
    struct pair<unsigned long long, unsigned long long> cropDims;
    struct CGColorSpace *colorSpace;
    struct net_strides_configuration strideConf;
    int retile_stride;
    int retile_tile_sz;
    struct vector<int, std::__1::allocator<int>> retile_n_outputs_v;
    int tile_w_1;
    int tile_h_1;
    NSObject<OS_dispatch_queue> *cpu_queue_0;
    NSObject<OS_dispatch_semaphore> *cpu_semaphore;
    _Bool _useGPUScaler;
    int _scalingMode;
    float _maxScale;
    int _forceMaxNScales;
    int _scaleConfig;
    int _mode;
    int _cpin;
    NSString *_basename;
    NSString *_weights;
    shared_ptr_ae8b808b _context_metal;
    shared_ptr_ae8b808b _context_cpu;
}

@property (retain, nonatomic) NSString *basename;
@property (retain, nonatomic) NSString *weights;
@property (nonatomic) int scaleConfig;
@property (nonatomic) int mode;
@property (nonatomic) int cpin;
@property (nonatomic) shared_ptr_ae8b808b context_metal;
@property (nonatomic) shared_ptr_ae8b808b context_cpu;
@property (nonatomic) _Bool useGPUScaler;
@property (nonatomic) int scalingMode;
@property (nonatomic) float maxScale;
@property (nonatomic) int forceMaxNScales;

- (id)init;
- (void)dealloc;
- (void)reset;
- (id).cxx_construct;
- (void)wipeLayersMemory;
- (void)processVimageNoRotation:(const struct vImage_Buffer *)arg1 tex:(id)arg2 doBGRA2RGBA:(_Bool)arg3;
- (void)autoResizeForAspectRatio:(float)arg1 useLowPriorityMode:(_Bool)arg2 gpuPriority:(unsigned int)arg3;
- (void)setContextMetal:(id)arg1;
- (void)setContextCpu:(id)arg1;
- (void)autoSetupNetBaseName:(id)arg1 weights:(id)arg2 scaleConfig:(int)arg3 setupMode:(int)arg4 computePath:(int)arg5 autoAspectRatio:(float)arg6 forceReset:(_Bool)arg7 useLowPriorityMode:(_Bool)arg8 gpuPriority:(unsigned int)arg9;
- (struct net_strides_configuration)strideConfiguration;
- (double)getScale:(int)arg1;
- (shared_ptr_dc6ac1b7)boxBlobForScale:(int)arg1;
- (shared_ptr_dc6ac1b7)probBlobForScale:(int)arg1;
- (shared_ptr_7fb9d9f9)resizerAtIndex:(int)arg1;
- (int)getNumScales;
- (int)resizerCount;
- (shared_ptr_d082c67d)gpu_net:(int)arg1;
- (shared_ptr_d082c67d)cpu_net:(int)arg1;
- (void)retryLoadingCaffeNet:(shared_ptr_d082c67d *)arg1 name:(id)arg2 weights:(id)arg3 context:(shared_ptr_ae8b808b)arg4 cp:(int)arg5;
- (void)generatePyramid:(const shared_ptr_5e9c0076 *)arg1 tex:(id)arg2;
- (void)processBlob:(const shared_ptr_5e9c0076 *)arg1 tex:(id)arg2;
- (void)processBlobNoRotation:(const shared_ptr_5e9c0076 *)arg1 tex:(id)arg2 doBGRA2RGBA:(_Bool)arg3;
- (void)processPyramid:(shared_ptr_7fb9d9f9)arg1;
- (void)processPyramid:(shared_ptr_7fb9d9f9)arg1 gpu_resizer:(id)arg2;
- (int)default_retile_outputs;
- (void)setup_retile;
- (void)retile_and_forward_espresso_gpu_network_at_index:(int)arg1 net:(const shared_ptr_d082c67d *)arg2 pyr:(const shared_ptr_7fb9d9f9 *)arg3;
- (void)retile_and_forward_espresso_network_at_index:(int)arg1 net:(const shared_ptr_d082c67d *)arg2 pyr:(const shared_ptr_7fb9d9f9 *)arg3;
- (void)forward_cpu_network_at_index:(int)arg1 pyr:(const shared_ptr_7fb9d9f9 *)arg2;
- (void)storeDataForPruning:(shared_ptr_acd4b298)arg1 prob:(float)arg2;
- (_Bool)needRetiling:(int)arg1;
- (id)errorForLayers;

@end
