/*
 Image: /System/Library/PrivateFrameworks/AppleCVA.framework/AppleCVA
 */

#import <Foundation/NSObject.h>

@class MPSCNNConvolutionDescriptor, NSString;

@interface MPSConvWeights : NSObject

{
    unsigned int _dataType;
    MPSCNNConvolutionDescriptor *_descriptor;
    void *_weights;
    float *_biasTerms;
    NSString *_label;
}

@property unsigned int dataType;
@property (retain, nonatomic) MPSCNNConvolutionDescriptor *descriptor;
@property (nonatomic) void *weights;
@property (nonatomic) float *biasTerms;
@property (retain, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)load;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)purge;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;

@end
