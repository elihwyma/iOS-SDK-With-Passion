/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@class NSData;

@protocol MTLBuffer;

@interface MPSCNNNeuronGradient : MPSCNNGradientKernel

{
    int _neuronType;
    float _a;
    float _b;
    float _c;
    NSData *_data;
    _Bool _noCopy;
    unsigned long long _count;
    id <MTLBuffer> _aBuf;
}

@property (nonatomic, readonly) int neuronType;
@property (nonatomic, readonly) float a;
@property (nonatomic, readonly) float b;
@property (nonatomic, readonly) float c;
@property (retain, nonatomic, readonly) NSData *data;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 neuronDescriptor:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)initializeWithNeuronType:(int)arg1 neuronParameterA:(float)arg2 neuronParameterB:(float)arg3 neuronParameterC:(float)arg4;
- (void)initializeWithNeuronType:(int)arg1 neuronParameterA:(const float *)arg2 count:(unsigned long long)arg3;
- (id)privateInitWithDevice:(id)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4 type:(int)arg5;
- (id)privateInitWithDevice:(id)arg1 a:(const float *)arg2 count:(unsigned long long)arg3 type:(int)arg4;

@end
