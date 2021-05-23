/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

#import <MPSNeuralNetwork/Swift-Protocol.h>

@interface FilterNodeWrapper : NSObject <Swift>

{
    struct FilterGraphNode *node;
}

+ (_Bool)supportsSecureCoding;
+ (id)wrapperWithFilterNode:(struct FilterGraphNode *)arg1;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct FilterGraphNode *)node;
- (id)initWithFilterNode:(struct FilterGraphNode *)arg1;

@end
