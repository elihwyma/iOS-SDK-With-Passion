/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class MPSCNNConvolutionDescriptor, NSString;

__attribute__((visibility("hidden")))
@interface VCPCNNMPSDataSource : NSObject

{
    unsigned int _dataType;
    MPSCNNConvolutionDescriptor *_descriptor;
    void *_kernelWeights;
    float *_biasTerms;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)load;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)label;
- (unsigned int)dataType;
- (void *)weights;
- (id)descriptor;
- (float *)biasTerms;
- (void)purge;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWith:(unsigned int)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(void *)arg3 biasTerm:(float *)arg4;

@end
