/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@class NSString;

@protocol MPSCNNBatchNormalizationDataSource;

@interface MPSCNNBatchNormalizationNode : MPSNNFilterNode

{
    id <MPSCNNBatchNormalizationDataSource> _dataSource;
    unsigned long long _flags;
    unsigned long long _trainingStyle;
}

@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long trainingStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)nodeWithSource:(id)arg1 dataSource:(id)arg2;

- (void)dealloc;
- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)sourceStates;
- (id)resultStates;
- (id)initWithSource:(id)arg1 dataSource:(id)arg2;
- (_Bool)calculateStatistics;

@end
