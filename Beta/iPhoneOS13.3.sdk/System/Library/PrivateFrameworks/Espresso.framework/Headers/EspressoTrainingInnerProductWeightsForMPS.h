/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <Espresso/EspressoInnerProductWeightsForMPS.h>

@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface EspressoTrainingInnerProductWeightsForMPS : EspressoInnerProductWeightsForMPS

{
    id <MTLBuffer> _weightsBuffer;
    id <MTLBuffer> _biasesBuffer;
}

@property (retain) id <MTLBuffer> weightsBuffer;
@property (retain) id <MTLBuffer> biasesBuffer;

- (void *)weights;
- (float *)biasTerms;
- (_Bool)ready;
- (id)initWithParams:(struct inner_product_uniforms)arg1 forMode:(_Bool)arg2;

@end
