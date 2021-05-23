/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

@class MPSNNFilterNode;

@protocol MPSHandle;

@interface MPSNNStateNode : NSObject

{
    id <MPSHandle> _handle;
    MPSNNFilterNode *_parent;
    unsigned long long _clientCount;
    _Bool _synchronize;
    _Bool _exportFromGraph;
    _Bool _initializedWithParent;
}

@property (retain, nonatomic) id <MPSHandle> handle;
@property (nonatomic) _Bool exportFromGraph;
@property (nonatomic) _Bool synchronizeResource;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithParent:(id)arg1;
- (id)debugQuickLookObject;

@end
