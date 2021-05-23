/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class MLAppleImageFeatureExtractorParameters, NSString;

@interface MLAppleImageFeatureExtractor : MLModel

{
    NSString *_inputFeatureName;
    NSString *_outputFeatureName;
    long long _outputDataType;
    int _extractorType;
    MLAppleImageFeatureExtractorParameters *_parameters;
}

@property (readonly) MLAppleImageFeatureExtractorParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)featureValueFromScenePrint:(id)arg1 elementSize:(unsigned long long)arg2;
- (id)initWithParameters:(id)arg1 modelDescription:(id)arg2 featureExtractorType:(int)arg3 configuration:(id)arg4 error:(id *)arg5;
- (id)computeScenePrintFeatures:(struct __CVBuffer *)arg1 handle:(id)arg2 useCPUOnly:(_Bool)arg3 error:(id *)arg4;

@end
