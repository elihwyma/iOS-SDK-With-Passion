/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface EspressoConvolutionWeightsForMPS : NSObject

{
    struct convolution_uniforms params;
    struct shared_ptr<Espresso::blob<unsigned char, 4>> quantized_weights_blob;
    shared_ptr_acd4b298 weights_blob;
    struct shared_ptr<Espresso::blob<unsigned short, 4>> weights_f16_blob;
    shared_ptr_0954c506 biases_blob;
    struct shared_ptr<Espresso::blob<float __attribute__((ext_vector_type(2))), 1>> quantization_ranges;
    shared_ptr_0954c506 quantization_lut;
    shared_ptr_0954c506 scale_factor_batch_norm;
    unsigned int data_type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)load;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)label;
- (unsigned int)dataType;
- (void *)weights;
- (id)descriptor;
- (float *)biasTerms;
- (void)purge;
- (MISSING_TYPE **)rangesForUInt8Kernel;
- (float *)lookupTableForUInt8Kernel;
- (_Bool)ready;
- (id)initWithParams:(struct convolution_uniforms)arg1;

@end
