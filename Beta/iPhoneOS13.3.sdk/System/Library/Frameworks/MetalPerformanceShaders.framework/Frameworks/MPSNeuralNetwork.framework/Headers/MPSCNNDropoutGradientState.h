/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

@protocol MTLBuffer;

@interface MPSCNNDropoutGradientState

{
    CDStruct_da2e99ad _maskStrideInPixels;
    float _keepProbability;
    unsigned long long _resourcePixelFormat;
    CDStruct_da2e99ad _resourceSize;
    unsigned long long _commonBufferOffsetBytes;
    id <MTLBuffer> _commonMaskBuffer;
}

- (id)init;
- (void)dealloc;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (id)maskData;

@end
