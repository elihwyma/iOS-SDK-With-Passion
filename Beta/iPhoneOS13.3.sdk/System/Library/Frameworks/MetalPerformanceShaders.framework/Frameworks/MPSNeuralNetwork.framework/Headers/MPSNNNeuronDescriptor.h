/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

#import <MPSNeuralNetwork/Swift-Protocol.h>

@class NSData;

@interface MPSNNNeuronDescriptor : NSObject <Swift>

{
    int _neuronType;
    float _a;
    float _b;
    float _c;
    NSData *_data;
    _Bool _noCopy;
    unsigned long long _count;
}

@property (nonatomic) int neuronType;
@property (nonatomic) float a;
@property (nonatomic) float b;
@property (nonatomic) float c;
@property (retain, nonatomic) NSData *data;

+ (_Bool)supportsSecureCoding;
+ (id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4;
+ (id)cnnNeuronPReLUDescriptorWithData:(id)arg1 noCopy:(_Bool)arg2;
+ (id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3;
+ (id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2;
+ (id)cnnNeuronDescriptorWithType:(int)arg1;

- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct NeuronInfo)neuronInfo;
- (void)initializeWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4;
- (id)initWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4;
- (void)initializeWithPReLUWithData:(id)arg1 noCopy:(_Bool)arg2;
- (id)initWithPReLUWithData:(id)arg1 noCopy:(_Bool)arg2;

@end
