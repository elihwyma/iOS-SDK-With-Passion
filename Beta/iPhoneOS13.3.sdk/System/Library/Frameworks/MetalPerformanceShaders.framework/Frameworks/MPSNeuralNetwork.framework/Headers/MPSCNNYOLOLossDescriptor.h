/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

#import <MPSNeuralNetwork/Swift-Protocol.h>

@class MPSCNNLossDescriptor, NSData;

@interface MPSCNNYOLOLossDescriptor : NSObject <Swift>

{
    MPSCNNLossDescriptor *_XYLossDescriptor;
    MPSCNNLossDescriptor *_WHLossDescriptor;
    MPSCNNLossDescriptor *_confidenceLossDescriptor;
    MPSCNNLossDescriptor *_classesLossDescriptor;
    int _reductionType;
    _Bool _rescore;
    float _scaleXY;
    float _scaleWH;
    float _scaleNoObject;
    float _scaleObject;
    float _scaleClass;
    float _minIOUForObjectPresence;
    float _maxIOUForObjectAbsence;
    NSData *_anchorBoxes;
    unsigned long long _numberOfAnchorBoxes;
}

@property (retain, nonatomic) MPSCNNLossDescriptor *XYLossDescriptor;
@property (retain, nonatomic) MPSCNNLossDescriptor *WHLossDescriptor;
@property (retain, nonatomic) MPSCNNLossDescriptor *confidenceLossDescriptor;
@property (retain, nonatomic) MPSCNNLossDescriptor *classesLossDescriptor;
@property (nonatomic) int reductionType;
@property (nonatomic) _Bool rescore;
@property (nonatomic) float scaleXY;
@property (nonatomic) float scaleWH;
@property (nonatomic) float scaleNoObject;
@property (nonatomic) float scaleObject;
@property (nonatomic) float scaleClass;
@property (nonatomic) float minIOUForObjectPresence;
@property (nonatomic) float maxIOUForObjectAbsence;
@property (nonatomic) unsigned long long numberOfAnchorBoxes;
@property (retain, nonatomic) NSData *anchorBoxes;

+ (id)cnnLossDescriptorWithXYLossType:(unsigned int)arg1 WHLossType:(unsigned int)arg2 confidenceLossType:(unsigned int)arg3 classesLossType:(unsigned int)arg4 reductionType:(int)arg5 anchorBoxes:(id)arg6 numberOfAnchorBoxes:(unsigned long long)arg7;

- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXYLossType:(unsigned int)arg1 WHLossType:(unsigned int)arg2 confidenceLossType:(unsigned int)arg3 classesLossType:(unsigned int)arg4 reductionType:(int)arg5 anchorBoxes:(id)arg6 numberOfAnchorBoxes:(unsigned long long)arg7;

@end
