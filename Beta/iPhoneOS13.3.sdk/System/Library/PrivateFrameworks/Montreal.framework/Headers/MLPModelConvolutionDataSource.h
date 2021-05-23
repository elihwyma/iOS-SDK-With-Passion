/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <NSObject.h>

@class MLPDeviceHandler, MPSCNNConvolutionDescriptor, MPSCNNConvolutionWeightsAndBiasesState, MPSNNOptimizerAdam, MPSVector, NSData, NSString;

@protocol MTLBuffer;

@interface MLPModelConvolutionDataSource : NSObject

{
    unsigned int _seed;
    unsigned long long _outputFeatureChannels;
    unsigned long long _inputFeatureChannels;
    unsigned long long _kernelHeight;
    unsigned long long _kernelWidth;
    MPSCNNConvolutionDescriptor *_convDesc;
    NSString *_kernelParamsBinaryName;
    unsigned long long _sizeBias;
    unsigned long long _sizeWeights;
    id <MTLBuffer> _weightBuffer;
    id <MTLBuffer> _biasBuffer;
    MLPDeviceHandler *_deviceHandler;
    const void *_initialWeights;
    const void *_initialBias;
    MPSCNNConvolutionWeightsAndBiasesState *_state;
    MPSNNOptimizerAdam *_optimizer;
    MPSVector *_weightMomentumVector;
    MPSVector *_weightVelocityVector;
    MPSVector *_biasMomentumVector;
    MPSVector *_biasVelocityVector;
    struct MLPModelOptimizerOptions _optimizerOptions;
}

@property (nonatomic, readonly) MPSNNOptimizerAdam *optimizer;
@property (nonatomic, readonly) MPSVector *weightMomentumVector;
@property (nonatomic, readonly) MPSVector *weightVelocityVector;
@property (nonatomic, readonly) MPSVector *biasMomentumVector;
@property (nonatomic, readonly) MPSVector *biasVelocityVector;
@property (readonly) unsigned long long outputFeatureChannels;
@property (readonly) unsigned long long inputFeatureChannels;
@property (readonly) unsigned long long kernelHeight;
@property (readonly) unsigned long long kernelWidth;
@property (readonly) MPSCNNConvolutionDescriptor *convDesc;
@property (readonly) NSString *kernelParamsBinaryName;
@property (readonly) unsigned long long sizeBias;
@property (readonly) unsigned long long sizeWeights;
@property (readonly) unsigned int seed;
@property (readonly) struct MLPModelOptimizerOptions optimizerOptions;
@property (readonly) id <MTLBuffer> weightBuffer;
@property (readonly) id <MTLBuffer> biasBuffer;
@property (readonly) MLPDeviceHandler *deviceHandler;
@property (readonly) NSData *weightsInWHIOOrder;
@property const void *initialWeights;
@property const void *initialBias;
@property (nonatomic, readonly) MPSCNNConvolutionWeightsAndBiasesState *state;
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
- (id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (unsigned long long)weight_size;
- (unsigned long long)bias_size;
- (id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 stride:(unsigned long long)arg5 kernelParamsBinaryName:(id)arg6 initialWeights:(const void *)arg7 initialBias:(const void *)arg8 deviceHandler:(id)arg9 optimizerOptions:(struct MLPModelOptimizerOptions)arg10;
- (id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2;
- (void)bootstrapWeights:(id *)arg1 length:(unsigned long long)arg2 device:(id)arg3 stdDev:(float)arg4 values:(const void *)arg5;
- (void)bootstrapBias:(id *)arg1 length:(unsigned long long)arg2 device:(id)arg3 stdDev:(float)arg4 values:(const void *)arg5;
- (void)bootstrapBuffer:(id)arg1 length:(unsigned long long)arg2 device:(id)arg3 stdDev:(float)arg4;
- (void)checkpointWithCommandQueue:(id)arg1;

@end
