/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface EspressoInnerProductWeightsForMPS : NSObject

{
    struct inner_product_uniforms params;
    shared_ptr_966620c9 weights_blob;
    struct shared_ptr<Espresso::blob<unsigned short, 2>> weights_f16_blob;
    struct shared_ptr<Espresso::blob<unsigned char, 2>> quantized_weights_blob;
    shared_ptr_0954c506 biases_blob;
    struct shared_ptr<Espresso::blob<float __attribute__((ext_vector_type(2))), 1>> quantization_ranges;
    shared_ptr_0954c506 quantization_lut;
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
- (id)initWithParams:(struct inner_product_uniforms)arg1;

@end
