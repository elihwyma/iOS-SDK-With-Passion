/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

@class MPSNNFilterNode;

@protocol MPSHandle, MPSImageAllocator;

@interface MPSNNImageNode : NSObject

{
    id <MPSHandle> _handle;
    MPSNNFilterNode *_parent;
    id <MPSImageAllocator> _imageAllocator;
    unsigned long long _clientCount;
    unsigned long long _format;
    _Bool _exportFromGraph;
    _Bool _synchronize;
    _Bool _stopGradient;
    _Bool _initializedWithParent;
}

@property (retain, nonatomic) id <MPSHandle> handle;
@property (nonatomic) unsigned long long format;
@property (retain, nonatomic) id <MPSImageAllocator> imageAllocator;
@property (nonatomic) _Bool exportFromGraph;
@property (nonatomic) _Bool synchronizeResource;
@property (nonatomic) _Bool stopGradient;

+ (id)nodeWithHandle:(id)arg1;
+ (id)exportedNodeWithHandle:(id)arg1;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithParent:(id)arg1;
- (id)debugQuickLookObject;
- (id)initWithHandle:(id)arg1;

@end
