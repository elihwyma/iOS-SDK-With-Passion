/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@interface ETImageDescriptorExtractor : NSObject

{
    void *_plan;
    CDStruct_2bc666a5 _net;
    void *_ctx;
    CDStruct_0a65202a _inputBlob;
    CDStruct_0a65202a _outputBlob;
    unsigned long long _targetWidth;
    unsigned long long _targetHeight;
    basic_string_90719d97 _inputName;
    unsigned long long *_inputShape;
    float _rotation_range;
    float _horizontal_flip;
    float _zoom_range;
    float _shear_range;
    float _contrast_range;
    float _brightness_range;
    int _nAugmentations;
    int _doBatchnormTuning;
    unsigned long long _descriptors_mem_cache_size;
    unsigned long long _descriptors_file_cache_size;
}

@property float rotation_range;
@property float horizontal_flip;
@property float zoom_range;
@property float shear_range;
@property float contrast_range;
@property float brightness_range;
@property int nAugmentations;
@property int doBatchnormTuning;
@property unsigned long long descriptors_mem_cache_size;
@property unsigned long long descriptors_file_cache_size;

+ (id)VisionSceneNet_iOS10_Extractor;
+ (id)inception_v3_Extractor;
+ (id)passthroughExtractor;
+ (id)VisionSmartCamNet_iOS11_Extractor;

- (id).cxx_construct;
- (int)numberOfChannels;
- (id)initWithNetwork:(id)arg1;
- (void)extractForDataPoint:(id)arg1;
- (struct vImage_Buffer)cropResizeInputImage:(struct vImage_Buffer)arg1;
- (float *)extractDescriptorForDataPoint:(struct vImage_Buffer)arg1 freeWhenDone:(_Bool)arg2;

@end
