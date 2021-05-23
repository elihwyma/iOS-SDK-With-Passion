/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSState.h>

@class MPSImage, NSData;

@interface MPSCNNLossLabels : MPSState

{
    CDStruct_da2e99ad _lossImageSize;
    _Bool _isScalarLoss;
    unsigned long long _numNonZeroWeights;
    NSData *_userData;
    unsigned long long _userDataLayout;
    unsigned long long _numFeatureChannels_labels;
    unsigned long long _numFeatureChannels_loss;
    MPSImage *_userLabelsImage;
    MPSImage *_userWeightsImage;
}

- (id)init;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 lossImageSize:(CDStruct_14f26992)arg2 labelsImage:(id)arg3 weightsImage:(id)arg4;
- (id)lossImage;
- (id)initWithDevice:(id)arg1 lossImageSize:(CDStruct_14f26992)arg2 labelsDescriptor:(id)arg3 weightsDescriptor:(id)arg4;
- (id)initWithDevice:(id)arg1 labelsDescriptor:(id)arg2;
- (id)labelsImage;
- (id)weightsImage;

@end
