/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <Espresso/EspressoConvolutionWeightsForMPS.h>

@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface EspressoTrainingConvolutionWeightsForMPS : EspressoConvolutionWeightsForMPS

{
    _Bool is_training;
    id <MTLBuffer> _weightsBuffer;
    id <MTLBuffer> _biasesBuffer;
}

@property (retain) id <MTLBuffer> weightsBuffer;
@property (retain) id <MTLBuffer> biasesBuffer;

- (void *)weights;
- (float *)biasTerms;
- (unsigned int)weightsLayout;
- (_Bool)ready;
- (id)initWithParams:(struct convolution_uniforms)arg1 forMode:(_Bool)arg2;

@end
