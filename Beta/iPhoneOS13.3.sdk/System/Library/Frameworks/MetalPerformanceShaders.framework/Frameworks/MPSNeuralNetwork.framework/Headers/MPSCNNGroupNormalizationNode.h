/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@class NSString;

@protocol MPSCNNGroupNormalizationDataSource;

@interface MPSCNNGroupNormalizationNode : MPSNNFilterNode

{
    id <MPSCNNGroupNormalizationDataSource> _dataSource;
    unsigned long long _trainingStyle;
}

@property (nonatomic) unsigned long long trainingStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)nodeWithSource:(id)arg1 dataSource:(id)arg2;

- (void)dealloc;
- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)arg1 dataSource:(id)arg2;

@end
