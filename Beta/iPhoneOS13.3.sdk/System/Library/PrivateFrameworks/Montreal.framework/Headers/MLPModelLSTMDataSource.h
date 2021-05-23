/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <NSObject.h>

@class MPSCNNConvolutionDescriptor, NSString;

@interface MLPModelLSTMDataSource : NSObject

{
    MPSCNNConvolutionDescriptor *_desc;
    struct vector<float, std::__1::allocator<float>> _weight;
    struct vector<float, std::__1::allocator<float>> _bias;
    unsigned long long _weightID;
    unsigned long long _columns;
    unsigned long long _rows;
    unsigned long long _lstmInputSize;
    unsigned long long _lstmOutputSize;
}

@property unsigned long long weightID;
@property unsigned long long columns;
@property unsigned long long rows;
@property unsigned long long lstmInputSize;
@property unsigned long long lstmOutputSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)load;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)label;
- (unsigned int)dataType;
- (void *)weights;
- (void)loadWithInitialWeights_0:(float *)arg1 initialWeights_1:(float *)arg2 bias_0:(float *)arg3 bias_1:(float *)arg4 weightAttributes:(unsigned long long)arg5;
- (void)initializeWeightsAndBiases:(id)arg1;
- (id)descriptor;
- (float *)biasTerms;
- (void)purge;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithColumns:(unsigned long long)arg1 rows:(unsigned long long)arg2 lstmInputSize:(unsigned long long)arg3 lstmOutputSize:(unsigned long long)arg4 weightID:(unsigned long long)arg5 neuronType:(int)arg6 neuronA:(float)arg7 neuronB:(float)arg8 initialWeights_0:(float *)arg9 initialWeights_1:(float *)arg10 bias_0:(float *)arg11 bias_1:(float *)arg12 weightAttributes:(unsigned long long)arg13 deviceHandler:(id)arg14;
- (unsigned long long)weight_size;
- (unsigned long long)bias_size;
- (void)checkpoint;

@end
