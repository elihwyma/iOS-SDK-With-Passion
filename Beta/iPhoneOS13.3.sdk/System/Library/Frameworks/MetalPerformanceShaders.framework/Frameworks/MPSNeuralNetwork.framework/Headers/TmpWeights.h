/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

@class MPSCNNConvolutionDescriptor, NSString;

@protocol MPSCNNConvolutionDataSource;

@interface TmpWeights : NSObject

{
    id <MPSCNNConvolutionDataSource> _parentObj;
    MPSCNNConvolutionDescriptor *_convDesc;
    _Bool _hasBias;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)load;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)label;
- (unsigned int)dataType;
- (void *)weights;
- (id)descriptor;
- (float *)biasTerms;
- (void)purge;
- (id)initWithWeights:(id)arg1 useBias:(_Bool)arg2 desc:(id)arg3;

@end
