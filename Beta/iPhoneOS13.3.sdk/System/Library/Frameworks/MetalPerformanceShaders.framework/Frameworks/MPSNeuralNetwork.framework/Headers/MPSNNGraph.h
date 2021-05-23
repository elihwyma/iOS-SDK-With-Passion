/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSKernel.h>

#import <MPSNeuralNetwork/Swift-Protocol.h>

@class NSArray;

@protocol MPSHandle, MPSImageAllocator;

@interface MPSNNGraph : MPSKernel <Swift>

{
    struct Graph _graph;
    id <MPSImageAllocator> _destinationImageAllocator;
    unsigned long long _format;
    _Bool _resultIsNeeded;
    _Bool _outputStateIsTemporary;
}

@property (copy, nonatomic, readonly) NSArray *sourceImageHandles;
@property (copy, nonatomic, readonly) NSArray *sourceStateHandles;
@property (copy, nonatomic, readonly) NSArray *intermediateImageHandles;
@property (copy, nonatomic, readonly) NSArray *resultStateHandles;
@property (nonatomic, readonly) id <MPSHandle> resultHandle;
@property (nonatomic) _Bool outputStateIsTemporary;
@property (retain, nonatomic) id <MPSImageAllocator> destinationImageAllocator;
@property (nonatomic) unsigned long long format;
@property (nonatomic, readonly) _Bool resultImageIsNeeded;

+ (const struct MPSLibraryInfo *)libraryInfo;
+ (id)graphWithDevice:(id)arg1 resultImage:(id)arg2 resultImageIsNeeded:(_Bool)arg3;
+ (id)graphWithDevice:(id)arg1 resultImage:(id)arg2;
+ (id)graphWithDevice:(id)arg1 resultImages:(id)arg2 resultsAreNeeded:(_Bool *)arg3;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 resultImage:(id)arg2 resultImageIsNeeded:(_Bool)arg3;
- (id)initWithDevice:(id)arg1 resultImage:(id)arg2;
- (id)initWithDevice:(id)arg1 resultImages:(id)arg2 resultsAreNeeded:(_Bool *)arg3;
- (id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 intermediateImages:(id)arg4 destinationStates:(id)arg5;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 intermediateImages:(id)arg4 destinationStates:(id)arg5;
- (id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3;
- (id)executeAsyncWithSourceImages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reloadFromDataSources;
- (unsigned long long)readCountForSourceImageAtIndex:(unsigned long long)arg1;
- (unsigned long long)readCountForSourceStateAtIndex:(unsigned long long)arg1;

@end
