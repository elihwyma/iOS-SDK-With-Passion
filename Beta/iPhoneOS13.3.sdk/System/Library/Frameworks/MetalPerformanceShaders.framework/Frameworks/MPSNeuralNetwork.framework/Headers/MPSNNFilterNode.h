/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

@class MPSNNImageNode, MPSNNStateNode, NSArray, NSMutableArray, NSString;

@protocol MPSNNPadding;

@interface MPSNNFilterNode : NSObject

{
    NSMutableArray *_sourceImages;
    NSMutableArray *_sourceStates;
    MPSNNImageNode *_resultImage;
    NSMutableArray *_resultStates;
    id <MPSNNPadding> _paddingPolicy;
    NSString *_label;
}

@property (nonatomic, readonly) MPSNNImageNode *resultImage;
@property (nonatomic, readonly) MPSNNStateNode *resultState;
@property (nonatomic, readonly) NSArray *resultStates;
@property (retain, nonatomic) id <MPSNNPadding> paddingPolicy;
@property (copy) NSString *label;

- (void)dealloc;
- (id)debugDescription;
- (id)debugQuickLookObject;
- (id)initWithSourceImages:(id)arg1 sourceStates:(id)arg2 paddingPolicy:(id)arg3;
- (struct FilterGraphNode *)newFilterNode;
- (id)gradientFilterWithSource:(id)arg1;
- (Class)gradientClass;
- (id)gradientFilterWithSources:(id)arg1;
- (id)gradientFiltersWithSources:(id)arg1;
- (id)sourceImages;
- (id)sourceStates;
- (id)resultStatesNoAllocate;
- (id)trainingGraphWithSourceGradient:(id)arg1 nodeHandler:(CDUnknownBlockType)arg2;
- (id)gradientFiltersWithSource:(id)arg1;

@end
