/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSString;

@protocol MLCustomLayer;

__attribute__((visibility("hidden")))
@interface MLCustomLayerWrapper : NSObject

{
    _Bool _ndMode;
    NSString *_className;
    NSObject<MLCustomLayer> *_customImpl;
}

@property (nonatomic, readonly) _Bool ndMode;
@property (nonatomic, readonly) NSString *className;
@property (retain, nonatomic) NSObject<MLCustomLayer> *customImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)espressoTensorsToCoremlTensorsGPU:(id)arg1;
+ (int)intFromFourBytes:(char *)arg1;
+ (id)espressoTensorsToCoremlTensors:(id)arg1 ndMode:(_Bool)arg2;
+ (id)coremlShapesToEspressoShapes:(id)arg1 ndMode:(_Bool)arg2;
+ (id)factory;
+ (id)espressoShapesToCoremlShapes:(id)arg1 ndMode:(_Bool)arg2;
+ (id)espressoShapeToCoremlShape:(id)arg1 ndMode:(_Bool)arg2;
+ (id)coremlShapeToEspressoShape:(id)arg1 ndMode:(_Bool)arg2;
+ (id)getStrides:(id)arg1;
+ (id)espressoTensorToCoremlTensor:(id)arg1 ndMode:(_Bool)arg2;

- (id)initWithParameters:(id)arg1;
- (void)setMappedWeights:(void *)arg1 sizeInBytes:(unsigned long long)arg2;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (void)encodeToMetalCommandBuffer:(id)arg1 inputTensors:(id)arg2 outputTensors:(id)arg3;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;
- (_Bool)hasGPUSupport;

@end
