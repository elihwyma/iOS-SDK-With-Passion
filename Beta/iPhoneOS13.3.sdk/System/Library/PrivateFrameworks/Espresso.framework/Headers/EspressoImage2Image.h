/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSString;

@protocol MTLCommandQueue, MTLDevice, MTLTexture, OS_dispatch_queue;

@interface EspressoImage2Image : NSObject

{
    void *ctx;
    void *plan;
    CDStruct_2bc666a5 net;
    basic_string_90719d97 output_layer_name;
    id <MTLCommandQueue> queue;
    id <MTLDevice> device;
    NSObject<OS_dispatch_queue> *dispatch_queue;
    _Bool is_temporal_model;
    unsigned long long dim[5];
    unsigned long long dim_small[5];
    int defaultWidth;
    int defaultHeight;
    float t0;
    int scale_ratio;
    id <MTLTexture> smallOldResultTexture;
    struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>> tweaks;
    struct postprocessing_settings_t current_postprocessing_settings;
    struct shared_ptr<Espresso::V9Engine::v9_noise_kernel> noise_k;
    struct shared_ptr<Espresso::generic_load_constant_kernel> noise_load_constant_kernel;
    NSString *currentNetworkPath;
    long long currentResolutionPreset;
    shared_ptr_0954c506 precomputed_noise;
    id <MTLTexture> tmpDestinationTexture;
    int _rotation_degrees;
    int _flip_y;
}

@property (nonatomic) int rotation_degrees;
@property (nonatomic) int flip_y;

+ (int)featureVersion;
+ (void)setDefaultOption:(id)arg1 toValue:(id)arg2;
+ (_Bool)loadStylesConfigAtPath:(id)arg1;
+ (_Bool)loadStylesConfigAtDefaultsKey:(id)arg1;
+ (id)getStylesKeys;
+ (void)gpuSync:(id)arg1 tex:(id)arg2;
+ (void)tuneNetworks:(id)arg1;
+ (void)tuneNetworksWGWindowSize:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id).cxx_construct;
- (int)width;
- (int)height;
- (int)load:(id)arg1;
- (int)reload;
- (id)styleName;
- (CDStruct_2bc666a5)getEspressoNetwork;
- (id)getInternalDataForKey:(id)arg1;
- (id)setupWithQueue:(id)arg1;
- (void)addNoiseLayer;
- (int)wasReshaped;
- (void)_resetTemporalState;
- (void)resetTemporalState;
- (int)load:(id)arg1 resolutionPreset:(long long)arg2;
- (int)reshapeToResolutionPreset:(long long)arg1;
- (pair_65f741c2)resolutionForPreset:(long long)arg1;
- (int)reshapeToResolutionPreset:(long long)arg1 aspectRatio:(float)arg2;
- (int)_reshapeToResolutionPreset:(long long)arg1;
- (int)reshapeToWidth:(int)arg1 andHeight:(int)arg2;
- (int)_reshapeToWidth:(int)arg1 andHeight:(int)arg2;
- (int)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 cropRect:(CDStruct_4c83c94d)arg4 destinationRect:(CDStruct_4c83c94d)arg5;
- (int)submitToQueueWithSourceTexture:(id)arg1 destinationTexture:(id)arg2;
- (void)tweak:(id)arg1 value:(float)arg2;
- (int)submitToQueueWithSourceTexture:(id)arg1 destinationTexture:(id)arg2 cropRect:(CDStruct_4c83c94d)arg3;
- (int)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 cropRect:(CDStruct_4c83c94d)arg4;
- (void)simpleLinearResize:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (void)postProcess:(id)arg1 cameraSourceTexture:(id)arg2 inputTexture:(id)arg3 destinationTexture:(id)arg4;
- (id)newOutputTexture;
- (void)tune;
- (void)_tune;
- (void)aggregateWisdom:(struct wisdom_trainer2 *)arg1;
- (float)benchmark;

@end
