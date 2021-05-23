/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

@class NSString;

@interface ResourceWrapper : NSObject

{
    struct ResourceGraphNode *_node;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)wrapperWithResource:(struct ResourceGraphNode *)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void *)node;
- (id)initWithResource:(struct ResourceGraphNode *)arg1;

@end
