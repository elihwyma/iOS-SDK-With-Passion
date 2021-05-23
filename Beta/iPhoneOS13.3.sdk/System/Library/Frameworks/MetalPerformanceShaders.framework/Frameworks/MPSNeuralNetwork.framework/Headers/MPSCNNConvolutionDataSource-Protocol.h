/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/Swift-Protocol.h>

@protocol MPSCNNConvolutionDataSource <Swift>

- (unsigned short)load;
- (unsigned short)label;
- (unsigned short)dataType;
- (unsigned short)weights;
- (unsigned short)descriptor;
- (unsigned short)biasTerms;
- (unsigned short)purge;

@end
